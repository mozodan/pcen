<?php
/**
 * @file
 * drpl_frequent_questions.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drpl_frequent_questions_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_configuration|node|frequent_questions|form';
  $field_group->group_name = 'group_basic_configuration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frequent_questions';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_information';
  $field_group->data = array(
    'label' => 'Configuración básica',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title',
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
  $field_groups['group_basic_configuration|node|frequent_questions|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|frequent_questions|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frequent_questions';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '2',
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
  $field_groups['group_hidden|node|frequent_questions|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|node|frequent_questions|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frequent_questions';
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
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-main-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_main_information|node|frequent_questions|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tag|node|frequent_questions|form';
  $field_group->group_name = 'group_tag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frequent_questions';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorización',
    'weight' => '1',
    'children' => array(
      0 => 'field_invest_category',
      1 => 'field_open_government',
      2 => 'field_live_category',
      3 => 'field_enjoy_category',
      4 => 'field_content_reference',
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
  $field_groups['group_tag|node|frequent_questions|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categorización');
  t('Configuración básica');
  t('Hidden');
  t('Información general');

  return $field_groups;
}
