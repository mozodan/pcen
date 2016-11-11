<?php
/**
 * @file
 * drpl_videos.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function drpl_videos_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|videos|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'videos';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|videos|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|videos|old_video';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'videos';
  $ds_fieldsetting->view_mode = 'old_video';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_dmy',
    ),
  );
  $export['node|videos|old_video'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|videos|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'videos';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_dmy',
    ),
  );
  $export['node|videos|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|videos|video_thumbnail';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'videos';
  $ds_fieldsetting->view_mode = 'video_thumbnail';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_dmy',
    ),
  );
  $export['node|videos|video_thumbnail'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|videos|video_thumbnail_title';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'videos';
  $ds_fieldsetting->view_mode = 'video_thumbnail_title';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_dmy',
    ),
    'field_videos' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|videos|video_thumbnail_title'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function drpl_videos_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|videos|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'videos';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_video',
        1 => 'title',
        2 => 'field_videos',
      ),
    ),
    'fields' => array(
      'group_video' => 'ds_content',
      'title' => 'ds_content',
      'field_videos' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|videos|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|videos|old_video';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'videos';
  $ds_layout->view_mode = 'old_video';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_content_video',
        1 => 'field_videos',
        2 => 'title',
        3 => 'post_date',
        4 => 'field_short_description',
      ),
    ),
    'fields' => array(
      'group_content_video' => 'ds_content',
      'field_videos' => 'ds_content',
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'field_short_description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|videos|old_video'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|videos|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'videos';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_video',
        1 => 'field_videos',
        2 => 'title',
        3 => 'post_date',
      ),
    ),
    'fields' => array(
      'group_video' => 'ds_content',
      'field_videos' => 'ds_content',
      'title' => 'ds_content',
      'post_date' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|videos|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|videos|video_thumbnail';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'videos';
  $ds_layout->view_mode = 'video_thumbnail';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_video',
        1 => 'field_videos',
        2 => 'title',
        3 => 'post_date',
        4 => 'field_short_description',
      ),
    ),
    'fields' => array(
      'group_video' => 'ds_content',
      'field_videos' => 'ds_content',
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'field_short_description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|videos|video_thumbnail'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|videos|video_thumbnail_title';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'videos';
  $ds_layout->view_mode = 'video_thumbnail_title';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'group_video',
        2 => 'group_left_column',
        3 => 'post_date',
        4 => 'group_right_column',
        5 => 'field_videos',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_video' => 'ds_content',
      'group_left_column' => 'ds_content',
      'post_date' => 'ds_content',
      'group_right_column' => 'ds_content',
      'field_videos' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|videos|video_thumbnail_title'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function drpl_videos_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'video_thumbnail';
  $ds_view_mode->label = 'Video thumbnail';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'file' => 'file',
  );
  $export['video_thumbnail'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'video_thumbnail_title';
  $ds_view_mode->label = 'Video thumbnail + title';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['video_thumbnail_title'] = $ds_view_mode;

  return $export;
}
