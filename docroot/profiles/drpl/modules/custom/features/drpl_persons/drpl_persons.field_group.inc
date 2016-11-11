<?php
/**
 * @file
 * drpl_persons.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drpl_persons_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_config_information|node|persons|form';
  $field_group->group_name = 'group_config_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'persons';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Configuración',
    'weight' => '2',
    'children' => array(
      0 => 'field_uuid_migration',
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
  $field_groups['group_config_information|node|persons|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|persons|form';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'persons';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secciones encabezado',
    'weight' => '1',
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
  $field_groups['group_header|node|persons|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|persons|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'persons';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '4',
    'children' => array(
      0 => 'workbench_access',
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
  $field_groups['group_hidden|node|persons|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|node|persons|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'persons';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
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
  $field_groups['group_main_information|node|persons|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Configuración');
  t('Hidden');
  t('Información general');
  t('Secciones encabezado');

  return $field_groups;
}
