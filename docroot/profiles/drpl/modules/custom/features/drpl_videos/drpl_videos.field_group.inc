<?php
/**
 * @file
 * drpl_videos.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drpl_videos_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_video|node|videos|old_video';
  $field_group->group_name = 'group_content_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
  $field_group->mode = 'old_video';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video ',
    'weight' => '0',
    'children' => array(
      0 => 'field_short_description',
      1 => 'field_videos',
      2 => 'title',
      3 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Video ',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content-video field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content_video|node|videos|old_video'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|videos|form';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secciones encabezado',
    'weight' => '2',
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
  $field_groups['group_header|node|videos|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|videos|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Oculto',
    'weight' => '4',
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
  $field_groups['group_hidden|node|videos|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_column|node|videos|old_video';
  $field_group->group_name = 'group_left_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
  $field_group->mode = 'old_video';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columna izquierda',
    'weight' => '0',
    'children' => array(
      0 => 'field_videos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Columna izquierda',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-left-column field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_left_column|node|videos|old_video'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_column|node|videos|teaser';
  $field_group->group_name = 'group_left_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columna izquierda',
    'weight' => '0',
    'children' => array(
      0 => 'field_videos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Columna izquierda',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-left-column field-group-div col-md-7',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_left_column|node|videos|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_column|node|videos|video_thumbnail_title';
  $field_group->group_name = 'group_left_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
  $field_group->mode = 'video_thumbnail_title';
  $field_group->parent_name = 'group_video';
  $field_group->data = array(
    'label' => 'Columna izquierda',
    'weight' => '1',
    'children' => array(
      0 => 'field_videos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Columna izquierda',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-left-column field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_left_column|node|videos|video_thumbnail_title'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|node|videos|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_date',
      2 => 'field_image',
      3 => 'field_short_description',
      4 => 'field_videos',
      5 => 'field_featured_element',
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
  $field_groups['group_main_information|node|videos|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|node|videos|old_video';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
  $field_group->mode = 'old_video';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columna derecha',
    'weight' => '1',
    'children' => array(
      0 => 'field_short_description',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Columna derecha',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-right-column field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_right_column|node|videos|old_video'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|node|videos|teaser';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columna derecha',
    'weight' => '1',
    'children' => array(
      0 => 'field_short_description',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Columna derecha',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-right-column field-group-div col-md-5',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_right_column|node|videos|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|node|videos|video_thumbnail_title';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
  $field_group->mode = 'video_thumbnail_title';
  $field_group->parent_name = 'group_video';
  $field_group->data = array(
    'label' => 'Columna derecha',
    'weight' => '2',
    'children' => array(
      0 => 'title',
      1 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Columna derecha',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-right-column field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_right_column|node|videos|video_thumbnail_title'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tag|node|videos|form';
  $field_group->group_name = 'group_tag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
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
  $field_groups['group_tag|node|videos|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|videos|default';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '0',
    'children' => array(
      0 => 'field_videos',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Video',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-video field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_video|node|videos|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|videos|teaser';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '0',
    'children' => array(
      0 => 'field_videos',
      1 => 'title',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Video',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-video field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_video|node|videos|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|videos|video_thumbnail';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
  $field_group->mode = 'video_thumbnail';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '0',
    'children' => array(
      0 => 'field_short_description',
      1 => 'field_videos',
      2 => 'title',
      3 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Video',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-video field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_video|node|videos|video_thumbnail'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|videos|video_thumbnail_title';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
  $field_group->mode = 'video_thumbnail_title';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '0',
    'children' => array(
      0 => 'group_left_column',
      1 => 'group_right_column',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Video',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-video field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_video|node|videos|video_thumbnail_title'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categorización');
  t('Columna derecha');
  t('Columna izquierda');
  t('Información general');
  t('Oculto');
  t('Secciones encabezado');
  t('Video');
  t('Video ');

  return $field_groups;
}
