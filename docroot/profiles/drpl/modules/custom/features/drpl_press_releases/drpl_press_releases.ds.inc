<?php
/**
 * @file
 * drpl_press_releases.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function drpl_press_releases_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|press_releases|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'press_releases';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|press_releases|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|press_releases|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'press_releases';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '10',
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
    'node_link' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Ver ficheros adjuntos y galería',
        'link class' => '',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
  );
  $export['node|press_releases|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function drpl_press_releases_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|press_releases|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'press_releases';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_short_description',
        2 => 'body',
        3 => 'field_counselings',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_short_description' => 'ds_content',
      'body' => 'ds_content',
      'field_counselings' => 'ds_content',
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
  $export['node|press_releases|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|press_releases|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'press_releases';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_left_column',
        1 => 'field_counselings',
        2 => 'group_right_column',
        3 => 'title',
        4 => 'field_short_description',
        5 => 'node_link',
        6 => 'group_text_information',
        7 => 'group_attach_information',
      ),
    ),
    'fields' => array(
      'group_left_column' => 'ds_content',
      'field_counselings' => 'ds_content',
      'group_right_column' => 'ds_content',
      'title' => 'ds_content',
      'field_short_description' => 'ds_content',
      'node_link' => 'ds_content',
      'group_text_information' => 'ds_content',
      'group_attach_information' => 'ds_content',
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
  $export['node|press_releases|teaser'] = $ds_layout;

  return $export;
}
