<?php
/**
 * @file
 * drpl_frequent_questions.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drpl_frequent_questions_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-frequent_questions-body'.
  $field_instances['node-frequent_questions-body'] = array(
    'bundle' => 'frequent_questions',
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
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-frequent_questions-field_content_reference'.
  $field_instances['node-frequent_questions-field_content_reference'] = array(
    'bundle' => 'frequent_questions',
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
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
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
    'field_name' => 'field_content_reference',
    'label' => 'Contenido referenciado',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-frequent_questions-field_enjoy_category'.
  $field_instances['node-frequent_questions-field_enjoy_category'] = array(
    'bundle' => 'frequent_questions',
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
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
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
      'weight' => 21,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-frequent_questions-field_invest_category'.
  $field_instances['node-frequent_questions-field_invest_category'] = array(
    'bundle' => 'frequent_questions',
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
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
      'weight' => 20,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-frequent_questions-field_live_category'.
  $field_instances['node-frequent_questions-field_live_category'] = array(
    'bundle' => 'frequent_questions',
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
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
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
      'weight' => 19,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-frequent_questions-field_open_government'.
  $field_instances['node-frequent_questions-field_open_government'] = array(
    'bundle' => 'frequent_questions',
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
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
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
      'weight' => 22,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-frequent_questions-field_related_thematic'.
  $field_instances['node-frequent_questions-field_related_thematic'] = array(
    'bundle' => 'frequent_questions',
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
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Categoría disfrutar');
  t('Categoría gobier. abierto');
  t('Categoría invertir');
  t('Categoría vivir');
  t('Contenido referenciado');
  t('Relación nodo temas');

  return $field_instances;
}
