<?php
/**
 * @file
 * drpl_press_conferences.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drpl_press_conferences_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-press_conferences-body'.
  $field_instances['node-press_conferences-body'] = array(
    'bundle' => 'press_conferences',
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
      'full_video' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'live_streaming' => array(
        'label' => 'hidden',
        'module' => 'owlcarousel_fields',
        'settings' => array(
          'conditions' => array(),
          'image_style' => 'large',
          'settings_group' => 'owlcarousel_settings_default',
          'trim_length' => '',
        ),
        'type' => 'owlcarousel_formatter',
        'weight' => 10,
      ),
      'old_video' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-press_conferences-field_date'.
  $field_instances['node-press_conferences-field_date'] = array(
    'bundle' => 'press_conferences',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'full_video' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'live_streaming' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 12,
      ),
      'old_video' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'short',
          'fromto' => 'value',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'short',
          'fromto' => 'value2',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_date',
    'label' => 'Fecha',
    'required' => 1,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-press_conferences-field_images'.
  $field_instances['node-press_conferences-field_images'] = array(
    'bundle' => 'press_conferences',
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
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full_video' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'old_video' => array(
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
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'remote_file' => 0,
          'upload' => 0,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-press_conferences-field_server_url'.
  $field_instances['node-press_conferences-field_server_url'] = array(
    'bundle' => 'press_conferences',
    'default_value' => array(
      0 => array(
        'tid' => 12857,
      ),
    ),
    'deleted' => 0,
    'description' => 'Seleccionar la url del servidor remoto para la retransmisión en directo. Este campo se mostrará durante el intervalo de tiempo de la rueda de prensa.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'full_video' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'live_streaming' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
      'old_video' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_server_url',
    'label' => 'Url servidor en directo',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-press_conferences-field_short_description'.
  $field_instances['node-press_conferences-field_short_description'] = array(
    'bundle' => 'press_conferences',
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
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full_video' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'live_streaming' => array(
        'label' => 'hidden',
        'module' => 'owlcarousel_fields',
        'settings' => array(
          'conditions' => array(),
          'image_style' => 'large',
          'settings_group' => 'owlcarousel_settings_default',
          'trim_length' => '',
        ),
        'type' => 'owlcarousel_formatter',
        'weight' => 11,
      ),
      'old_video' => array(
        'label' => 'hidden',
        'module' => 'owlcarousel_fields',
        'settings' => array(
          'conditions' => array(),
          'image_style' => 'large',
          'settings_group' => 'owlcarousel_settings_default',
          'trim_length' => '',
        ),
        'type' => 'owlcarousel_formatter',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 4,
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
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-press_conferences-field_videos'.
  $field_instances['node-press_conferences-field_videos'] = array(
    'bundle' => 'press_conferences',
    'deleted' => 0,
    'description' => 'Este campo se mostrará cuando el intervalo de tiempo de la rueda de prensa haya finalizado.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mediafield',
        'settings' => array(
          'conditions' => array(),
          'file_view_mode' => 'default',
        ),
        'type' => 'media',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'mediafield',
        'settings' => array(
          'conditions' => array(),
          'file_view_mode' => 'default',
        ),
        'type' => 'media',
        'weight' => 4,
      ),
      'full_video' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'conditions' => array(
            0 => array(
              'condition' => '',
            ),
          ),
          'file_view_mode' => 'default',
        ),
        'type' => 'media',
        'weight' => 0,
      ),
      'live_streaming' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'conditions' => array(),
          'file_view_mode' => 'default',
        ),
        'type' => 'media',
        'weight' => 9,
      ),
      'old_video' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'conditions' => array(),
          'file_view_mode' => 'default',
        ),
        'type' => 'media',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'conditions' => array(),
          'file_view_mode' => 'default',
        ),
        'type' => 'media',
        'weight' => 16,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_videos',
    'label' => 'Video en diferido.',
    'required' => 0,
    'settings' => array(
      'file_extensions' => 'mov mp4 m4a m4v mpeg avi ogg oga ogv weba webp webm',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'feed' => 0,
          'http' => 'http',
          'https' => 'https',
          'public' => 'public',
          'vimeo' => 'vimeo',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'video' => 'video',
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
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Descripción');
  t('Entradilla');
  t('Este campo se mostrará cuando el intervalo de tiempo de la rueda de prensa haya finalizado.');
  t('Fecha');
  t('Imagen/es cabecera');
  t('Seleccionar la url del servidor remoto para la retransmisión en directo. Este campo se mostrará durante el intervalo de tiempo de la rueda de prensa.');
  t('Url servidor en directo');
  t('Video en diferido.');

  return $field_instances;
}
