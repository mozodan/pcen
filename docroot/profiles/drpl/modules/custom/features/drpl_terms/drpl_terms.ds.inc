<?php
/**
 * @file
 * drpl_terms.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function drpl_terms_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|counseling|block_teaser';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'counseling';
  $ds_fieldsetting->view_mode = 'block_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
  );
  $export['taxonomy_term|counseling|block_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|counseling|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'counseling';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
  );
  $export['taxonomy_term|counseling|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function drpl_terms_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|counseling|block_teaser';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'counseling';
  $ds_layout->view_mode = 'block_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_global_information',
        1 => 'field_responsible',
        2 => 'field_center_type',
        3 => 'group_address_information',
        4 => 'title',
        5 => 'field_district',
        6 => 'group_aditional_information',
        7 => 'description',
        8 => 'field_id',
        9 => 'field_long_address',
        10 => 'field_long_phone',
        11 => 'field_postal_code',
        12 => 'field_municipality',
      ),
    ),
    'fields' => array(
      'group_global_information' => 'ds_content',
      'field_responsible' => 'ds_content',
      'field_center_type' => 'ds_content',
      'group_address_information' => 'ds_content',
      'title' => 'ds_content',
      'field_district' => 'ds_content',
      'group_aditional_information' => 'ds_content',
      'description' => 'ds_content',
      'field_id' => 'ds_content',
      'field_long_address' => 'ds_content',
      'field_long_phone' => 'ds_content',
      'field_postal_code' => 'ds_content',
      'field_municipality' => 'ds_content',
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
  $export['taxonomy_term|counseling|block_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|counseling|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'counseling';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_global_information',
        1 => 'group_address_information',
        2 => 'group_aditional_information',
        3 => 'field_long_address',
        4 => 'field_postal_code',
        5 => 'field_responsible',
        6 => 'field_municipality',
        7 => 'field_center_type',
        8 => 'field_district',
        9 => 'field_id',
        10 => 'title',
        11 => 'field_long_phone',
        12 => 'description',
      ),
    ),
    'fields' => array(
      'group_global_information' => 'ds_content',
      'group_address_information' => 'ds_content',
      'group_aditional_information' => 'ds_content',
      'field_long_address' => 'ds_content',
      'field_postal_code' => 'ds_content',
      'field_responsible' => 'ds_content',
      'field_municipality' => 'ds_content',
      'field_center_type' => 'ds_content',
      'field_district' => 'ds_content',
      'field_id' => 'ds_content',
      'title' => 'ds_content',
      'field_long_phone' => 'ds_content',
      'description' => 'ds_content',
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
  $export['taxonomy_term|counseling|default'] = $ds_layout;

  return $export;
}
