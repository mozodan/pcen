<?php
/**
 * @file
 * Contains PersonsMigration.
 */

class CounselingTaxonomyMigration extends XMLMigration {

  public function custom_drpl_migrate_callback_get_township($name) {
    $sql = db_select('taxonomy_term_data','t');
    $sql->join('taxonomy_vocabulary', 'v', 't.vid = v.vid');
    $sql->addField('t', 'tid');
    $sql->condition('v.machine_name', 'municipalities', '=');
    $sql->condition('t.name', $name, '=');
    $query = $sql->execute()->fetchField();
    return (!empty($query)) ? $query : FALSE;
  }
  public function custom_drpl_migrate_callback_get_default_province($name) {
    $sql = db_select('taxonomy_term_data','t');
    $sql->join('taxonomy_vocabulary', 'v', 't.vid = v.vid');
    $sql->addField('t', 'tid');
    $sql->condition('v.machine_name', 'provinces', '=');
    $sql->condition('t.name', $name, '=');
    $query = $sql->execute()->fetchField();
    return (!empty($query)) ? $query : FALSE;
  }
  public function custom_drpl_migrate_import_municipalities(){
    //Delete municipalities if exist
    $vocabulary = taxonomy_vocabulary_machine_name_load('municipalities');
    foreach (taxonomy_get_tree($vocabulary->vid) as $term) {
      taxonomy_term_delete($term->tid);
    }
    //Import municipalities
    $vid = $vocabulary->vid;
    $default_province = $this->custom_drpl_migrate_callback_get_default_province('Madrid');
    $xml = drupal_get_path('module', 'custom_drpl_migrate') . "/files/terms-counseling.xml";
    $xml = simplexml_load_file($xml, 'SimpleXMLElement');
    foreach ($xml->xpath('//municipio') as $municipality) {
      $municipalities[] = (string) $municipality;
    }
    $municipalities = array_unique($municipalities);
    foreach ($municipalities as $municipality) {
      if (!empty($municipality)) {
        $term = new stdClass();
        $term->vid = $vid;
        $term->name = $municipality;
        $term->field_province[LANGUAGE_NONE][0]['target_id'] = $default_province;
        taxonomy_term_save($term);
      }
    }
  }
  public function preImport() {
    parent::preImport();
    $this->custom_drpl_migrate_import_municipalities();
  }
  public function __construct($arguments) {
    $title = 'Counselings';
    $file_import = 'terms-counseling.xml';
    $vocabulary = 'counseling';
    parent::__construct($arguments);
    $this->description = t ('DRPL ' . $title . ' migration');
    $item_xpath = '/consejerias/consejeria';
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        '@id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'size' => 'big'
        )
      ),
      MigrateDestinationTerm::getKeySchema()
    );
    $fields = array(
      'tuuid' => t('UUID Migration'),
      'responsible' => t('Responsible'),
      'municipality' => t('Municipality'),
      'address' => t('Address'),
      'district' => t('District'),
      'postal_code' => t('Postal Code'),
      'phone' => t('Phone'),
      'name' => t('Name'),
    );
    $items_class = new MigrateItemsXML(drupal_get_path('module', 'custom_drpl_migrate') . "/files/" . $file_import, $item_xpath, '@id');
    $this->source = new MigrateSourceMultiItems($items_class, $fields);
    $this->destination = new MigrateDestinationTerm($vocabulary);
    $this->addFieldMapping('name', 'name')->xpath('nombre');
    $this->addFieldMapping('format')->defaultValue('full_html');
    $this->addFieldMapping('field_uuid_migration', 'tuuid');
    $this->addFieldMapping('field_responsible','responsible');
    $this->addFieldMapping('field_municipality','municipality');
    $this->addFieldMapping('field_long_address','address');
    $this->addFieldMapping('field_district','district');
    $this->addFieldMapping('field_postal_code','postal_code');
    $this->addFieldMapping('field_long_phone','phone');
  }
  public function prepareKey($source_key, $row) {
    $key = array();
    $xml_array = prepareValuesXML($row->xml);
    $id = $xml_array['@attributes']['id'];
    $row->{'@id'} = substr($id, -5);
    $key['@id'] = $row->{'@id'};
    return $key;
  }
  public function prepareRow($row) {
    $xml_array = prepareValuesXML($row->xml);
    $id = isset($xml_array['@attributes']['id']) ? $xml_array['@attributes']['id'] : NULL;
    $responsible = isset($xml_array['responsable']) ? $xml_array['responsable'] : NULL;
    $municipality = isset($xml_array['municipio']) ? $xml_array['municipio'] : NULL;
    $address = isset($xml_array['direccion']) ? $xml_array['direccion'] : NULL;
    $district = isset($xml_array['distrito']) ? $xml_array['distrito'] : NULL;
    $postal_code = isset($xml_array['codigopostal']) ? $xml_array['codigopostal'] : NULL;
    $phone = isset($xml_array['telefono']) ? $xml_array['telefono'] : NULL;
    if (!empty($id)) {
      $row->tuuid = $id;
    }
    if (!empty($responsible)) {
      $row->responsible = str_replace('null', '', $responsible);
    }
    if (!empty($municipality)) {
      $row->municipality = $municipality;
    }
    if (!empty($address)) {
      $row->address = $address;
    } 
    if (!empty($district)) {
      $row->district = $district;
    } 
    if (!empty($postal_code)) {
      $row->postal_code = $postal_code;
    } 
    if (!empty($phone)) {
      $row->phone = $phone;
    } 
  }
  public function complete($entity, stdClass $row) {
    if (isset($entity->tid) && !empty($entity->tid)) {
      $xml_array = prepareValuesXML($row->xml);
      $organism = isset($xml_array['organismo']) ? $xml_array['organismo'] : NULL;
      if (!empty($organism)) {
        $multiple_items_organism = TRUE;
        $i = 0;
        //ORGANISM
        foreach ($organism as $key => $organization) {
          if (is_numeric($key)) {
            $organization_name = isset($organization['nombre']) ? $organization['nombre'] : NULL;
            $organization_responsible = isset($organization['responsable']) ? truncate_utf8($organization['responsable'], '255') : NULL;
            $organization_address = isset($organization['direccion']) ? $organization['direccion'] : NULL;
            $organization_district = isset($organization['distrito']) ? $organization['distrito'] : NULL;
            $organization_postalcode = isset($organization['codigopostal']) ? (int)$organization['codigopostal'] : NULL;
            $organization_phone = isset($organization['telefono']) ? $organization['telefono'] : NULL;
            $organization_township = isset($organization['municipio']) ? $organization['municipio'] : NULL;
            $organization_uuid = isset($organization['@attributes']['id']) ? $organization['@attributes']['id'] : NULL;
          }
          else{
            $multiple_items_organism = FALSE;
            $organization_name = isset($organism['organismo']['nombre']) ? $organism['organismo']['nombre'] : NULL;
            $organization_responsible = isset($organism['organismo']['responsable']) ? truncate_utf8($organism['organismo']['responsable'], '255') : NULL;
            $organization_address = isset($organism['organismo']['direccion']) ? $organism['organismo']['direccion'] : NULL;
            $organization_district = isset($organism['organismo']['distrito']) ? $organism['organismo']['distrito'] : NULL;
            $organization_postalcode = isset($organism['organismo']['codigopostal']) ? (int)$organism['organismo']['codigopostal'] : NULL;
            $organization_phone = isset($organism['organismo']['telefono']) ? $organism['organismo']['telefono'] : NULL;
            $organization_township = isset($organism['organismo']['municipio']) ? $organism['organismo']['municipio'] : NULL;
            $organization_uuid = isset($organism['organismo']['@attributes']['id']) ? $organism['organismo']['@attributes']['id'] : NULL;
          }
          if (($multiple_items_organism == FALSE && $i < 1) || $multiple_items_organism == TRUE) {
            $term = new stdClass();
            $term->vid = $entity->vid;
            $term->parent = $entity->tid;
            if (!empty($organization_name)) {
              $term->name = $organization_name;
            }
            if (!empty($organization_uuid)) {
              $term->field_uuid_migration[LANGUAGE_NONE][0]['value'] = $organization_uuid;
            }
            if (!empty($organization_responsible)) {
              $term->field_responsible[LANGUAGE_NONE][0]['value'] = $organization_responsible;
            }
            if (!empty($organization_address)) {
              $term->field_long_address[LANGUAGE_NONE][0]['value'] = $organization_address;
              $term->field_long_address[LANGUAGE_NONE][0]['format'] = 'full_html';
            }
            if (!empty($organization_district)) {
              $term->field_district[LANGUAGE_NONE][0]['value'] = $organization_district;
            }
            if (!empty($organization_postalcode)) {
              $organization_postalcode = preg_replace('/\D/',"", $organization_postalcode);
              $term->field_postal_code[LANGUAGE_NONE][0]['value'] = $organization_postalcode;
            }
            if (!empty($organization_phone)) {
              $term->field_long_phone[LANGUAGE_NONE][0]['value'] = $organization_phone;
              $term->field_long_phone[LANGUAGE_NONE][0]['format'] = 'full_html';
            }
            if (!empty($organization_township)) {
              $organization_township_id = $this->custom_drpl_migrate_callback_get_township($organization_township);
              if (!empty($organization_township_id) && is_numeric($organization_township_id)) {  
                $term->field_municipality[LANGUAGE_NONE][0]['target_id'] = $organization_township_id;
              }
            }
            taxonomy_term_save($term);
            $organization_id = $term->tid;
          }
          if ($organization_id) {
            //ORGANISM - CENTERS
            if (isset($organization['centro'])) {
              $multiple_items_center = TRUE;
              $u = 0;
              foreach ($organization['centro'] as $val => $center) {
                if (is_numeric($val)) {
                  $center_name = isset($center['nombre']) ? $center['nombre'] : NULL;
                  $center_responsible = isset($center['responsable']) ? truncate_utf8($center['responsable'], '255') : NULL;
                  $center_address = isset($center['direccion']) ? $center['direccion'] : NULL;
                  $center_district = isset($center['distrito']) ? $center['distrito'] : NULL;
                  $center_postalcode = isset($center['codigopostal']) ? (int)$center['codigopostal'] : NULL;
                  $center_phone = isset($center['telefono']) ? $center['telefono'] : NULL;
                  $center_township = isset($center['municipio']) ? $center['municipio'] : NULL;
                  $center_uuid = isset($center['@attributes']['id']) ? $center['@attributes']['id'] : NULL;
                }
                else{
                  $multiple_items_center = FALSE;
                  $center_name = isset($organization['centro']['nombre']) ? $organization['centro']['nombre'] : NULL;
                  $center_responsible = isset($organization['centro']['responsable']) ? truncate_utf8($organization['centro']['responsable'], '255') : NULL;
                  $center_address = isset($organization['centro']['direccion']) ? $organization['centro']['direccion'] : NULL;
                  $center_district = isset($organization['centro']['distrito']) ? $organization['centro']['distrito'] : NULL;
                  $center_postalcode = isset($organization['centro']['codigopostal']) ? (int)$organization['centro']['codigopostal'] : NULL;
                  $center_phone = isset($organization['centro']['telefono']) ? $organization['centro']['telefono'] : NULL;
                  $center_township = isset($organization['centro']['municipio']) ? $organization['centro']['municipio'] : NULL;
                  $center_uuid = isset($organization['centro']['@attributes']['id']) ? $organization['centro']['@attributes']['id'] : NULL;
                }
                if (($multiple_items_center == FALSE && $u < 1) || $multiple_items_center == TRUE) {
                  $term = new stdClass();
                  $term->vid = $entity->vid;
                  $term->parent = $organization_id;
                  if (!empty($center_name)) {
                    $term->name = $center_name;
                  }
                  if (!empty($center_uuid)) {
                    $term->field_uuid_migration[LANGUAGE_NONE][0]['value'] = $center_uuid;
                  }
                  if (!empty($center_responsible)) {
                    $term->field_responsible[LANGUAGE_NONE][0]['value'] = $center_responsible;
                  }
                  if (!empty($center_address)) {
                    $term->field_long_address[LANGUAGE_NONE][0]['value'] = $center_address;
                    $term->field_long_address[LANGUAGE_NONE][0]['format'] = 'full_html';
                  }
                  if (!empty($center_district)) {
                    $term->field_district[LANGUAGE_NONE][0]['value'] = $center_district;
                  }
                  if (!empty($center_postalcode)) {
                    $center_postalcode = preg_replace('/\D/',"", $center_postalcode);
                    $term->field_postal_code[LANGUAGE_NONE][0]['value'] = $center_postalcode;
                  }
                  if (!empty($center_phone)) {
                    $term->field_long_phone[LANGUAGE_NONE][0]['value'] = $center_phone;
                    $term->field_long_phone[LANGUAGE_NONE][0]['format'] = 'full_html';
                  }
                  if (!empty($center_township)) {
                    $center_township_id = $this->custom_drpl_migrate_callback_get_township($center_township);
                    if (!empty($center_township_id) && is_numeric($center_township_id)) {
                      $term->field_municipality[LANGUAGE_NONE][0]['target_id'] = $center_township_id;
                    }
                  }
                  taxonomy_term_save($term);
                }
                $u++;
              }
            }
            //ORGANISM - ORGANISM
            if (isset($organization['organismo'])) {
              $multiple_items_suborganism = TRUE;
              $t = 0;
              foreach ($organization['organismo'] as $tp => $sub_organization) {
                if (is_numeric($tp)) {
                  $sub_organization_name = isset($sub_organization['nombre']) ? $sub_organization['nombre'] : NULL;
                  $sub_organization_responsible = isset($sub_organization['responsable']) ? truncate_utf8($sub_organization['responsable'], '255') : NULL;
                  $sub_organization_address = isset($sub_organization['direccion']) ? $sub_organization['direccion'] : NULL;;
                  $sub_organization_district = isset($sub_organization['distrito']) ? $sub_organization['distrito'] : NULL;
                  $sub_organization_postalcode = isset($sub_organization['codigopostal']) ? (int)$sub_organization['codigopostal'] : NULL;
                  $sub_organization_phone = isset($sub_organization['telefono']) ? $sub_organization['telefono'] : NULL;
                  $sub_organization_township = isset($sub_organization['municipio']) ? $sub_organization['municipio'] : NULL;
                  $sub_organization_uuid = isset($sub_organization['@attributes']['id']) ? $sub_organization['@attributes']['id'] : NULL;
                }
                else{
                  $multiple_items_suborganism = FALSE;
                  $sub_organization_name = isset($organization['organismo']['nombre']) ? $organization['organismo']['nombre'] : NULL;
                  $sub_organization_responsible = isset($organization['organismo']['responsable']) ? truncate_utf8($organization['organismo']['responsable'], '255') : NULL;
                  $sub_organization_address = isset($organization['organismo']['direccion']) ? $organization['organismo']['direccion'] : NULL;
                  $sub_organization_district = isset($organization['organismo']['distrito']) ? $organization['organismo']['distrito'] : NULL;
                  $sub_organization_postalcode = isset($organization['organismo']['codigopostal']) ? (int)$organization['organismo']['codigopostal'] : NULL;
                  $sub_organization_phone = isset($organization['organismo']['telefono']) ? $organization['organismo']['telefono'] : NULL;
                  $sub_organization_township = isset($organization['organismo']['municipio']) ? $organization['organismo']['municipio'] : NULL;
                  $sub_organization_uuid = isset($organization['organismo']['@attributes']['id']) ? $organization['organismo']['@attributes']['id'] : NULL;
                }
                if (($multiple_items_suborganism == FALSE && $t < 1) || $multiple_items_suborganism == TRUE) {
                  $term = new stdClass();
                  $term->vid = $entity->vid;
                  $term->parent = $organization_id;
                  if (!empty($sub_organization_name)) {
                    $term->name = $sub_organization_name;
                  }
                  if (!empty($sub_organization_uuid)) {
                    $term->field_uuid_migration[LANGUAGE_NONE][0]['value'] = $sub_organization_uuid;
                  }
                  if (!empty($sub_organization_responsible)) {
                    $term->field_responsible[LANGUAGE_NONE][0]['value'] = $sub_organization_responsible;
                  }
                  if (!empty($sub_organization_address)) {
                    $term->field_long_address[LANGUAGE_NONE][0]['value'] = $sub_organization_address;
                    $term->field_long_address[LANGUAGE_NONE][0]['format'] = 'full_html';
                  }
                  if (!empty($sub_organization_district)) {
                    $term->field_district[LANGUAGE_NONE][0]['value'] = $sub_organization_district;
                  }
                  if (!empty($sub_organization_postalcode)) {
                    $sub_organization_postalcode = preg_replace('/\D/',"", $sub_organization_postalcode);
                    $term->field_postal_code[LANGUAGE_NONE][0]['value'] = $sub_organization_postalcode;
                  }
                  if (!empty($sub_organization_phone)) {
                    $term->field_long_phone[LANGUAGE_NONE][0]['value'] = $sub_organization_phone;
                    $term->field_long_phone[LANGUAGE_NONE][0]['format'] = 'full_html';
                  }
                  if (!empty($sub_organization_township)) {
                    $sub_organization_township_id = $this->custom_drpl_migrate_callback_get_township($sub_organization_township);
                    if (!empty($sub_organization_township_id) && is_numeric($sub_organization_township_id)) {
                      $term->field_municipality[LANGUAGE_NONE][0]['target_id'] = $sub_organization_township_id;
                    }
                  }
                  taxonomy_term_save($term);
                  $sub_organization_id = $term->tid;
                }
                if ($sub_organization_id) {
                  //ORGANISM - ORGANISM - CENTERS
                  if (isset($sub_organization['centro'])) {
                    $multiple_items_subcenter = TRUE;
                    $r = 0;
                    foreach ($sub_organization['centro'] as $rt => $sub_center) {
                      if (is_numeric($rt)) {
                        $sub_center_name = isset($sub_center['nombre']) ? $sub_center['nombre'] : NULL;
                        $sub_center_responsible = isset($sub_center['responsable']) ? truncate_utf8($sub_center['responsable'], '255') : NULL;
                        $sub_center_address = isset($sub_center['direccion']) ? $sub_center['direccion'] : NULL;;
                        $sub_center_district = isset($sub_center['distrito']) ? $sub_center['distrito'] : NULL;
                        $sub_center_postalcode = isset($sub_center['codigopostal']) ? (int)$sub_center['codigopostal'] : NULL;
                        $sub_center_phone = isset($sub_center['telefono']) ? $sub_center['telefono'] : NULL;
                        $sub_center_township = isset($sub_center['municipio']) ? $sub_center['municipio'] : NULL;
                        $sub_center_uuid = isset($sub_center['@attributes']['id']) ? $sub_center['@attributes']['id'] : NULL;
                      }
                      else{
                        $multiple_items_subcenter = FALSE;
                        $sub_center_name = isset($sub_organization['centro']['nombre']) ? $sub_organization['centro']['nombre'] : NULL;
                        $sub_center_responsible = isset($sub_organization['centro']['responsable']) ? truncate_utf8($sub_organization['centro']['responsable'], '255') : NULL;
                        $sub_center_address = isset($sub_organization['centro']['direccion']) ? $sub_organization['centro']['direccion'] : NULL;
                        $sub_center_district = isset($sub_organization['centro']['distrito']) ? $sub_organization['centro']['distrito'] : NULL;
                        $sub_center_postalcode = isset($sub_organization['centro']['codigopostal']) ? (int)$sub_organization['centro']['codigopostal'] : NULL;
                        $sub_center_phone = isset($sub_organization['centro']['telefono']) ? $sub_organization['centro']['telefono'] : NULL;
                        $sub_center_township = isset($sub_organization['centro']['municipio']) ? $sub_organization['centro']['municipio'] : NULL;
                        $sub_center_uuid = isset($sub_organization['centro']['@attributes']['id']) ? $sub_organization['centro']['@attributes']['id'] : NULL;
                      }
                      if (($multiple_items_subcenter == FALSE && $r < 1) || $multiple_items_subcenter == TRUE) {
                        $term = new stdClass();
                        $term->vid = $entity->vid;
                        $term->parent = $sub_organization_id;
                        if (!empty($sub_center_name)) {
                          $term->name = $sub_center_name;
                        }
                        if (!empty($sub_center_uuid)) {
                          $term->field_uuid_migration[LANGUAGE_NONE][0]['value'] = $sub_center_uuid;
                        }
                        if (!empty($sub_center_responsible)) {
                          $term->field_responsible[LANGUAGE_NONE][0]['value'] = $sub_center_responsible;
                        }
                        if (!empty($sub_center_address)) {
                          $term->field_long_address[LANGUAGE_NONE][0]['value'] = $sub_center_address;
                          $term->field_long_address[LANGUAGE_NONE][0]['format'] = 'full_html';
                        }
                        if (!empty($sub_center_district)) {
                          $term->field_district[LANGUAGE_NONE][0]['value'] = $sub_center_district;
                        }
                        $sub_center_postalcode = preg_replace('/\D/',"", $sub_center_postalcode);
                        if (!empty($sub_center_postalcode)) {
                          $term->field_postal_code[LANGUAGE_NONE][0]['value'] = $sub_center_postalcode;
                        }
                        if (!empty($sub_center_phone)) {
                          $term->field_long_phone[LANGUAGE_NONE][0]['value'] = $sub_center_phone;
                          $term->field_long_phone[LANGUAGE_NONE][0]['format'] = 'full_html';
                        }
                        if (!empty($sub_center_township)) {
                          $sub_center_township_id = $this->custom_drpl_migrate_callback_get_township($sub_center_township);
                          if (!empty($sub_center_township_id) && is_numeric($sub_center_township_id)) {
                            $term->field_municipality[LANGUAGE_NONE][0]['target_id'] = $sub_center_township_id;
                          }
                        }
                        taxonomy_term_save($term);
                        $sub_center_id = $term->tid;
                        if ($sub_center_id) {
                        //ORGANISM - ORGANISM - CENTERS - CENTERS
                          if (isset($sub_center['centro'])) {
                            $multiple_items_subcenter_center = TRUE;
                            $p = 0;
                            foreach ($sub_center['centro'] as $pul => $item) {
                              if (is_numeric($pul)) {
                                $item_center_name = isset($item['nombre']) ? $item['nombre'] : NULL;
                                $item_center_responsible = isset($item['responsable']) ? truncate_utf8($item['responsable'], '255') : NULL;
                                $item_center_address = isset($item['direccion']) ? $item['direccion'] : NULL;;
                                $item_center_district = isset($item['distrito']) ? $item['distrito'] : NULL;
                                $item_center_postalcode = isset($item['codigopostal']) ? (int)$item['codigopostal'] : NULL;
                                $item_center_phone = isset($item['telefono']) ? $item['telefono'] : NULL;
                                $item_center_township = isset($item['municipio']) ? $item['municipio'] : NULL;
                                $item_center_uuid = isset($item['@attributes']['id']) ? $item['@attributes']['id'] : NULL;
                              }
                              else{
                                $multiple_items_subcenter_center = FALSE;
                                $item_center_name = isset($sub_center['centro']['nombre']) ? $sub_center['centro']['nombre'] : NULL;
                                $item_center_responsible = isset($sub_center['centro']['responsable']) ? truncate_utf8($sub_center['centro']['responsable'], '255') : NULL;
                                $item_center_address = isset($sub_center['centro']['direccion']) ? $sub_center['centro']['direccion'] : NULL;
                                $item_center_district = isset($sub_center['centro']['distrito']) ? $sub_center['centro']['distrito'] : NULL;
                                $item_center_postalcode = isset($sub_center['centro']['codigopostal']) ? (int)$sub_center['centro']['codigopostal'] : NULL;
                                $item_center_phone = isset($sub_center['centro']['telefono']) ? $sub_center['centro']['telefono'] : NULL;
                                $item_center_township = isset($sub_center['centro']['municipio']) ? $sub_center['centro']['municipio'] : NULL;
                                $item_center_uuid = isset($sub_center['centro']['@attributes']['id']) ? $sub_center['centro']['@attributes']['id'] : NULL;
                              }

                              if (($multiple_items_subcenter_center == FALSE && $p < 1) || $multiple_items_subcenter_center == TRUE) {
                                $term = new stdClass();
                                $term->vid = $entity->vid;
                                $term->parent = $sub_center_id;
                                if (!empty($item_center_name)) {
                                  $term->name = $item_center_name;
                                }
                                if (!empty($item_center_uuid)) {
                                  $term->field_uuid_migration[LANGUAGE_NONE][0]['value'] = $item_center_uuid;
                                }
                                if (!empty($item_center_responsible)) {
                                  $term->field_responsible[LANGUAGE_NONE][0]['value'] = $item_center_responsible;
                                }
                                if (!empty($item_center_address)) {
                                  $term->field_long_address[LANGUAGE_NONE][0]['value'] = $item_center_address;
                                  $term->field_long_address[LANGUAGE_NONE][0]['format'] = 'full_html';
                                }
                                if (!empty($item_center_district)) {
                                  $term->field_district[LANGUAGE_NONE][0]['value'] = $item_center_district;
                                }
                                $item_center_postalcode = preg_replace('/\D/',"", $item_center_postalcode);
                                if (!empty($item_center_postalcode)) {
                                  $term->field_postal_code[LANGUAGE_NONE][0]['value'] = $item_center_postalcode;
                                }
                                if (!empty($item_center_phone)) {
                                  $term->field_long_phone[LANGUAGE_NONE][0]['value'] = $item_center_phone;
                                  $term->field_long_phone[LANGUAGE_NONE][0]['format'] = 'full_html';
                                }
                                if (!empty($item_center_township)) {
                                  $item_center_township_id = $this->custom_drpl_migrate_callback_get_township($item_center_township);
                                  if (!empty($item_center_township_id) && is_numeric($item_center_township_id)) {
                                    $term->field_municipality[LANGUAGE_NONE][0]['target_id'] = $item_center_township_id;
                                  }
                                }
                                taxonomy_term_save($term);
                              }
                              $p++;
                            }
                          }
                        }  
                      }
                      $r++;  
                    }
                  }
                }
                $t++;
              }
            }
          }
          $i++;
        }
      }
    }
  }
}
