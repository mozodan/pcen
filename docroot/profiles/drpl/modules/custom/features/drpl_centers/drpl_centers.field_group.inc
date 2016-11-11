<?php
/**
 * @file
 * drpl_centers.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drpl_centers_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address|node|centers|teaser';
  $field_group->group_name = 'group_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'centers';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_right_column';
  $field_group->data = array(
    'label' => 'Dirección',
    'weight' => '10',
    'children' => array(
      0 => 'field_long_address',
      1 => 'field_postal_code',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Dirección',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-address field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_address|node|centers|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|centers|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'centers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacto',
    'weight' => '2',
    'children' => array(
      0 => 'field_district',
      1 => 'field_email',
      2 => 'field_location',
      3 => 'field_long_address',
      4 => 'field_long_phone',
      5 => 'field_office_hours',
      6 => 'field_postal_code',
      7 => 'field_transport_consult',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_contact|node|centers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|centers|form';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'centers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secciones encabezado',
    'weight' => '4',
    'children' => array(
      0 => 'field_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-header field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_header|node|centers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|centers|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'centers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Oculto',
    'weight' => '5',
    'children' => array(
      0 => 'field_related_thematic',
      1 => 'workbench_access',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Oculto',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hidden field-group-div element-hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hidden|node|centers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_column|node|centers|teaser';
  $field_group->group_name = 'group_left_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'centers';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columna izquierda',
    'weight' => '0',
    'children' => array(
      0 => 'field_gallery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Columna izquierda',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-left-column field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_left_column|node|centers|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|node|centers|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'centers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_center_type',
      2 => 'field_short_description',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-main-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_main_information|node|centers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_componentes|node|centers|form';
  $field_group->group_name = 'group_paragraph_componentes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'centers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secciones',
    'weight' => '1',
    'children' => array(
      0 => 'field_paragraphs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-componentes field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_componentes|node|centers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|node|centers|teaser';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'centers';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columna derecha',
    'weight' => '1',
    'children' => array(
      0 => 'field_center_type',
      1 => 'field_long_phone',
      2 => 'title',
      3 => 'group_address',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Columna derecha',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-right-column field-group-div col-md-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_right_column|node|centers|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tag|node|centers|form';
  $field_group->group_name = 'group_tag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'centers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorización',
    'weight' => '3',
    'children' => array(
      0 => 'field_categories',
      1 => 'field_enjoy_category',
      2 => 'field_invest_category',
      3 => 'field_live_category',
      4 => 'field_open_government',
      5 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tag field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tag|node|centers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_information|node|centers|block_teaser';
  $field_group->group_name = 'group_text_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'centers';
  $field_group->mode = 'block_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Texto informativo',
    'weight' => '0',
    'children' => array(
      0 => 'field_short_description',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Texto informativo',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_text_information|node|centers|block_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_information|node|centers|block_teaser_horizontal';
  $field_group->group_name = 'group_text_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'centers';
  $field_group->mode = 'block_teaser_horizontal';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Texto informativo',
    'weight' => '0',
    'children' => array(
      0 => 'field_short_description',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Texto informativo',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_text_information|node|centers|block_teaser_horizontal'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categorización');
  t('Columna derecha');
  t('Columna izquierda');
  t('Contacto');
  t('Dirección');
  t('Información general');
  t('Oculto');
  t('Secciones');
  t('Secciones encabezado');
  t('Texto informativo');

  return $field_groups;
}
