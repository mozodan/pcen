<?php
/**
 * @file
 * drpl_goverment_agenda.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drpl_goverment_agenda_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-goverment_agenda-body'.
  $field_instances['node-goverment_agenda-body'] = array(
    'bundle' => 'goverment_agenda',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-goverment_agenda-field_counselings'.
  $field_instances['node-goverment_agenda-field_counselings'] = array(
    'bundle' => 'goverment_agenda',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-goverment_agenda-field_date'.
  $field_instances['node-goverment_agenda-field_date'] = array(
    'bundle' => 'goverment_agenda',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'value',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'search_api_facetapi_MINUTE',
          'fromto' => 'value',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 10,
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
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-goverment_agenda-field_location'.
  $field_instances['node-goverment_agenda-field_location'] = array(
    'bundle' => 'goverment_agenda',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'inline',
        'module' => 'geolocation',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'geolocation_text',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'geolocation',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'geolocation_text',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'geolocation',
        'settings' => array(
          'conditions' => array(
            0 => array(
              'condition' => '',
            ),
          ),
        ),
        'type' => 'geolocation_text',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_location',
    'label' => 'Dirección',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geolocation_googlemaps',
      'settings' => array(
        'marker_draggable' => 0,
        'scrollwheel' => 0,
      ),
      'type' => 'geolocation_googlemap',
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-goverment_agenda-field_municipality'.
  $field_instances['node-goverment_agenda-field_municipality'] = array(
    'bundle' => 'goverment_agenda',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_municipality',
    'label' => 'Municipio	',
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
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 13,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-goverment_agenda-field_place'.
  $field_instances['node-goverment_agenda-field_place'] = array(
    'bundle' => 'goverment_agenda',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
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
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_place',
    'label' => 'Lugar',
    'required' => 0,
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
      'weight' => 12,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-goverment_agenda-field_short_description'.
  $field_instances['node-goverment_agenda-field_short_description'] = array(
    'bundle' => 'goverment_agenda',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
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
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Consejerias');
  t('Dirección');
  t('Entradilla');
  t('Fecha');
  t('Lugar');
  t('Municipio	');

  return $field_instances;
}
