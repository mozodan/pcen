<?php
/**
 * @file
 * Contains CMPersonasMigration.
 */

class ThematicTaxonomyMigration extends XMLMigration {
  public function __construct($arguments) {
    switch ($arguments['machine_name']) {
      case 'segments_taxonomy':
        $title = 'segments/thematics';
        $file_import = 'terms-segments.xml';
        $vocabulary = 'thematics';
        break;
      case 'enjoy_taxonomy':
        $title = 'enjoy category';
        $file_import = 'terms-enjoy_category.xml';
        $vocabulary = 'enjoy_category';
        break;
      case 'invest_taxonomy':
        $title = 'invest category';
        $file_import = 'terms-invest_category.xml';
        $vocabulary = 'invest_category';
        break;
      case 'live_taxonomy':
        $title = 'live category';
        $file_import = 'terms-live_category.xml';
        $vocabulary = 'live_category';
        break;
      case 'open_government_taxonomy':
        $title = 'open governament';
        $file_import = 'terms-open_government_category.xml';
        $vocabulary = 'open_government';
        break;
    }
    parent::__construct($arguments);
    $this->description = t ('DRPL ' . $title . ' migration');
    $item_xpath = '/terms/term';
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id_source' => array(
          'type' => 'int',
          'not null' => TRUE,
        )
      ),
      MigrateDestinationTerm::getKeySchema()
    );
    $fields = array(
      'weight' => t('Weight'),
      'tuuid' => t('UUID Migration'),
      'parent' => t('Parent'),
      'name' => t('Name'),
      'description' => t('Description')
    );
    //Not apply to segments taxonomy
    if ($arguments['machine_name'] !== 'segments_taxonomy') {
      $fields['color'] = t('Color');
    }
    $items_class = new MigrateItemsXML(drupal_get_path('module', 'custom_drpl_migrate') . "/files/" . $file_import, $item_xpath, 'id_source');
    $this->source = new MigrateSourceMultiItems($items_class, $fields);
    $this->destination = new MigrateDestinationTerm($vocabulary);
    $this->addFieldMapping('name', 'name')->xpath('name');
    $this->addFieldMapping('description', 'description')->xpath('description');
    $this->addFieldMapping('format')->defaultValue('full_html');
    $this->addFieldMapping('weight', 'weight')->xpath('weight');
    $this->addFieldMapping('field_uuid_migration', 'tuuid')->xpath('tuuid');
    $this->addFieldMapping('parent', 'parent');
    //Not apply to segments taxonomy
    if ($arguments['machine_name'] !== 'segments_taxonomy') {
      $this->addFieldMapping('field_color', 'color');
    }
  }
  public function prepareRow($row) {
    //Add taxonomy parent tree
    if (module_exists('uuid')) {
      if (isset($row->xml->tuuid_parent) && !empty($row->xml->tuuid_parent)) {
        $parent_uuid = $row->xml->tuuid_parent->__toString();
        $parent_term_id = db_select('field_data_field_uuid_migration', 't')
          ->fields('t', array('entity_id'))
          ->condition('field_uuid_migration_value', $parent_uuid, '=')
          ->execute()
          ->fetchField();
        if (!empty($parent_term_id)) {
          $row->parent = $parent_term_id;
        }
      }
    }
  }
}