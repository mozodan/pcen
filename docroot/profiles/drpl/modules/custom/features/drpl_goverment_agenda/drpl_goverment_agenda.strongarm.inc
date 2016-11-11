<?php
/**
 * @file
 * drpl_goverment_agenda.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drpl_goverment_agenda_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_goverment_agenda';
  $strongarm->value = 0;
  $export['comment_anonymous_goverment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_goverment_agenda';
  $strongarm->value = 0;
  $export['comment_default_mode_goverment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_goverment_agenda';
  $strongarm->value = '50';
  $export['comment_default_per_page_goverment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_goverment_agenda';
  $strongarm->value = 0;
  $export['comment_form_location_goverment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_goverment_agenda';
  $strongarm->value = '1';
  $export['comment_goverment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_goverment_agenda';
  $strongarm->value = '0';
  $export['comment_preview_goverment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_goverment_agenda';
  $strongarm->value = 0;
  $export['comment_subject_field_goverment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__goverment_agenda';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'block_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'block_teaser_horizontal' => array(
        'custom_settings' => FALSE,
      ),
      'calendar_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full_video' => array(
        'custom_settings' => FALSE,
      ),
      'old_video' => array(
        'custom_settings' => FALSE,
      ),
      'video_thumbnail' => array(
        'custom_settings' => FALSE,
      ),
      'video_thumbnail_title' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '10',
        ),
        'title' => array(
          'weight' => '6',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
        'workbench_access' => array(
          'weight' => '1',
        ),
        'xmlsitemap' => array(
          'weight' => '11',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__goverment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_goverment_agenda';
  $strongarm->value = '0';
  $export['language_content_type_goverment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_goverment_agenda';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_goverment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_goverment_agenda';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_goverment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_goverment_agenda';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
    2 => 'revision',
  );
  $export['node_options_goverment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_goverment_agenda';
  $strongarm->value = '1';
  $export['node_preview_goverment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_goverment_agenda';
  $strongarm->value = 1;
  $export['node_submitted_goverment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_goverment_agenda';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_goverment_agenda'] = $strongarm;

  return $export;
}
