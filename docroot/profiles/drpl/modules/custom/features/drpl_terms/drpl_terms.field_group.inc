<?php
/**
 * @file
 * drpl_terms.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drpl_terms_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address_information|taxonomy_term|counseling|block_teaser';
  $field_group->group_name = 'group_address_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'counseling';
  $field_group->mode = 'block_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dirección',
    'weight' => '1',
    'children' => array(
      0 => 'field_postal_code',
      1 => 'field_municipality',
      2 => 'field_long_address',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Dirección',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-address-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_address_information|taxonomy_term|counseling|block_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address_information|taxonomy_term|counseling|default';
  $field_group->group_name = 'group_address_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'counseling';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dirección',
    'weight' => '1',
    'children' => array(
      0 => 'field_postal_code',
      1 => 'field_municipality',
      2 => 'field_long_address',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Dirección',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-address-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_address_information|taxonomy_term|counseling|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aditional_information|taxonomy_term|counseling|block_teaser';
  $field_group->group_name = 'group_aditional_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'counseling';
  $field_group->mode = 'block_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información adicional',
    'weight' => '2',
    'children' => array(
      0 => 'field_center_type',
      1 => 'field_district',
      2 => 'field_id',
      3 => 'field_long_phone',
      4 => 'field_responsible',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Información adicional',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-aditional-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aditional_information|taxonomy_term|counseling|block_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aditional_information|taxonomy_term|counseling|default';
  $field_group->group_name = 'group_aditional_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'counseling';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información adicional',
    'weight' => '2',
    'children' => array(
      0 => 'field_center_type',
      1 => 'field_district',
      2 => 'field_id',
      3 => 'field_long_phone',
      4 => 'field_responsible',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Información adicional',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-aditional-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aditional_information|taxonomy_term|counseling|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_config_information|taxonomy_term|counseling|form';
  $field_group->group_name = 'group_config_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'counseling';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Configuración',
    'weight' => '10',
    'children' => array(
      0 => 'field_uuid_migration',
      1 => 'metatags',
      2 => 'path',
      3 => 'redirect',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-config-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_config_information|taxonomy_term|counseling|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_config_information|taxonomy_term|enjoy_category|form';
  $field_group->group_name = 'group_config_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'enjoy_category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Configuración',
    'weight' => '3',
    'children' => array(
      0 => 'field_uuid_migration',
      1 => 'metatags',
      2 => 'path',
      3 => 'redirect',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-config-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_config_information|taxonomy_term|enjoy_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_config_information|taxonomy_term|invest_category|form';
  $field_group->group_name = 'group_config_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'invest_category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Configuración',
    'weight' => '3',
    'children' => array(
      0 => 'field_uuid_migration',
      1 => 'metatags',
      2 => 'path',
      3 => 'redirect',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-config-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_config_information|taxonomy_term|invest_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_config_information|taxonomy_term|live_category|form';
  $field_group->group_name = 'group_config_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'live_category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Configuration',
    'weight' => '3',
    'children' => array(
      0 => 'field_uuid_migration',
      1 => 'metatags',
      2 => 'path',
      3 => 'redirect',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-config-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_config_information|taxonomy_term|live_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_config_information|taxonomy_term|municipalities|form';
  $field_group->group_name = 'group_config_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'municipalities';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Configuración',
    'weight' => '9',
    'children' => array(
      0 => 'metatags',
      1 => 'path',
      2 => 'redirect',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-config-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_config_information|taxonomy_term|municipalities|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_config_information|taxonomy_term|open_government|form';
  $field_group->group_name = 'group_config_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'open_government';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Configuración',
    'weight' => '10',
    'children' => array(
      0 => 'field_uuid_migration',
      1 => 'metatags',
      2 => 'path',
      3 => 'redirect',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-config-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_config_information|taxonomy_term|open_government|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_config_information|taxonomy_term|provinces|form';
  $field_group->group_name = 'group_config_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'provinces';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Configuración',
    'weight' => '9',
    'children' => array(
      0 => 'metatags',
      1 => 'path',
      2 => 'redirect',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-config-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_config_information|taxonomy_term|provinces|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_config_information|taxonomy_term|video_servers|form';
  $field_group->group_name = 'group_config_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'video_servers';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Configuración',
    'weight' => '8',
    'children' => array(
      0 => 'metatags',
      1 => 'path',
      2 => 'redirect',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-config-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_config_information|taxonomy_term|video_servers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_global_information|taxonomy_term|counseling|block_teaser';
  $field_group->group_name = 'group_global_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'counseling';
  $field_group->mode = 'block_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '0',
    'children' => array(
      0 => 'description',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Información general',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-global-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_global_information|taxonomy_term|counseling|block_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_global_information|taxonomy_term|counseling|default';
  $field_group->group_name = 'group_global_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'counseling';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '0',
    'children' => array(
      0 => 'description',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Información general',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-global-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_global_information|taxonomy_term|counseling|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_global_information|taxonomy_term|counseling|form';
  $field_group->group_name = 'group_global_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'counseling';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información elemento',
    'weight' => '0',
    'children' => array(
      0 => 'group_config_information',
      1 => 'group_main_information',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-global-information field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_global_information|taxonomy_term|counseling|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_global_information|taxonomy_term|enjoy_category|form';
  $field_group->group_name = 'group_global_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'enjoy_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Infomación elemento',
    'weight' => '0',
    'children' => array(
      0 => 'group_config_information',
      1 => 'group_main_information',
      2 => 'group_paragraph_components',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-global-information field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_global_information|taxonomy_term|enjoy_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_global_information|taxonomy_term|invest_category|form';
  $field_group->group_name = 'group_global_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'invest_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Infomación elemento',
    'weight' => '0',
    'children' => array(
      0 => 'group_config_information',
      1 => 'group_main_information',
      2 => 'group_paragraph_components',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-global-information field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_global_information|taxonomy_term|invest_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_global_information|taxonomy_term|live_category|form';
  $field_group->group_name = 'group_global_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'live_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Infomación elemento',
    'weight' => '0',
    'children' => array(
      0 => 'group_config_information',
      1 => 'group_main_information',
      2 => 'group_paragraph_components',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Infomación elemento',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_global_information|taxonomy_term|live_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_global_information|taxonomy_term|municipalities|form';
  $field_group->group_name = 'group_global_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'municipalities';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información elemento',
    'weight' => '0',
    'children' => array(
      0 => 'group_main_information',
      1 => 'group_config_information',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-global-information field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_global_information|taxonomy_term|municipalities|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_global_information|taxonomy_term|open_government|form';
  $field_group->group_name = 'group_global_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'open_government';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Infomación elemento',
    'weight' => '0',
    'children' => array(
      0 => 'group_main_information',
      1 => 'group_paragraph_components',
      2 => 'group_config_information',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-global-information field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_global_information|taxonomy_term|open_government|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_global_information|taxonomy_term|provinces|form';
  $field_group->group_name = 'group_global_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'provinces';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información elemento',
    'weight' => '0',
    'children' => array(
      0 => 'group_main_information',
      1 => 'group_config_information',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-global-information field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_global_information|taxonomy_term|provinces|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_global_information|taxonomy_term|video_servers|form';
  $field_group->group_name = 'group_global_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'video_servers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información elemento',
    'weight' => '0',
    'children' => array(
      0 => 'group_main_information',
      1 => 'group_config_information',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-global-information field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_global_information|taxonomy_term|video_servers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|taxonomy_term|enjoy_category|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'enjoy_category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '4',
    'children' => array(
      0 => 'field_label',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
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
  $field_groups['group_hidden|taxonomy_term|enjoy_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|taxonomy_term|invest_category|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'invest_category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '4',
    'children' => array(
      0 => 'field_label',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
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
  $field_groups['group_hidden|taxonomy_term|invest_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|taxonomy_term|live_category|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'live_category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '4',
    'children' => array(
      0 => 'field_label',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
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
  $field_groups['group_hidden|taxonomy_term|live_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|taxonomy_term|open_government|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'open_government';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '11',
    'children' => array(
      0 => 'field_label',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
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
  $field_groups['group_hidden|taxonomy_term|open_government|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|taxonomy_term|counseling|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'counseling';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '8',
    'children' => array(
      0 => 'field_postal_code',
      1 => 'field_center_type',
      2 => 'field_district',
      3 => 'field_id',
      4 => 'field_municipality',
      5 => 'field_long_address',
      6 => 'field_long_phone',
      7 => 'field_responsible',
      8 => 'name',
      9 => 'description',
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
  $field_groups['group_main_information|taxonomy_term|counseling|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|taxonomy_term|enjoy_category|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'enjoy_category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_color',
      1 => 'field_images',
      2 => 'field_icon',
      3 => 'name',
      4 => 'description',
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
  $field_groups['group_main_information|taxonomy_term|enjoy_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|taxonomy_term|invest_category|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'invest_category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_color',
      1 => 'field_images',
      2 => 'field_icon',
      3 => 'name',
      4 => 'description',
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
  $field_groups['group_main_information|taxonomy_term|invest_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|taxonomy_term|live_category|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'live_category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_color',
      1 => 'field_images',
      2 => 'field_icon',
      3 => 'name',
      4 => 'description',
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
  $field_groups['group_main_information|taxonomy_term|live_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|taxonomy_term|municipalities|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'municipalities';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '8',
    'children' => array(
      0 => 'field_province',
      1 => 'name',
      2 => 'description',
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
  $field_groups['group_main_information|taxonomy_term|municipalities|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|taxonomy_term|open_government|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'open_government';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '8',
    'children' => array(
      0 => 'field_images',
      1 => 'field_icon',
      2 => 'field_color',
      3 => 'name',
      4 => 'description',
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
  $field_groups['group_main_information|taxonomy_term|open_government|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|taxonomy_term|provinces|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'provinces';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '7',
    'children' => array(
      0 => 'name',
      1 => 'description',
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
  $field_groups['group_main_information|taxonomy_term|provinces|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|taxonomy_term|video_servers|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'video_servers';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '7',
    'children' => array(
      0 => 'field_link',
      1 => 'name',
      2 => 'description',
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
  $field_groups['group_main_information|taxonomy_term|video_servers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_components|taxonomy_term|enjoy_category|form';
  $field_group->group_name = 'group_paragraph_components';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'enjoy_category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Secciones',
    'weight' => '2',
    'children' => array(
      0 => 'field_paragraphs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Secciones',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-paragraph-components field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_components|taxonomy_term|enjoy_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_components|taxonomy_term|invest_category|form';
  $field_group->group_name = 'group_paragraph_components';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'invest_category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Secciones',
    'weight' => '2',
    'children' => array(
      0 => 'field_paragraphs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Secciones',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-paragraph-components field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_components|taxonomy_term|invest_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_components|taxonomy_term|live_category|form';
  $field_group->group_name = 'group_paragraph_components';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'live_category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Secciones',
    'weight' => '2',
    'children' => array(
      0 => 'field_paragraphs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Secciones',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-paragraph-components field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_components|taxonomy_term|live_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_components|taxonomy_term|open_government|form';
  $field_group->group_name = 'group_paragraph_components';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'open_government';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_global_information';
  $field_group->data = array(
    'label' => 'Secciones',
    'weight' => '9',
    'children' => array(
      0 => 'field_paragraphs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-components field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_components|taxonomy_term|open_government|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Configuración');
  t('Configuration');
  t('Dirección');
  t('Hidden');
  t('Infomación elemento');
  t('Información adicional');
  t('Información elemento');
  t('Información general');
  t('Secciones');

  return $field_groups;
}
