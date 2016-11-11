<?php
/**
 * @file
 * drpl_goverment_agenda.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function drpl_goverment_agenda_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|goverment_agenda|block_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'goverment_agenda';
  $ds_fieldsetting->view_mode = 'block_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|goverment_agenda|block_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|goverment_agenda|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'goverment_agenda';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
  );
  $export['node|goverment_agenda|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function drpl_goverment_agenda_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|goverment_agenda|block_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'goverment_agenda';
  $ds_layout->view_mode = 'block_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_date',
        1 => 'field_counselings',
        2 => 'title',
        3 => 'body',
        4 => 'field_place',
        5 => 'field_location',
        6 => 'field_municipality',
      ),
    ),
    'fields' => array(
      'field_date' => 'ds_content',
      'field_counselings' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_place' => 'ds_content',
      'field_location' => 'ds_content',
      'field_municipality' => 'ds_content',
    ),
    'limit' => array(
      'field_counselings' => '1',
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
  $export['node|goverment_agenda|block_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|goverment_agenda|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'goverment_agenda';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs',
      ),
    ),
    'fields' => array(
      'field_paragraphs' => 'ds_content',
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
  $export['node|goverment_agenda|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|goverment_agenda|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'goverment_agenda';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_counselings',
        2 => 'field_short_description',
        3 => 'group_left_column',
        4 => 'field_place',
        5 => 'group_right_column',
        6 => 'field_location',
        7 => 'field_municipality',
        8 => 'field_date',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_counselings' => 'ds_content',
      'field_short_description' => 'ds_content',
      'group_left_column' => 'ds_content',
      'field_place' => 'ds_content',
      'group_right_column' => 'ds_content',
      'field_location' => 'ds_content',
      'field_municipality' => 'ds_content',
      'field_date' => 'ds_content',
    ),
    'limit' => array(
      'field_counselings' => '1',
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
  $export['node|goverment_agenda|teaser'] = $ds_layout;

  return $export;
}
