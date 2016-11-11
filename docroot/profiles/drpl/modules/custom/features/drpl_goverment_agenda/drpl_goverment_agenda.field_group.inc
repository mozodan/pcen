<?php
/**
 * @file
 * drpl_goverment_agenda.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drpl_goverment_agenda_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|goverment_agenda|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'goverment_agenda';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Oculto',
    'weight' => '7',
    'children' => array(
      0 => 'workbench_access',
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
  $field_groups['group_hidden|node|goverment_agenda|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_column|node|goverment_agenda|teaser';
  $field_group->group_name = 'group_left_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'goverment_agenda';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columna izquierda',
    'weight' => '1',
    'children' => array(
      0 => 'field_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Columna izquierda',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-left-column field-group-div col-md-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_left_column|node|goverment_agenda|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|node|goverment_agenda|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'goverment_agenda';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_date',
      2 => 'field_location',
      3 => 'field_municipality',
      4 => 'field_place',
      5 => 'field_short_description',
      6 => 'title',
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
  $field_groups['group_main_information|node|goverment_agenda|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|node|goverment_agenda|teaser';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'goverment_agenda';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columna derecha',
    'weight' => '2',
    'children' => array(
      0 => 'field_location',
      1 => 'field_municipality',
      2 => 'field_place',
      3 => 'field_short_description',
      4 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Columna derecha',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-right-column field-group-div col-md-9',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_right_column|node|goverment_agenda|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tag|node|goverment_agenda|form';
  $field_group->group_name = 'group_tag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'goverment_agenda';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorización',
    'weight' => '4',
    'children' => array(
      0 => 'field_counselings',
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
  $field_groups['group_tag|node|goverment_agenda|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categorización');
  t('Columna derecha');
  t('Columna izquierda');
  t('Información general');
  t('Oculto');

  return $field_groups;
}
