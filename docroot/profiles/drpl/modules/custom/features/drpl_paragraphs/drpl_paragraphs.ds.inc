<?php
/**
 * @file
 * drpl_paragraphs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function drpl_paragraphs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|accordion|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'accordion';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'field-name-field-paragraph-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|accordion|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|action|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'action';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'col-md-9',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_icon' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'col-md-3',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|action|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|banner|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'banner';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'field-name-field-paragraph-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_subparagraphs' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|banner|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|block_reference|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'block_reference';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_block_reference' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|block_reference|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|calendar_block|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'calendar_block';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'field-name-field-paragraph-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|calendar_block|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|call|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'call';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|call|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|carousel_banners_slide|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'carousel_banners_slide';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field-name-field-title field-type-text field-label-hidden ',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'a',
          'fi-cl' => 'field-name-field-link ',
          'fi-at' => 'target="_self" href="#"',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|carousel_banners_slide|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|carousel_banners|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'carousel_banners';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_subparagraphs' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|carousel_banners|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|carousel|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'carousel';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'field-name-field-paragraph-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|carousel|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|compound_information|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'compound_information';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_subparagraphs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-item col-md-6',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|compound_information|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|download_files|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'download_files';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'field-name-field-paragraph-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|download_files|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|events_search|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'events_search';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_link' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|events_search|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|featured_events|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'featured_events';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_block_reference' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'slider_coverflow',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|featured_events|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|featured_image|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'featured_image';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|featured_image|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|featured_list_entity|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'featured_list_entity';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_associated_entities' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|featured_list_entity|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|featured_list|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'featured_list';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_featured_content' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'col-md-3',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|featured_list|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|featured|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'featured';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_link' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_singular_featured_content' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|featured|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|gallery|coverflow';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'gallery';
  $ds_fieldsetting->view_mode = 'coverflow';
  $ds_fieldsetting->settings = array(
    'widget_controls_coverflow' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_gallery' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'ul',
          'ow-cl' => 'coverflow',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => TRUE,
          'fi-first-last' => TRUE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|gallery|coverflow'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|gallery|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'gallery';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_gallery' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'col-md-6',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|gallery|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|gallery|gallery';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'gallery';
  $ds_fieldsetting->view_mode = 'gallery';
  $ds_fieldsetting->settings = array(
    'field_gallery' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'col-md-6',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|gallery|gallery'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|information_container_block|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'information_container_block';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_description' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|information_container_block|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|information_container|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'information_container';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_subparagraphs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-item col-md-6',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|information_container|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|link_list|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'link_list';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_subparagraphs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'ul',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|link_list|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|list|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'list';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_news_reference' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'col-md-6',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|list|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|map_imagen_text|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'map_imagen_text';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'field-name-field-paragraph-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|map_imagen_text|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|multiple_compound_links|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'multiple_compound_links';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_subparagraphs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['paragraphs_item|multiple_compound_links|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|newsletter|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'newsletter';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_block_reference' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'field-name-field-paragraph-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|newsletter|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|slideshow|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'slideshow';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_gallery' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'coverflow',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'field-name-field-paragraph-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|slideshow|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|switch|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'switch';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'field-name-field-paragraph-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|switch|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|tabs|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'tabs';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'field-name-field-paragraph-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|tabs|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|text_video|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'text_video';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'field-name-field-paragraph-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|text_video|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|title_text_image|owl_carousel';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'title_text_image';
  $ds_fieldsetting->view_mode = 'owl_carousel';
  $ds_fieldsetting->settings = array(
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|title_text_image|owl_carousel'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|two_columns_double_text|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'two_columns_double_text';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_subparagraphs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => TRUE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|two_columns_double_text|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|two_columns|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'two_columns';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_subparagraphs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['paragraphs_item|two_columns|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|vertical_tabs|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'vertical_tabs';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'field-name-field-paragraph-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|vertical_tabs|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|video|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'video';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_videos' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|video|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function drpl_paragraphs_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'widget_controls_coverflow';
  $ds_field->label = 'widget_controls_coverflow';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $ds_field->ui_limit = 'gallery|coverflow';
  $ds_field->properties = array(
    'block' => 'custom_drpl_paragraphs|coverflow_controls',
    'block_render' => '2',
  );
  $export['widget_controls_coverflow'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function drpl_paragraphs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'entityform|events_search|default';
  $ds_layout->entity_type = 'entityform';
  $ds_layout->bundle = 'events_search';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_categories',
        1 => 'field_string',
      ),
    ),
    'fields' => array(
      'field_categories' => 'ds_content',
      'field_string' => 'ds_content',
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
  $export['entityform|events_search|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'entityform|frequent_questions|default';
  $ds_layout->entity_type = 'entityform';
  $ds_layout->bundle = 'frequent_questions';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_categories',
      ),
    ),
    'fields' => array(
      'field_categories' => 'ds_content',
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
  $export['entityform|frequent_questions|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|accordion|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'accordion';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_subparagraphs',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_subparagraphs' => 'ds_content',
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
  $export['paragraphs_item|accordion|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|accordion|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'accordion';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|accordion|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|action|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'action';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'group_paragraph_information',
        2 => 'group_paragraph_link',
        3 => 'field_icon',
        4 => 'field_link',
        5 => 'field_description',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'group_paragraph_information' => 'ds_content',
      'group_paragraph_link' => 'ds_content',
      'field_icon' => 'ds_content',
      'field_link' => 'ds_content',
      'field_description' => 'ds_content',
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
  $export['paragraphs_item|action|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|action|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'action';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|action|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|banner|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'banner';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_image',
        2 => 'group_paragraph_banner',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_image' => 'ds_content',
      'group_paragraph_banner' => 'ds_content',
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
  $export['paragraphs_item|banner|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|banner|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'banner';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|banner|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|block_reference|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'block_reference';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_block_reference',
        2 => 'field_views_reference',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_block_reference' => 'ds_content',
      'field_views_reference' => 'ds_content',
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
  $export['paragraphs_item|block_reference|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|block_reference|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'block_reference';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|block_reference|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|button|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'button';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_link',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_link' => 'ds_content',
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
  $export['paragraphs_item|button|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|button|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'button';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|button|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|calendar_block|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'calendar_block';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_block_reference',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_block_reference' => 'ds_content',
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
  $export['paragraphs_item|calendar_block|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|calendar_block|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'calendar_block';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|calendar_block|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|call|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'call';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_title',
        2 => 'field_description',
        3 => 'field_link',
        4 => 'field_image',
        5 => 'group_paragraph_background',
        6 => 'group_content',
        7 => 'group_paragraph_main_information',
        8 => 'group_paragraph_link',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_title' => 'ds_content',
      'field_description' => 'ds_content',
      'field_link' => 'ds_content',
      'field_image' => 'ds_content',
      'group_paragraph_background' => 'ds_content',
      'group_content' => 'ds_content',
      'group_paragraph_main_information' => 'ds_content',
      'group_paragraph_link' => 'ds_content',
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
  $export['paragraphs_item|call|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|call|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'call';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|call|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|carousel_banners_slide|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'carousel_banners_slide';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'group_paragraph_main_information',
        2 => 'field_title',
        3 => 'field_link',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'group_paragraph_main_information' => 'ds_content',
      'field_title' => 'ds_content',
      'field_link' => 'ds_content',
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
  $export['paragraphs_item|carousel_banners_slide|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|carousel_banners_slide|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'carousel_banners_slide';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|carousel_banners_slide|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|carousel_banners|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'carousel_banners';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_subparagraphs',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_subparagraphs' => 'ds_content',
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
  $export['paragraphs_item|carousel_banners|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|carousel_banners|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'carousel_banners';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|carousel_banners|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|carousel|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'carousel';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_subparagraphs',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_subparagraphs' => 'ds_content',
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
  $export['paragraphs_item|carousel|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|carousel|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'carousel';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|carousel|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|column|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'column';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraph_title',
        1 => 'group_paragraph',
        2 => 'field_subparagraphs',
      ),
    ),
    'fields' => array(
      'field_paragraph_title' => 'ds_content',
      'group_paragraph' => 'ds_content',
      'field_subparagraphs' => 'ds_content',
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
  $export['paragraphs_item|column|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|column|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'column';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|column|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|compound_information_block|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'compound_information_block';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_icon',
        2 => 'field_title',
        3 => 'field_link',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_icon' => 'ds_content',
      'field_title' => 'ds_content',
      'field_link' => 'ds_content',
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
  $export['paragraphs_item|compound_information_block|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|compound_information_block|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'compound_information_block';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|compound_information_block|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|compound_information|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'compound_information';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_description',
        2 => 'field_subparagraphs',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_description' => 'ds_content',
      'field_subparagraphs' => 'ds_content',
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
  $export['paragraphs_item|compound_information|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|compound_information|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'compound_information';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|compound_information|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|download_files|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'download_files';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_files',
        2 => 'group_paragraph_download_files',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_files' => 'ds_content',
      'group_paragraph_download_files' => 'ds_content',
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
  $export['paragraphs_item|download_files|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|download_files|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'download_files';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|download_files|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|events_search|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'events_search';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'group_search',
        2 => 'field_block_reference_v2',
        3 => 'field_block_reference',
        4 => 'field_link',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'group_search' => 'ds_content',
      'field_block_reference_v2' => 'ds_content',
      'field_block_reference' => 'ds_content',
      'field_link' => 'ds_content',
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
  $export['paragraphs_item|events_search|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|events_search|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'events_search';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|events_search|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|featured_events|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'featured_events';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_block_reference',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_block_reference' => 'ds_content',
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
  $export['paragraphs_item|featured_events|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|featured_events|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'featured_events';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|featured_events|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|featured_image|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'featured_image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_image',
        2 => 'group_paragraph_main_information',
        3 => 'group_paragraph_link',
        4 => 'field_short_description',
        5 => 'field_title',
        6 => 'field_link',
        7 => 'group_paragraph_background',
        8 => 'group_content',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_image' => 'ds_content',
      'group_paragraph_main_information' => 'ds_content',
      'group_paragraph_link' => 'ds_content',
      'field_short_description' => 'ds_content',
      'field_title' => 'ds_content',
      'field_link' => 'ds_content',
      'group_paragraph_background' => 'ds_content',
      'group_content' => 'ds_content',
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
  $export['paragraphs_item|featured_image|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|featured_image|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'featured_image';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|featured_image|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|featured_list_entity|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'featured_list_entity';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_title',
        2 => 'field_block_reference',
        3 => 'field_associated_entities',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_title' => 'ds_content',
      'field_block_reference' => 'ds_content',
      'field_associated_entities' => 'ds_content',
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
  $export['paragraphs_item|featured_list_entity|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|featured_list_entity|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'featured_list_entity';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|featured_list_entity|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|featured_list|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'featured_list';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_featured_content',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_featured_content' => 'ds_content',
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
  $export['paragraphs_item|featured_list|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|featured_list|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'featured_list';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|featured_list|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|featured|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'featured';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_link',
        2 => 'group_paragraph_image',
        3 => 'group_paragraph_information',
        4 => 'field_image',
        5 => 'group_paragraph_link',
        6 => 'field_singular_featured_content',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_link' => 'ds_content',
      'group_paragraph_image' => 'ds_content',
      'group_paragraph_information' => 'ds_content',
      'field_image' => 'ds_content',
      'group_paragraph_link' => 'ds_content',
      'field_singular_featured_content' => 'ds_content',
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
  $export['paragraphs_item|featured|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|featured|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'featured';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|featured|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|file_search_by_date|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'file_search_by_date';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_block_reference',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_block_reference' => 'ds_content',
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
  $export['paragraphs_item|file_search_by_date|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|file_search_by_date|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'file_search_by_date';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|file_search_by_date|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|frequent_questions|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'frequent_questions';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_block_reference',
        2 => 'field_link',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_block_reference' => 'ds_content',
      'field_link' => 'ds_content',
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
  $export['paragraphs_item|frequent_questions|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|frequent_questions|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'frequent_questions';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|frequent_questions|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|gallery|coverflow';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'gallery';
  $ds_layout->view_mode = 'coverflow';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'widget_controls_coverflow',
        1 => 'group_paragraph',
        2 => 'group_paragraph_coverflow',
        3 => 'field_gallery',
        4 => 'group_paragraph_controls',
      ),
    ),
    'fields' => array(
      'widget_controls_coverflow' => 'ds_content',
      'group_paragraph' => 'ds_content',
      'group_paragraph_coverflow' => 'ds_content',
      'field_gallery' => 'ds_content',
      'group_paragraph_controls' => 'ds_content',
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
  $export['paragraphs_item|gallery|coverflow'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|gallery|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'gallery';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_gallery',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_gallery' => 'ds_content',
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
  $export['paragraphs_item|gallery|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|gallery|gallery';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'gallery';
  $ds_layout->view_mode = 'gallery';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_gallery',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_gallery' => 'ds_content',
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
  $export['paragraphs_item|gallery|gallery'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|gallery|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'gallery';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|gallery|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|image_link|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'image_link';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_image',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_image' => 'ds_content',
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
  $export['paragraphs_item|image_link|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|image_link|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'image_link';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|image_link|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|information_container_block|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'information_container_block';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'group_paragraph_image',
        2 => 'group_paragraph_main_information',
        3 => 'field_paragraph_title',
        4 => 'field_description',
        5 => 'field_image',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'group_paragraph_image' => 'ds_content',
      'group_paragraph_main_information' => 'ds_content',
      'field_paragraph_title' => 'ds_content',
      'field_description' => 'ds_content',
      'field_image' => 'ds_content',
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
  $export['paragraphs_item|information_container_block|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|information_container_block|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'information_container_block';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|information_container_block|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|information_container|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'information_container';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_subparagraphs',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_subparagraphs' => 'ds_content',
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
  $export['paragraphs_item|information_container|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|information_container|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'information_container';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|information_container|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|link_list|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'link_list';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'group_title',
        2 => 'field_icon',
        3 => 'field_title',
        4 => 'field_subparagraphs',
        5 => 'field_link',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'group_title' => 'ds_content',
      'field_icon' => 'ds_content',
      'field_title' => 'ds_content',
      'field_subparagraphs' => 'ds_content',
      'field_link' => 'ds_content',
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
  $export['paragraphs_item|link_list|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|link_list|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'link_list';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|link_list|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|link|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'link';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_link',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_link' => 'ds_content',
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
  $export['paragraphs_item|link|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|link|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'link';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|link|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|list|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'list';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_block_reference',
        2 => 'field_news_reference',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_block_reference' => 'ds_content',
      'field_news_reference' => 'ds_content',
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
  $export['paragraphs_item|list|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|list|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'list';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|list|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|map_imagen_text|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'map_imagen_text';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_location',
        2 => 'field_image',
        3 => 'field_title',
        4 => 'field_tag',
        5 => 'group_paragraph_information',
        6 => 'group_paragraph_map',
        7 => 'group_paragraph_tag',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_location' => 'ds_content',
      'field_image' => 'ds_content',
      'field_title' => 'ds_content',
      'field_tag' => 'ds_content',
      'group_paragraph_information' => 'ds_content',
      'group_paragraph_map' => 'ds_content',
      'group_paragraph_tag' => 'ds_content',
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
  $export['paragraphs_item|map_imagen_text|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|map_imagen_text|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'map_imagen_text';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|map_imagen_text|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|multiple_compound_links|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'multiple_compound_links';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_title',
        2 => 'field_subparagraphs',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_title' => 'ds_content',
      'field_subparagraphs' => 'ds_content',
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
  $export['paragraphs_item|multiple_compound_links|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|multiple_compound_links|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'multiple_compound_links';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|multiple_compound_links|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|news_search|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'news_search';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_block_reference_v2',
        2 => 'field_block_reference',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_block_reference_v2' => 'ds_content',
      'field_block_reference' => 'ds_content',
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
  $export['paragraphs_item|news_search|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|news_search|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'news_search';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|news_search|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|newsletter|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'newsletter';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_title',
        2 => 'field_short_description',
        3 => 'field_block_reference',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_title' => 'ds_content',
      'field_short_description' => 'ds_content',
      'field_block_reference' => 'ds_content',
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
  $export['paragraphs_item|newsletter|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|newsletter|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'newsletter';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|newsletter|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|paragraph_text|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'paragraph_text';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_description',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_description' => 'ds_content',
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
  $export['paragraphs_item|paragraph_text|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|paragraph_text|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'paragraph_text';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|paragraph_text|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|separator|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'separator';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_paragraph_title',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_paragraph_title' => 'ds_content',
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
  $export['paragraphs_item|separator|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|separator|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'separator';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|separator|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|slideshow|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'slideshow';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraph_title',
        1 => 'group_paragraph',
        2 => 'field_gallery',
        3 => 'group_paragraph_controls',
        4 => 'group_paragraph_coverflow',
      ),
    ),
    'fields' => array(
      'field_paragraph_title' => 'ds_content',
      'group_paragraph' => 'ds_content',
      'field_gallery' => 'ds_content',
      'group_paragraph_controls' => 'ds_content',
      'group_paragraph_coverflow' => 'ds_content',
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
  $export['paragraphs_item|slideshow|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|slideshow|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'slideshow';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|slideshow|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|switch|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'switch';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_subparagraphs',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_subparagraphs' => 'ds_content',
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
  $export['paragraphs_item|switch|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|switch|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'switch';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|switch|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|tabs|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'tabs';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_subparagraphs',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_subparagraphs' => 'ds_content',
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
  $export['paragraphs_item|tabs|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|tabs|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'tabs';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|tabs|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|tabs|tabs';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'tabs';
  $ds_layout->view_mode = 'tabs';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph_tabs',
        1 => 'field_paragraphs',
      ),
    ),
    'fields' => array(
      'group_paragraph_tabs' => 'ds_content',
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
  $export['paragraphs_item|tabs|tabs'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|text_link|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'text_link';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_description',
        2 => 'field_link',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_description' => 'ds_content',
      'field_link' => 'ds_content',
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
  $export['paragraphs_item|text_link|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|text_link|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'text_link';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|text_link|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|text_video|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'text_video';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_title',
        2 => 'field_description',
        3 => 'field_videos',
        4 => 'field_link',
        5 => 'group_main_information',
        6 => 'group_multimedia',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_title' => 'ds_content',
      'field_description' => 'ds_content',
      'field_videos' => 'ds_content',
      'field_link' => 'ds_content',
      'group_main_information' => 'ds_content',
      'group_multimedia' => 'ds_content',
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
  $export['paragraphs_item|text_video|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|text_video|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'text_video';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|text_video|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|title_text_image|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'title_text_image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_title',
        2 => 'field_description',
        3 => 'field_image',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_title' => 'ds_content',
      'field_description' => 'ds_content',
      'field_image' => 'ds_content',
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
  $export['paragraphs_item|title_text_image|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|title_text_image|owl_carousel';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'title_text_image';
  $ds_layout->view_mode = 'owl_carousel';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'group_paragraph_image',
        2 => 'field_image',
        3 => 'group_paragraph_information',
        4 => 'field_title',
        5 => 'field_description',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'group_paragraph_image' => 'ds_content',
      'field_image' => 'ds_content',
      'group_paragraph_information' => 'ds_content',
      'field_title' => 'ds_content',
      'field_description' => 'ds_content',
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
  $export['paragraphs_item|title_text_image|owl_carousel'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|title_text_image|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'title_text_image';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|title_text_image|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|title_text|accordion';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'title_text';
  $ds_layout->view_mode = 'accordion';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph_accordion',
        1 => 'group_paragraph_accordions',
        2 => 'field_title',
        3 => 'field_description',
      ),
    ),
    'fields' => array(
      'group_paragraph_accordion' => 'ds_content',
      'group_paragraph_accordions' => 'ds_content',
      'field_title' => 'ds_content',
      'field_description' => 'ds_content',
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
  $export['paragraphs_item|title_text|accordion'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|title_text|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'title_text';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_title',
        2 => 'field_description',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_title' => 'ds_content',
      'field_description' => 'ds_content',
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
  $export['paragraphs_item|title_text|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|title_text|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'title_text';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|title_text|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|title_text|switch';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'title_text';
  $ds_layout->view_mode = 'switch';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph_parent_fieldset',
        1 => 'field_description',
      ),
    ),
    'fields' => array(
      'group_paragraph_parent_fieldset' => 'ds_content',
      'field_description' => 'ds_content',
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
  $export['paragraphs_item|title_text|switch'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|title_text|tabs';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'title_text';
  $ds_layout->view_mode = 'tabs';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph_tabs',
        1 => 'field_title',
        2 => 'group_paragraph_tab',
        3 => 'field_description',
      ),
    ),
    'fields' => array(
      'group_paragraph_tabs' => 'ds_content',
      'field_title' => 'ds_content',
      'group_paragraph_tab' => 'ds_content',
      'field_description' => 'ds_content',
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
  $export['paragraphs_item|title_text|tabs'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|title_text|vertical_tabs';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'title_text';
  $ds_layout->view_mode = 'vertical_tabs';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph_tabs',
        1 => 'field_title',
        2 => 'field_description',
        3 => 'group_paragraph_tab',
      ),
    ),
    'fields' => array(
      'group_paragraph_tabs' => 'ds_content',
      'field_title' => 'ds_content',
      'field_description' => 'ds_content',
      'group_paragraph_tab' => 'ds_content',
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
  $export['paragraphs_item|title_text|vertical_tabs'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|two_columns_double_text|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'two_columns_double_text';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'group_paragraph_information',
        2 => 'field_subparagraphs',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'group_paragraph_information' => 'ds_content',
      'field_subparagraphs' => 'ds_content',
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
  $export['paragraphs_item|two_columns_double_text|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|two_columns_double_text|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'two_columns_double_text';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|two_columns_double_text|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|two_columns_image_text|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'two_columns_image_text';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_image',
        2 => 'field_description',
        3 => 'field_subparagraphs',
        4 => 'group_paragraph_image',
        5 => 'group_paragraph_information',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_image' => 'ds_content',
      'field_description' => 'ds_content',
      'field_subparagraphs' => 'ds_content',
      'group_paragraph_image' => 'ds_content',
      'group_paragraph_information' => 'ds_content',
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
  $export['paragraphs_item|two_columns_image_text|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|two_columns|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'two_columns';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_subparagraphs',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_subparagraphs' => 'ds_content',
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
  $export['paragraphs_item|two_columns|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|two_columns|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'two_columns';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|two_columns|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|vertical_tabs|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'vertical_tabs';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_subparagraphs',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
      'field_subparagraphs' => 'ds_content',
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
  $export['paragraphs_item|vertical_tabs|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|vertical_tabs|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'vertical_tabs';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|vertical_tabs|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|video|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_paragraph',
        1 => 'field_videos',
      ),
    ),
    'fields' => array(
      'group_paragraph' => 'ds_content',
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
  $export['paragraphs_item|video|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|video|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_label',
      ),
    ),
    'fields' => array(
      'field_label' => 'ds_content',
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
  $export['paragraphs_item|video|paragraphs_editor_preview'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function drpl_paragraphs_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'accordion';
  $ds_view_mode->label = 'Accordion';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['accordion'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'coverflow';
  $ds_view_mode->label = 'Coverflow';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['coverflow'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'gallery';
  $ds_view_mode->label = 'Gallery';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['gallery'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'owl_carousel';
  $ds_view_mode->label = 'Owl-carousel';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['owl_carousel'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'switch';
  $ds_view_mode->label = 'Switch';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['switch'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'tabs';
  $ds_view_mode->label = 'Horizontal tabs';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['tabs'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'vertical_tabs';
  $ds_view_mode->label = 'Vertical tabs';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['vertical_tabs'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'video_paragraph';
  $ds_view_mode->label = 'Video paragraph';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['video_paragraph'] = $ds_view_mode;

  return $export;
}
