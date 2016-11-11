<?php
/**
 * @file
 * drpl_events.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function drpl_events_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|events|block_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'events';
  $ds_fieldsetting->view_mode = 'block_teaser';
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
    'field_short_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<div class="field field-name-field-short-description-single field-type-ds field-label-hidden">',
          'suffix' => '...</div>',
        ),
      ),
    ),
  );
  $export['node|events|block_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|events|block_teaser_horizontal';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'events';
  $ds_fieldsetting->view_mode = 'block_teaser_horizontal';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '14',
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
          'prefix' => '<div class="field field-name-field-short-description-single field-type-ds field-label-hidden">',
          'suffix' => '...</div>',
        ),
      ),
    ),
  );
  $export['node|events|block_teaser_horizontal'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|events|calendar_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'events';
  $ds_fieldsetting->view_mode = 'calendar_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'conditions' => array(),
      ),
    ),
    'field_short_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<div class="field field-name-field-short-description-single field-type-ds field-label-hidden">',
          'suffix' => '...</div>',
        ),
      ),
    ),
  );
  $export['node|events|calendar_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|events|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'events';
  $ds_fieldsetting->view_mode = 'default';
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
    'field_short_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<div class="field field-name-field-short-description-single field-type-ds field-label-hidden">',
          'suffix' => '...</div>',
        ),
      ),
    ),
  );
  $export['node|events|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|events|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'events';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|events|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|events|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'events';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '16',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'conditions' => array(),
      ),
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|events|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function drpl_events_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|events|block_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'events';
  $ds_layout->view_mode = 'block_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_images',
        1 => 'group_text_information',
        2 => 'title',
        3 => 'field_short_description',
      ),
    ),
    'fields' => array(
      'field_images' => 'ds_content',
      'group_text_information' => 'ds_content',
      'title' => 'ds_content',
      'field_short_description' => 'ds_content',
    ),
    'limit' => array(
      'field_images' => '1',
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
  $export['node|events|block_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|events|block_teaser_horizontal';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'events';
  $ds_layout->view_mode = 'block_teaser_horizontal';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_images',
        1 => 'group_text_information',
        2 => 'title',
        3 => 'field_short_description',
      ),
    ),
    'fields' => array(
      'field_images' => 'ds_content',
      'group_text_information' => 'ds_content',
      'title' => 'ds_content',
      'field_short_description' => 'ds_content',
    ),
    'limit' => array(
      'field_images' => '1',
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
  $export['node|events|block_teaser_horizontal'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|events|calendar_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'events';
  $ds_layout->view_mode = 'calendar_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_short_description',
      ),
    ),
    'fields' => array(
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
  $export['node|events|calendar_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|events|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'events';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_short_description',
      ),
    ),
    'fields' => array(
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
  $export['node|events|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|events|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'events';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'comments',
        1 => 'body',
        2 => 'field_featured_image',
        3 => 'field_date',
        4 => 'field_short_description',
        5 => 'field_featured_element',
        6 => 'field_category_events',
        7 => 'sharethis',
      ),
    ),
    'fields' => array(
      'comments' => 'ds_content',
      'body' => 'ds_content',
      'field_featured_image' => 'ds_content',
      'field_date' => 'ds_content',
      'field_short_description' => 'ds_content',
      'field_featured_element' => 'ds_content',
      'field_category_events' => 'ds_content',
      'sharethis' => 'ds_content',
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
  $export['node|events|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|events|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'events';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_images',
        1 => 'group_left_column',
        2 => 'group_right_column',
        3 => 'group_text_information',
        4 => 'title',
        5 => 'field_short_description',
      ),
    ),
    'fields' => array(
      'field_images' => 'ds_content',
      'group_left_column' => 'ds_content',
      'group_right_column' => 'ds_content',
      'group_text_information' => 'ds_content',
      'title' => 'ds_content',
      'field_short_description' => 'ds_content',
    ),
    'limit' => array(
      'field_images' => '1',
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
  $export['node|events|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function drpl_events_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'calendar_teaser';
  $ds_view_mode->label = 'Calendar teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['calendar_teaser'] = $ds_view_mode;

  return $export;
}
