<?php
/**
 * @file
 * drpl_main_information.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function drpl_main_information_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|main_information|block_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'main_information';
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
  $export['node|main_information|block_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|main_information|block_teaser_horizontal';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'main_information';
  $ds_fieldsetting->view_mode = 'block_teaser_horizontal';
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
  $export['node|main_information|block_teaser_horizontal'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|main_information|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'main_information';
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
  $export['node|main_information|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|main_information|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'main_information';
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
        'conditions' => array(),
      ),
    ),
  );
  $export['node|main_information|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function drpl_main_information_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|main_information|block_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'main_information';
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
  $export['node|main_information|block_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|main_information|block_teaser_horizontal';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'main_information';
  $ds_layout->view_mode = 'block_teaser_horizontal';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_short_description',
        2 => 'field_images',
        3 => 'group_text_information',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_short_description' => 'ds_content',
      'field_images' => 'ds_content',
      'group_text_information' => 'ds_content',
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
  $export['node|main_information|block_teaser_horizontal'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|main_information|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'main_information';
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
  $export['node|main_information|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|main_information|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'main_information';
  $ds_layout->view_mode = 'teaser';
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
  $export['node|main_information|teaser'] = $ds_layout;

  return $export;
}
