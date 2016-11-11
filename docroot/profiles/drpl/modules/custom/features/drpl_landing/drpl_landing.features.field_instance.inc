<?php
/**
 * @file
 * drpl_landing.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drpl_landing_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-landing-body'.
  $field_instances['node-landing-body'] = array(
    'bundle' => 'landing',
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
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
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

  // Exported field_instance: 'node-landing-field_enjoy_category'.
  $field_instances['node-landing-field_enjoy_category'] = array(
    'bundle' => 'landing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
        'apply_chosen' => 0,
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
      'weight' => 13,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-landing-field_invest_category'.
  $field_instances['node-landing-field_invest_category'] = array(
    'bundle' => 'landing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
        'apply_chosen' => 0,
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
      'weight' => 12,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-landing-field_live_category'.
  $field_instances['node-landing-field_live_category'] = array(
    'bundle' => 'landing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
        'apply_chosen' => 0,
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
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-landing-field_open_government'.
  $field_instances['node-landing-field_open_government'] = array(
    'bundle' => 'landing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
        'apply_chosen' => 0,
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
      'weight' => 14,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-landing-field_paragraphs'.
  $field_instances['node-landing-field_paragraphs'] = array(
    'bundle' => 'landing',
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
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
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
        'weight' => 12,
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
        'accordion' => 2,
        'action' => 34,
        'banner' => 3,
        'block_reference' => 60,
        'button' => 61,
        'calendar_block' => 4,
        'call' => 15,
        'carousel' => 5,
        'carousel_banners' => 39,
        'carousel_banners_slide' => 40,
        'column' => 31,
        'compound_information' => 68,
        'compound_information_block' => 69,
        'download_files' => 6,
        'events_search' => 71,
        'featured' => 72,
        'featured_events' => 7,
        'featured_image' => 74,
        'featured_list' => 8,
        'featured_list_entity' => 10,
        'file_search_by_date' => 77,
        'frequent_questions' => 78,
        'gallery' => 11,
        'image_link' => 47,
        'information_container' => 81,
        'information_container_block' => 82,
        'link' => 83,
        'link_list' => 48,
        'list' => 12,
        'map_imagen_text' => 13,
        'multiple_compound_links' => 87,
        'news_search' => -88,
        'newsletter' => 14,
        'separator' => 16,
        'switch' => 18,
        'tabs' => 19,
        'text_link' => 55,
        'text_video' => 20,
        'title_text' => 21,
        'title_text_image' => 22,
        'two_columns' => 23,
        'two_columns_double_text' => 24,
        'vertical_tabs' => 25,
        'video' => -88,
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
      'weight' => 18,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-landing-field_paragraphs_header'.
  $field_instances['node-landing-field_paragraphs_header'] = array(
    'bundle' => 'landing',
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
        'weight' => 13,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_paragraphs_header',
    'label' => 'Componentes',
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
        'accordion' => 2,
        'action' => 3,
        'banner' => 4,
        'block_reference' => 35,
        'button' => 36,
        'calendar_block' => 5,
        'call' => 6,
        'carousel' => 7,
        'carousel_banners' => 8,
        'carousel_banners_slide' => 9,
        'column' => 10,
        'compound_information' => 43,
        'compound_information_block' => 44,
        'download_files' => 11,
        'events_search' => 46,
        'featured' => 47,
        'featured_events' => 12,
        'featured_image' => 49,
        'featured_list' => 13,
        'featured_list_entity' => 14,
        'file_search_by_date' => 52,
        'frequent_questions' => 53,
        'gallery' => 15,
        'image_link' => 16,
        'information_container' => 56,
        'information_container_block' => 57,
        'link' => 58,
        'link_list' => 17,
        'list' => 18,
        'map_imagen_text' => 19,
        'multiple_compound_links' => 62,
        'news_search' => 64,
        'newsletter' => 20,
        'separator' => 21,
        'switch' => 22,
        'tabs' => 23,
        'text_link' => 24,
        'text_video' => 25,
        'title_text' => 26,
        'title_text_image' => 27,
        'two_columns' => 28,
        'two_columns_double_text' => 29,
        'vertical_tabs' => 30,
        'video' => 75,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'componente',
      'title_multiple' => 'componentes',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 17,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-landing-field_related_thematic'.
  $field_instances['node-landing-field_related_thematic'] = array(
    'bundle' => 'landing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
        'apply_chosen' => 0,
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

  // Exported field_instance: 'node-landing-field_short_description'.
  $field_instances['node-landing-field_short_description'] = array(
    'bundle' => 'landing',
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
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Categoría disfrutar');
  t('Categoría gobier. abierto');
  t('Categoría invertir');
  t('Categoría vivir');
  t('Componentes');
  t('Entradilla');
  t('Paragraphs');
  t('Relación nodo temas');

  return $field_instances;
}