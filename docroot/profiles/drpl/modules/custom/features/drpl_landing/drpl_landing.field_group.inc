<?php
/**
 * @file
 * drpl_landing.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drpl_landing_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_configuration|node|landing|form';
  $field_group->group_name = 'group_basic_configuration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_information';
  $field_group->data = array(
    'label' => 'Configuración básica',
    'weight' => '18',
    'children' => array(
      0 => 'body',
      1 => 'field_short_description',
      2 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic-configuration field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_basic_configuration|node|landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|landing|form';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secciones encabezado',
    'weight' => '2',
    'children' => array(
      0 => 'field_paragraphs_header',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Secciones encabezado',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_header|node|landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|landing|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '4',
    'children' => array(
      0 => 'field_related_thematic',
      1 => 'workbench_access',
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
  $field_groups['group_hidden|node|landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|node|landing|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic_configuration',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Información general',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-main-information field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_main_information|node|landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_components|node|landing|form';
  $field_group->group_name = 'group_paragraph_components';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secciones cuerpo',
    'weight' => '3',
    'children' => array(
      0 => 'field_paragraphs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Secciones cuerpo',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-paragraph-components field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_components|node|landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tag|node|landing|form';
  $field_group->group_name = 'group_tag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorización',
    'weight' => '1',
    'children' => array(
      0 => 'field_invest_category',
      1 => 'field_enjoy_category',
      2 => 'field_live_category',
      3 => 'field_open_government',
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
  $field_groups['group_tag|node|landing|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categorización');
  t('Configuración básica');
  t('Hidden');
  t('Información general');
  t('Secciones cuerpo');
  t('Secciones encabezado');

  return $field_groups;
}
