<?php
/**
 * @file
 * drpl_main_information.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drpl_main_information_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-main_information-body'.
  $field_instances['node-main_information-body'] = array(
    'bundle' => 'main_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-main_information-field_categories'.
  $field_instances['node-main_information-field_categories'] = array(
    'bundle' => 'main_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Este campo sirve para determinar la temática principal del nodo, lo cual permitirá asignar un color predeterminado de la categoría seleccionada.',
    'display' => array(
      'block_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_categories',
    'label' => 'Temática principal',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'allowed_ids' => '',
        'cascading_selection' => 0,
        'filter_view' => '',
        'filter_view_arg_key' => '',
        'filter_view_arg_type' => 0,
        'leaves_only' => 0,
        'match_operator' => 'CONTAINS',
        'max_depth' => '',
        'parent_id' => '',
        'path' => '',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'select_parents' => 0,
        'size' => 60,
        'start_minimized' => 0,
        'token_display' => '',
        'track_list' => 0,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-main_information-field_counselings'.
  $field_instances['node-main_information-field_counselings'] = array(
    'bundle' => 'main_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_counselings',
    'label' => 'Consejerias',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'term_reference_tree',
      'settings' => array(
        'cascading_selection' => 0,
        'filter_view' => '',
        'leaves_only' => 0,
        'max_depth' => '',
        'parent_term_id' => '',
        'select_parents' => 0,
        'start_minimized' => 1,
        'token_display' => '',
        'track_list' => 0,
        'use_ajax' => 1,
      ),
      'type' => 'term_reference_tree',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-main_information-field_enjoy_category'.
  $field_instances['node-main_information-field_enjoy_category'] = array(
    'bundle' => 'main_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_enjoy_category',
    'label' => 'Categoría disfrutar',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entity_reference_tree',
      'settings' => array(
        'allowed_ids' => '',
        'cascading_selection' => 0,
        'filter_view' => '',
        'filter_view_arg_key' => '',
        'filter_view_arg_type' => 0,
        'leaves_only' => 0,
        'max_depth' => '',
        'parent_id' => '',
        'select_parents' => 0,
        'start_minimized' => 1,
        'token_display' => '',
        'track_list' => 0,
        'use_ajax' => 1,
      ),
      'type' => 'entity_reference_tree',
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-main_information-field_files'.
  $field_instances['node-main_information-field_files'] = array(
    'bundle' => 'main_information',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_files',
    'label' => 'Archivos de descarga',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv weba webp webm',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 'audio',
          'document' => 'document',
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 'media_internet',
          'upload' => 'upload',
        ),
        'manualcrop_crop_info' => TRUE,
        'manualcrop_default_crop_area' => TRUE,
        'manualcrop_enable' => FALSE,
        'manualcrop_inline_crop' => FALSE,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => TRUE,
        'manualcrop_keyboard' => TRUE,
        'manualcrop_maximize_default_crop_area' => FALSE,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => FALSE,
      ),
      'type' => 'media_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-main_information-field_formalities_reference'.
  $field_instances['node-main_information-field_formalities_reference'] = array(
    'bundle' => 'main_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_formalities_reference',
    'label' => 'Trámites',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 1,
        'references_dialog_edit' => 1,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-main_information-field_images'.
  $field_instances['node-main_information-field_images'] = array(
    'bundle' => 'main_information',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'image_link' => 'content',
          'image_style' => 'block_teaser_image',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'image_link' => 'content',
          'image_style' => 'block_teaser_image_horizontal',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_images',
    'label' => 'Imagen/es cabecera',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'feed' => 0,
          'http' => 0,
          'https' => 0,
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 'media_internet',
          'remote_file' => 0,
          'upload' => 'upload',
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(
          'header_featured_image' => 'header_featured_image',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
      ),
      'type' => 'media_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-main_information-field_invest_category'.
  $field_instances['node-main_information-field_invest_category'] = array(
    'bundle' => 'main_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_invest_category',
    'label' => 'Categoría invertir',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entity_reference_tree',
      'settings' => array(
        'allowed_ids' => '',
        'cascading_selection' => 0,
        'filter_view' => '',
        'filter_view_arg_key' => '',
        'filter_view_arg_type' => 0,
        'leaves_only' => 0,
        'max_depth' => '',
        'parent_id' => '',
        'select_parents' => 0,
        'start_minimized' => 1,
        'token_display' => '',
        'track_list' => 0,
        'use_ajax' => 1,
      ),
      'type' => 'entity_reference_tree',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-main_information-field_live_category'.
  $field_instances['node-main_information-field_live_category'] = array(
    'bundle' => 'main_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_live_category',
    'label' => 'Categoría vivir',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entity_reference_tree',
      'settings' => array(
        'allowed_ids' => '',
        'cascading_selection' => 0,
        'filter_view' => '',
        'filter_view_arg_key' => '',
        'filter_view_arg_type' => 0,
        'leaves_only' => 0,
        'max_depth' => '',
        'parent_id' => '',
        'select_parents' => 0,
        'start_minimized' => 1,
        'token_display' => '',
        'track_list' => 0,
        'use_ajax' => 1,
      ),
      'type' => 'entity_reference_tree',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-main_information-field_open_government'.
  $field_instances['node-main_information-field_open_government'] = array(
    'bundle' => 'main_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_open_government',
    'label' => 'Categoría gobier. abierto',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entity_reference_tree',
      'settings' => array(
        'allowed_ids' => '',
        'cascading_selection' => 0,
        'filter_view' => '',
        'filter_view_arg_key' => '',
        'filter_view_arg_type' => 0,
        'leaves_only' => 0,
        'max_depth' => '',
        'parent_id' => '',
        'select_parents' => 0,
        'start_minimized' => 1,
        'token_display' => '',
        'track_list' => 0,
        'use_ajax' => 1,
      ),
      'type' => 'entity_reference_tree',
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-main_information-field_paragraphs'.
  $field_instances['node-main_information-field_paragraphs'] = array(
    'bundle' => 'main_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_paragraphs',
    'label' => 'Paragraphs',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'accordion' => -1,
        'action' => -1,
        'banner' => -1,
        'block_reference' => -1,
        'button' => -1,
        'calendar_block' => -1,
        'call' => -1,
        'carousel' => -1,
        'carousel_banners' => -1,
        'carousel_banners_slide' => -1,
        'column' => 'column',
        'compound_information' => -1,
        'compound_information_block' => -1,
        'download_files' => -1,
        'events_search' => -1,
        'featured' => -1,
        'featured_events' => -1,
        'featured_image' => -1,
        'featured_list' => -1,
        'featured_list_entity' => -1,
        'file_search_by_date' => -1,
        'frequent_questions' => -1,
        'gallery' => -1,
        'image_link' => -1,
        'information_container' => -1,
        'information_container_block' => -1,
        'link' => -1,
        'link_list' => -1,
        'list' => -1,
        'map_imagen_text' => -1,
        'multiple_compound_links' => -1,
        'news_search' => -1,
        'newsletter' => -1,
        'separator' => -1,
        'switch' => -1,
        'tabs' => -1,
        'text_link' => -1,
        'text_video' => -1,
        'title_text' => -1,
        'title_text_image' => -1,
        'two_columns' => -1,
        'two_columns_double_text' => -1,
        'vertical_tabs' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        'accordion' => 10,
        'action' => 46,
        'banner' => -46,
        'block_reference' => 48,
        'button' => 49,
        'calendar_block' => 4,
        'call' => 28,
        'carousel' => 32,
        'carousel_banners' => 53,
        'carousel_banners_slide' => 54,
        'column' => -48,
        'compound_information' => 56,
        'compound_information_block' => 57,
        'download_files' => 43,
        'events_search' => 59,
        'featured' => 60,
        'featured_events' => -42,
        'featured_image' => 62,
        'featured_list' => 14,
        'featured_list_entity' => -46,
        'file_search_by_date' => 65,
        'frequent_questions' => 66,
        'gallery' => 20,
        'image_link' => -50,
        'information_container' => 69,
        'information_container_block' => 70,
        'link' => 71,
        'link_list' => 72,
        'list' => 2,
        'map_imagen_text' => -40,
        'multiple_compound_links' => 75,
        'news_search' => 77,
        'newsletter' => -34,
        'separator' => -48,
        'switch' => -44,
        'tabs' => 8,
        'text_link' => 81,
        'text_video' => -26,
        'title_text' => -8,
        'title_text_image' => -32,
        'two_columns' => -22,
        'two_columns_double_text' => -26,
        'vertical_tabs' => -12,
        'video' => 88,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'bloque de sección',
      'title_multiple' => 'bloques de secciones',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'node-main_information-field_publications_reference'.
  $field_instances['node-main_information-field_publications_reference'] = array(
    'bundle' => 'main_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_publications_reference',
    'label' => 'Publicaciones',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 1,
        'references_dialog_edit' => 1,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-main_information-field_regulations_reference'.
  $field_instances['node-main_information-field_regulations_reference'] = array(
    'bundle' => 'main_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_regulations_reference',
    'label' => 'Normativas',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 1,
        'references_dialog_edit' => 1,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-main_information-field_related_thematic'.
  $field_instances['node-main_information-field_related_thematic'] = array(
    'bundle' => 'main_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_related_thematic',
    'label' => 'Relación nodo temas',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-main_information-field_segments'.
  $field_instances['node-main_information-field_segments'] = array(
    'bundle' => 'main_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_segments',
    'label' => 'Segmentos/Témas',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'term_reference_tree',
      'settings' => array(
        'cascading_selection' => 0,
        'filter_view' => '',
        'leaves_only' => 0,
        'max_depth' => '',
        'parent_term_id' => '',
        'select_parents' => 0,
        'start_minimized' => 1,
        'token_display' => '',
        'track_list' => 0,
        'use_ajax' => 1,
      ),
      'type' => 'term_reference_tree',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-main_information-field_short_description'.
  $field_instances['node-main_information-field_short_description'] = array(
    'bundle' => 'main_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'trim_length' => 100,
        ),
        'type' => 'text_trimmed',
        'weight' => 3,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'trim_length' => 100,
        ),
        'type' => 'text_trimmed',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'trim_length' => 250,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_short_description',
    'label' => 'Entradilla',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Buscar',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-main_information-field_tags'.
  $field_instances['node-main_information-field_tags'] = array(
    'bundle' => 'main_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'block_teaser_horizontal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Archivos de descarga');
  t('Body');
  t('Categoría disfrutar');
  t('Categoría gobier. abierto');
  t('Categoría invertir');
  t('Categoría vivir');
  t('Consejerias');
  t('Entradilla');
  t('Este campo sirve para determinar la temática principal del nodo, lo cual permitirá asignar un color predeterminado de la categoría seleccionada.');
  t('Imagen/es cabecera');
  t('Normativas');
  t('Paragraphs');
  t('Publicaciones');
  t('Relación nodo temas');
  t('Segmentos/Témas');
  t('Tags');
  t('Temática principal');
  t('Trámites');

  return $field_instances;
}
