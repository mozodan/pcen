<?php
/**
 * @file
 * drpl_centers.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function drpl_centers_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|centers|block_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'centers';
  $ds_fieldsetting->view_mode = 'block_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '25',
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
    'field_short_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => '...',
        ),
      ),
    ),
  );
  $export['node|centers|block_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|centers|block_teaser_horizontal';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'centers';
  $ds_fieldsetting->view_mode = 'block_teaser_horizontal';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '25',
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
    'field_short_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => '...',
        ),
      ),
    ),
  );
  $export['node|centers|block_teaser_horizontal'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|centers|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'centers';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '8',
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
  $export['node|centers|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function drpl_centers_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|centers|block_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'centers';
  $ds_layout->view_mode = 'block_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_text_information',
        1 => 'title',
        2 => 'field_short_description',
      ),
    ),
    'fields' => array(
      'group_text_information' => 'ds_content',
      'title' => 'ds_content',
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
  $export['node|centers|block_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|centers|block_teaser_horizontal';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'centers';
  $ds_layout->view_mode = 'block_teaser_horizontal';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_text_information',
        1 => 'title',
        2 => 'field_short_description',
      ),
    ),
    'fields' => array(
      'group_text_information' => 'ds_content',
      'title' => 'ds_content',
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
  $export['node|centers|block_teaser_horizontal'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|centers|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'centers';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_center_type',
        2 => 'field_short_description',
        3 => 'field_paragraphs',
        4 => 'field_long_address',
        5 => 'field_location',
        6 => 'field_district',
        7 => 'field_postal_code',
        8 => 'field_long_phone',
        9 => 'field_email',
        10 => 'field_office_hours',
        11 => 'field_transport_consult',
        12 => 'field_tags',
        13 => 'field_categories',
        14 => 'field_invest_category',
        15 => 'field_live_category',
        16 => 'field_enjoy_category',
        17 => 'field_open_government',
        18 => 'field_related_thematic',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_center_type' => 'ds_content',
      'field_short_description' => 'ds_content',
      'field_paragraphs' => 'ds_content',
      'field_long_address' => 'ds_content',
      'field_location' => 'ds_content',
      'field_district' => 'ds_content',
      'field_postal_code' => 'ds_content',
      'field_long_phone' => 'ds_content',
      'field_email' => 'ds_content',
      'field_office_hours' => 'ds_content',
      'field_transport_consult' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_categories' => 'ds_content',
      'field_invest_category' => 'ds_content',
      'field_live_category' => 'ds_content',
      'field_enjoy_category' => 'ds_content',
      'field_open_government' => 'ds_content',
      'field_related_thematic' => 'ds_content',
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
  $export['node|centers|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|centers|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'centers';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_left_column',
        1 => 'group_right_column',
        2 => 'title',
        3 => 'field_center_type',
        4 => 'group_address',
        5 => 'field_long_address',
        6 => 'field_postal_code',
        7 => 'field_long_phone',
        8 => 'field_gallery',
      ),
    ),
    'fields' => array(
      'group_left_column' => 'ds_content',
      'group_right_column' => 'ds_content',
      'title' => 'ds_content',
      'field_center_type' => 'ds_content',
      'group_address' => 'ds_content',
      'field_long_address' => 'ds_content',
      'field_postal_code' => 'ds_content',
      'field_long_phone' => 'ds_content',
      'field_gallery' => 'ds_content',
    ),
    'limit' => array(
      'field_gallery' => '1',
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
  $export['node|centers|teaser'] = $ds_layout;

  return $export;
}
