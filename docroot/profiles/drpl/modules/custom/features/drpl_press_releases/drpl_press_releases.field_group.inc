<?php
/**
 * @file
 * drpl_press_releases.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drpl_press_releases_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attach_information|node|press_releases|form';
  $field_group->group_name = 'group_attach_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_releases';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Adjuntos y multimedia',
    'weight' => '1',
    'children' => array(
      0 => 'field_audio',
      1 => 'field_files',
      2 => 'field_paragraphs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Adjuntos y multimedia',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-attach-information field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_attach_information|node|press_releases|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attach_information|node|press_releases|teaser';
  $field_group->group_name = 'group_attach_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_releases';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_right_column';
  $field_group->data = array(
    'label' => 'Archivos adjuntos',
    'weight' => '20',
    'children' => array(
      0 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Archivos adjuntos',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-attach-information field-group-div col-md-5',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_attach_information|node|press_releases|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|press_releases|form';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_releases';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secciones encabezado',
    'weight' => '3',
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
  $field_groups['group_header|node|press_releases|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|press_releases|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_releases';
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
  $field_groups['group_hidden|node|press_releases|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_column|node|press_releases|teaser';
  $field_group->group_name = 'group_left_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_releases';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columna izquierda',
    'weight' => '0',
    'children' => array(
      0 => 'field_counselings',
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
  $field_groups['group_left_column|node|press_releases|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|node|press_releases|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_releases';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_date',
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
  $field_groups['group_main_information|node|press_releases|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|node|press_releases|teaser';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_releases';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columna derecha',
    'weight' => '1',
    'children' => array(
      0 => 'group_attach_information',
      1 => 'group_text_information',
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
  $field_groups['group_right_column|node|press_releases|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tag|node|press_releases|form';
  $field_group->group_name = 'group_tag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_releases';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorización',
    'weight' => '2',
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
  $field_groups['group_tag|node|press_releases|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_information|node|press_releases|teaser';
  $field_group->group_name = 'group_text_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_releases';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_right_column';
  $field_group->data = array(
    'label' => 'Texto informativo',
    'weight' => '19',
    'children' => array(
      0 => 'field_short_description',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Texto informativo',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text-information field-group-div col-md-7',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_text_information|node|press_releases|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adjuntos y multimedia');
  t('Archivos adjuntos');
  t('Categorización');
  t('Columna derecha');
  t('Columna izquierda');
  t('Hidden');
  t('Información general');
  t('Secciones encabezado');
  t('Texto informativo');

  return $field_groups;
}
