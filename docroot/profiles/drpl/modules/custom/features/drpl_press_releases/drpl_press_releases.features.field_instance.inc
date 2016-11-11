<?php
/**
 * @file
 * drpl_press_releases.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drpl_press_releases_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-press_releases-body'.
  $field_instances['node-press_releases-body'] = array(
    'bundle' => 'press_releases',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'trim_length' => 600,
        ),
        'type' => 'text_trimmed',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'body',
    'label' => 'Descripción',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'linkit' => array(
        'button_text' => 'Buscar',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-press_releases-field_audio'.
  $field_instances['node-press_releases-field_audio'] = array(
    'bundle' => 'press_releases',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_audio',
    'label' => 'Audio',
    'required' => 0,
    'settings' => array(
      'file_extensions' => 'mp3',
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
          'audio' => 'audio',
          'document' => 0,
          'image' => 0,
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 'media_internet',
          'remote_file' => 'remote_file',
          'upload' => 'upload',
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
      ),
      'type' => 'media_generic',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-press_releases-field_counselings'.
  $field_instances['node-press_releases-field_counselings'] = array(
    'bundle' => 'press_releases',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_plain',
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
        'cascading_selection' => 1,
        'filter_view' => '',
        'leaves_only' => 0,
        'max_depth' => '',
        'parent_term_id' => '',
        'select_parents' => 0,
        'start_minimized' => 1,
        'token_display' => '',
        'track_list' => 0,
        'use_ajax' => 0,
      ),
      'type' => 'term_reference_tree',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-press_releases-field_date'.
  $field_instances['node-press_releases-field_date'] = array(
    'bundle' => 'press_releases',
    'deleted' => 0,
    'description' => '',
    'display' => array(
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
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_date',
    'label' => 'Fecha',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-press_releases-field_files'.
  $field_instances['node-press_releases-field_files'] = array(
    'bundle' => 'press_releases',
    'deleted' => 0,
    'description' => '',
    'display' => array(
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
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_files',
    'label' => 'PDF Adjunto',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf',
      'max_filesize' => '',
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
          'document' => 'document',
          'image' => 0,
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
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
      ),
      'type' => 'media_generic',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-press_releases-field_images'.
  $field_instances['node-press_releases-field_images'] = array(
    'bundle' => 'press_releases',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 11,
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
        'weight' => 10,
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-press_releases-field_paragraphs'.
  $field_instances['node-press_releases-field_paragraphs'] = array(
    'bundle' => 'press_releases',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 12,
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
        'weight' => 9,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_paragraphs',
    'label' => 'Galería',
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
        'column' => -1,
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
        'gallery' => 'gallery',
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
        'accordion' => 2,
        'action' => 3,
        'banner' => 4,
        'block_reference' => 5,
        'button' => 6,
        'calendar_block' => 7,
        'call' => 8,
        'carousel' => 9,
        'carousel_banners' => 10,
        'carousel_banners_slide' => 11,
        'column' => 12,
        'compound_information' => 13,
        'compound_information_block' => 14,
        'download_files' => 15,
        'events_search' => 16,
        'featured' => 17,
        'featured_events' => 18,
        'featured_image' => 19,
        'featured_list' => 20,
        'featured_list_entity' => 21,
        'file_search_by_date' => 22,
        'frequent_questions' => 23,
        'gallery' => 24,
        'image_link' => 25,
        'information_container' => 26,
        'information_container_block' => 27,
        'link' => 28,
        'link_list' => 29,
        'list' => 30,
        'map_imagen_text' => 31,
        'multiple_compound_links' => 32,
        'news_search' => 34,
        'newsletter' => 33,
        'separator' => 35,
        'switch' => 36,
        'tabs' => 37,
        'text_link' => 38,
        'text_video' => 39,
        'title_text' => 40,
        'title_text_image' => 41,
        'two_columns' => 42,
        'two_columns_double_text' => 43,
        'vertical_tabs' => 44,
        'video' => 45,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'bloque de galería',
      'title_multiple' => 'bloques de galería',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-press_releases-field_short_description'.
  $field_instances['node-press_releases-field_short_description'] = array(
    'bundle' => 'press_releases',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'trim_length' => 250,
        ),
        'type' => 'text_trimmed',
        'weight' => 11,
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
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Audio');
  t('Consejerias');
  t('Descripción');
  t('Entradilla');
  t('Fecha');
  t('Galería');
  t('Imagen/es cabecera');
  t('PDF Adjunto');

  return $field_instances;
}
