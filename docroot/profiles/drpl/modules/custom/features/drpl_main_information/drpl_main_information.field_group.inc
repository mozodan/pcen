<?php
/**
 * @file
 * drpl_main_information.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drpl_main_information_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attach_information|node|main_information|form';
  $field_group->group_name = 'group_attach_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'main_information';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Adjuntos y referencias',
    'weight' => '2',
    'children' => array(
      0 => 'field_files',
      1 => 'field_formalities_reference',
      2 => 'field_publications_reference',
      3 => 'field_regulations_reference',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Adjuntos y referencias',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-attach-information field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_attach_information|node|main_information|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_configuration|node|main_information|form';
  $field_group->group_name = 'group_basic_configuration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'main_information';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_information';
  $field_group->data = array(
    'label' => 'Configuración básica',
    'weight' => '12',
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
  $field_groups['group_basic_configuration|node|main_information|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|main_information|form';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'main_information';
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
      'label' => 'Secciones encabezado',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_header|node|main_information|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|main_information|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'main_information';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '5',
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
  $field_groups['group_hidden|node|main_information|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|node|main_information|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'main_information';
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
  $field_groups['group_main_information|node|main_information|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_componentes|node|main_information|form';
  $field_group->group_name = 'group_paragraph_componentes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'main_information';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Componentes',
    'weight' => '3',
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
  $field_groups['group_paragraph_componentes|node|main_information|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_components|node|main_information|form';
  $field_group->group_name = 'group_paragraph_components';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'main_information';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secciones cuerpo',
    'weight' => '4',
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
  $field_groups['group_paragraph_components|node|main_information|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tag|node|main_information|form';
  $field_group->group_name = 'group_tag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'main_information';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorización',
    'weight' => '1',
    'children' => array(
      0 => 'field_categories',
      1 => 'field_enjoy_category',
      2 => 'field_invest_category',
      3 => 'field_live_category',
      4 => 'field_tags',
      5 => 'field_open_government',
      6 => 'field_counselings',
      7 => 'field_segments',
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
  $field_groups['group_tag|node|main_information|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_information|node|main_information|block_teaser';
  $field_group->group_name = 'group_text_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'main_information';
  $field_group->mode = 'block_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Texto informativo',
    'weight' => '1',
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
  $field_groups['group_text_information|node|main_information|block_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_information|node|main_information|block_teaser_horizontal';
  $field_group->group_name = 'group_text_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'main_information';
  $field_group->mode = 'block_teaser_horizontal';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Texto informativo',
    'weight' => '2',
    'children' => array(
      0 => 'field_short_description',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Texto informativo',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text-information field-group-div text',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_text_information|node|main_information|block_teaser_horizontal'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adjuntos y referencias');
  t('Categorización');
  t('Componentes');
  t('Configuración básica');
  t('Hidden');
  t('Información general');
  t('Secciones cuerpo');
  t('Secciones encabezado');
  t('Texto informativo');

  return $field_groups;
}
