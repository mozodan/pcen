<?php
/**
 * @file
 * drpl_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drpl_news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attach_information|node|news|form';
  $field_group->group_name = 'group_attach_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Adjuntos y referencias',
    'weight' => '2',
    'children' => array(
      0 => 'field_files',
      1 => 'field_formalities_reference',
      2 => 'field_paragraphs',
      3 => 'field_publications_reference',
      4 => 'field_regulations_reference',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-attach-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_attach_information|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|news|form';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
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
  $field_groups['group_header|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|news|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
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
  $field_groups['group_hidden|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_column|node|news|teaser';
  $field_group->group_name = 'group_left_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left column',
    'weight' => '0',
    'children' => array(
      0 => 'field_images',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left column',
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
  $field_groups['group_left_column|node|news|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|node|news|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_short_description',
      2 => 'field_date',
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
  $field_groups['group_main_information|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|node|news|teaser';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right column',
    'weight' => '1',
    'children' => array(
      0 => 'group_text_information',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right column',
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
  $field_groups['group_right_column|node|news|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tag|node|news|form';
  $field_group->group_name = 'group_tag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
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
  $field_groups['group_tag|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_information|node|news|block_teaser';
  $field_group->group_name = 'group_text_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'block_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text information',
    'weight' => '1',
    'children' => array(
      0 => 'field_short_description',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text information',
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
  $field_groups['group_text_information|node|news|block_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_information|node|news|block_teaser_horizontal';
  $field_group->group_name = 'group_text_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'block_teaser_horizontal';
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
  $field_groups['group_text_information|node|news|block_teaser_horizontal'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_information|node|news|teaser';
  $field_group->group_name = 'group_text_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_right_column';
  $field_group->data = array(
    'label' => 'Text information',
    'weight' => '4',
    'children' => array(
      0 => 'field_short_description',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text information',
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
  $field_groups['group_text_information|node|news|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adjuntos y referencias');
  t('Categorización');
  t('Hidden');
  t('Información general');
  t('Left column');
  t('Right column');
  t('Secciones encabezado');
  t('Text information');
  t('Texto informativo');

  return $field_groups;
}
