<?php
/**
 * @file
 * drpl_press_conferences.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function drpl_press_conferences_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|press_conferences|live_streaming';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'press_conferences';
  $ds_fieldsetting->view_mode = 'live_streaming';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|press_conferences|live_streaming'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|press_conferences|old_video';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'press_conferences';
  $ds_fieldsetting->view_mode = 'old_video';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '15',
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
  );
  $export['node|press_conferences|old_video'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|press_conferences|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'press_conferences';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
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
  );
  $export['node|press_conferences|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function drpl_press_conferences_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|press_conferences|full_video';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'press_conferences';
  $ds_layout->view_mode = 'full_video';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_videos',
      ),
    ),
    'fields' => array(
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
  $export['node|press_conferences|full_video'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|press_conferences|live_streaming';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'press_conferences';
  $ds_layout->view_mode = 'live_streaming';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
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
  $export['node|press_conferences|live_streaming'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|press_conferences|old_video';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'press_conferences';
  $ds_layout->view_mode = 'old_video';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_component',
        1 => 'field_videos',
        2 => 'title',
        3 => 'field_date',
        4 => 'field_short_description',
      ),
    ),
    'fields' => array(
      'group_component' => 'ds_content',
      'field_videos' => 'ds_content',
      'title' => 'ds_content',
      'field_date' => 'ds_content',
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
  $export['node|press_conferences|old_video'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|press_conferences|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'press_conferences';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'group_left_column',
        2 => 'group_right_column',
        3 => 'field_date',
        4 => 'field_short_description',
        5 => 'field_videos',
        6 => 'group_text_information',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_left_column' => 'ds_content',
      'group_right_column' => 'ds_content',
      'field_date' => 'ds_content',
      'field_short_description' => 'ds_content',
      'field_videos' => 'ds_content',
      'group_text_information' => 'ds_content',
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
  $export['node|press_conferences|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function drpl_press_conferences_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'full_video';
  $ds_view_mode->label = 'Video completo';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['full_video'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'old_video';
  $ds_view_mode->label = 'Video en diferido';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['old_video'] = $ds_view_mode;

  return $export;
}
