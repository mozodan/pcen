<?php
/**
 * @file
 * drpl_landing.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function drpl_landing_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_landing_type'.
  $field_bases['field_landing_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_landing_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'vocabulary' => 'Temática',
        'content' => 'Contenido',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
