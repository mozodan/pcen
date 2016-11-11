<?php
/**
 * @file
 * drpl_paragraphs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drpl_paragraphs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__accordion';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__accordion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__action';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__action'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__banner';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__banner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__block_reference';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__block_reference'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__button';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__button'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__calendar_block';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__calendar_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__call';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__call'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__carousel';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__carousel_banners';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__carousel_banners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__carousel_banners_slide';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__carousel_banners_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__column';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__column'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__compound_information';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__compound_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__compound_information_block';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__compound_information_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__download_files';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__download_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__events_search';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__events_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__featured';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__featured'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__featured_events';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__featured_events'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__featured_image';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__featured_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__featured_list';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__featured_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__featured_list_entity';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__featured_list_entity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__file_search_by_date';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__file_search_by_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__frequent_questions';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__frequent_questions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__gallery';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => TRUE,
      ),
      'gallery' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__image_link';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow_image_link' => array(
        'custom_settings' => FALSE,
      ),
      'gallery_image_link' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__image_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__information_container';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__information_container'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__information_container_block';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__information_container_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__link';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__link_list';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__link_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__list';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'news_widget_featured_news' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__map_imagen_text';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__map_imagen_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__multiple_compound_links';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__multiple_compound_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__newsletter';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__news_search';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__news_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__paragraph_text';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__paragraph_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__separator';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__separator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__switch';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__switch'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__tabs';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__tabs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__text_link';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__text_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__text_video';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__text_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__title_text';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => TRUE,
      ),
      'accordion' => array(
        'custom_settings' => TRUE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => TRUE,
      ),
      'switch' => array(
        'custom_settings' => TRUE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__title_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__title_text_image';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => TRUE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__title_text_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__two_columns';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__two_columns'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__two_columns_double_text';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__two_columns_double_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__vertical_tabs';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__vertical_tabs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__video';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'coverflow' => array(
        'custom_settings' => FALSE,
      ),
      'gallery' => array(
        'custom_settings' => FALSE,
      ),
      'owl_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'switch' => array(
        'custom_settings' => FALSE,
      ),
      'tabs' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_tabs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = '5000';
  $export['owlcarousel_auto_play_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_slideshow-paragraph_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_desktop_owlcarousel_settings_slideshow-paragraph_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_slideshow-paragraph_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_slideshow-paragraph_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_slideshow-paragraph_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_slideshow-paragraph_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_slideshow-paragraph_width';
  $strongarm->value = '979';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_slideshow-paragraph_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_slideshow-paragraph_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_slideshow-paragraph_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_slideshow-paragraph_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_slideshow-paragraph_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = '1';
  $export['owlcarousel_items_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 1;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_slideshow-paragraph_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_tablet_owlcarousel_settings_slideshow-paragraph_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_slideshow-paragraph_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_slideshow-paragraph_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_slideshow-paragraph_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_slideshow-paragraph_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_slideshow-paragraph_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_slideshow-paragraph_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 0;
  $export['owlcarousel_lazy_load_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 1;
  $export['owlcarousel_navigation_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = array(
    0 => '',
    1 => '',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 1;
  $export['owlcarousel_pagination_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 0;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 1;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 'slideshow_paragraph';
  $export['owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 1;
  $export['owlcarousel_single_item_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 0;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_slideshow-paragraph';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_slideshow-paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_paragraphs_item_paragraph_text';
  $strongarm->value = array(
    'status' => 0,
    'help' => '',
    'view modes' => array(),
  );
  $export['panelizer_defaults_paragraphs_item_paragraph_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'url_events_search_paragraph';
  $strongarm->value = 'actividades';
  $export['url_events_search_paragraph'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'url_frequent_questions_paragraph';
  $strongarm->value = 'preguntas-frecuentes';
  $export['url_frequent_questions_paragraph'] = $strongarm;

  return $export;
}
