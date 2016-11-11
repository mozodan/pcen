<?php
/**
 * @file
 * drpl_common_repository.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function drpl_common_repository_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'.
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_audio'.
  $field_bases['field_audio'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_audio',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'mediafield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'media',
  );

  // Exported field_base: 'field_background_type'.
  $field_bases['field_background_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_background_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'color' => 'Color',
        'image' => 'Imagen',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_block_reference'.
  $field_bases['field_block_reference'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_reference',
    'indexes' => array(
      'moddelta' => array(
        0 => 'moddelta',
      ),
    ),
    'locked' => 0,
    'module' => 'blockreference',
    'settings' => array(
      'referenceable_modules' => array(),
    ),
    'translatable' => 0,
    'type' => 'blockreference',
  );

  // Exported field_base: 'field_block_reference_v2'.
  $field_bases['field_block_reference_v2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_reference_v2',
    'indexes' => array(
      'moddelta' => array(
        0 => 'moddelta',
      ),
    ),
    'locked' => 0,
    'module' => 'blockreference',
    'settings' => array(
      'referenceable_modules' => array(),
    ),
    'translatable' => 0,
    'type' => 'blockreference',
  );

  // Exported field_base: 'field_block_type'.
  $field_bases['field_block_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'blocks' => 'Referencia a bloque',
        'views' => 'Referencia a vista',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_categories'.
  $field_bases['field_categories'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_categories',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'entityqueue' => array(
            'status' => 0,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'menu_categories_entity_reference',
          'view_name' => 'menu_categories',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_center_type'.
  $field_bases['field_center_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_center_type',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_color'.
  $field_bases['field_color'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_color',
    'indexes' => array(
      'rgb' => array(
        0 => 'rgb',
      ),
    ),
    'locked' => 0,
    'module' => 'colorfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'colorfield',
  );

  // Exported field_base: 'field_color_border'.
  $field_bases['field_color_border'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_color_border',
    'indexes' => array(
      'rgb' => array(
        0 => 'rgb',
      ),
    ),
    'locked' => 0,
    'module' => 'colorfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'colorfield',
  );

  // Exported field_base: 'field_color_text'.
  $field_bases['field_color_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_color_text',
    'indexes' => array(
      'rgb' => array(
        0 => 'rgb',
      ),
    ),
    'locked' => 0,
    'module' => 'colorfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'colorfield',
  );

  // Exported field_base: 'field_config_type'.
  $field_bases['field_config_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_config_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => 'custom_drpl_paragraphs_list_mode_config',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_content_reference'.
  $field_bases['field_content_reference'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_content_reference',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'entityqueue' => array(
            'status' => 0,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'events' => 'events',
          'landing' => 'landing',
          'main_information' => 'main_information',
          'news' => 'news',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_content_types'.
  $field_bases['field_content_types'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_content_types',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => 'custom_drpl_list_content_types',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_counselings'.
  $field_bases['field_counselings'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_counselings',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'counseling',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_date'.
  $field_bases['field_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => 'UTC',
      'todate' => 'required',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'date',
  );

  // Exported field_base: 'field_date_added'.
  $field_bases['field_date_added'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date_added',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => 'UTC',
      'todate' => '',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_description'.
  $field_bases['field_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_disabled_short_description'.
  $field_bases['field_disabled_short_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_disabled_short_description',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_district'.
  $field_bases['field_district'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_district',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_email'.
  $field_bases['field_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_email',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_enjoy_category'.
  $field_bases['field_enjoy_category'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_enjoy_category',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'enjoy_category' => 'enjoy_category',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_featured_content'.
  $field_bases['field_featured_content'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_featured_content',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'events' => 'events',
          'main_information' => 'main_information',
          'news' => 'news',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_featured_element'.
  $field_bases['field_featured_element'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_featured_element',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'No',
        1 => 'Sí',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_file_image_alt_text'.
  $field_bases['field_file_image_alt_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_alt_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_file_image_title_text'.
  $field_bases['field_file_image_title_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_title_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_files'.
  $field_bases['field_files'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_files',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 1,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_filter_categories'.
  $field_bases['field_filter_categories'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_filter_categories',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'entityqueue' => array(
            'status' => 0,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'menu_categories_entity_reference',
          'view_name' => 'menu_categories',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_filter_parent_categorie'.
  $field_bases['field_filter_parent_categorie'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_filter_parent_categorie',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'entityqueue' => array(
            'status' => 0,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'menu_parent_categories_entity_reference',
          'view_name' => 'menu_categories',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_formalities_reference'.
  $field_bases['field_formalities_reference'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_formalities_reference',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'entityqueue' => array(
            'status' => 0,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'formalities' => 'formalities',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_gallery'.
  $field_bases['field_gallery'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gallery',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_icon'.
  $field_bases['field_icon'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_icon',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_id'.
  $field_bases['field_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_id',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_image'.
  $field_bases['field_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_images'.
  $field_bases['field_images'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_images',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_invest_category'.
  $field_bases['field_invest_category'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_invest_category',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'invest_category' => 'invest_category',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_items_limit'.
  $field_bases['field_items_limit'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_items_limit',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_label'.
  $field_bases['field_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_label',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_link'.
  $field_bases['field_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_live_category'.
  $field_bases['field_live_category'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_live_category',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'live_category' => 'live_category',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_location'.
  $field_bases['field_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_location',
    'indexes' => array(
      'lat' => array(
        0 => 'lat',
      ),
      'lng' => array(
        0 => 'lng',
      ),
    ),
    'locked' => 0,
    'module' => 'geolocation',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'geolocation_latlng',
  );

  // Exported field_base: 'field_long_address'.
  $field_bases['field_long_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_long_address',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_long_phone'.
  $field_bases['field_long_phone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_long_phone',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_municipality'.
  $field_bases['field_municipality'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_municipality',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'entityqueue' => array(
            'status' => 0,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'municipalities' => 'municipalities',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_news_reference'.
  $field_bases['field_news_reference'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_news_reference',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'news' => 'news',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_office_hours'.
  $field_bases['field_office_hours'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_office_hours',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_open_government'.
  $field_bases['field_open_government'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_open_government',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'open_government' => 'open_government',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_place'.
  $field_bases['field_place'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_place',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_postal_code'.
  $field_bases['field_postal_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_postal_code',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_province'.
  $field_bases['field_province'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_province',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'provinces' => 'provinces',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_publications_reference'.
  $field_bases['field_publications_reference'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_publications_reference',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'entityqueue' => array(
            'status' => 0,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'publications' => 'publications',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_regulations_reference'.
  $field_bases['field_regulations_reference'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_regulations_reference',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'entityqueue' => array(
            'status' => 0,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'regulations' => 'regulations',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_related_thematic'.
  $field_bases['field_related_thematic'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_thematic',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'enjoy_category' => 'enjoy_category',
          'invest_category' => 'invest_category',
          'live_category' => 'live_category',
          'open_government' => 'open_government',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_responsible'.
  $field_bases['field_responsible'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_responsible',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_segments'.
  $field_bases['field_segments'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_segments',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'thematics',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_server_url'.
  $field_bases['field_server_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_server_url',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'video_servers',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_short_description'.
  $field_bases['field_short_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_short_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_show_link'.
  $field_bases['field_show_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_show_link',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_singular_featured_content'.
  $field_bases['field_singular_featured_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_singular_featured_content',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'entityqueue' => array(
            'status' => 0,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'events' => 'events',
          'main_information' => 'main_information',
          'news' => 'news',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_tag'.
  $field_bases['field_tag'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tag',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_tags'.
  $field_bases['field_tags'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tags',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'tags',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_title'.
  $field_bases['field_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_transport_consult'.
  $field_bases['field_transport_consult'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_transport_consult',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_uuid_migration'.
  $field_bases['field_uuid_migration'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_uuid_migration',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_videos'.
  $field_bases['field_videos'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_videos',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'mediafield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'media',
  );

  // Exported field_base: 'field_views_reference'.
  $field_bases['field_views_reference'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_views_reference',
    'indexes' => array(
      'view_id' => array(
        0 => 'view_id',
      ),
    ),
    'locked' => 0,
    'module' => 'viewreference',
    'settings' => array(
      'append_id' => 0,
      'arguments' => array(
        'delimiter' => '/',
        'dsv_arguments' => 0,
        'label' => '!field_label arguments',
        'php_arguments' => 0,
        'rows' => 1,
      ),
      'referenceable_tags' => array(
        'allow' => '',
        'deny' => '',
      ),
      'referenceable_views' => array(
        'archive:block' => 0,
        'archive:default' => 0,
        'archive:page' => 0,
        'backlinks:block' => 0,
        'backlinks:default' => 0,
        'backlinks:page' => 0,
        'centers_administration:admin_events' => 0,
        'centers_administration:default' => 0,
        'centers_search:default' => 'centers_search:default',
        'centers_search:page' => 'centers_search:page',
        'comments_recent:block' => 0,
        'comments_recent:default' => 0,
        'comments_recent:page' => 0,
        'entityform_type_list:default' => 0,
        'entityform_type_list:page' => 0,
        'entityforms:autofields_csv' => 0,
        'entityforms:autofields_table' => 0,
        'entityforms:autofields_xml' => 0,
        'entityforms:default' => 0,
        'entityforms:entityforms_admin_page' => 0,
        'events:default' => 0,
        'events:widget_coverflow_slider_featured_events_block' => 0,
        'events:widget_diary_events_block' => 0,
        'events_administration:admin_events' => 0,
        'events_administration:default' => 0,
        'events_search:default' => 'events_search:default',
        'events_search:page' => 'events_search:page',
        'file_list_by_date:default' => 0,
        'file_list_by_date:file_list_by_date_block' => 0,
        'first_level_distributor:attachment_invest' => 0,
        'first_level_distributor:attachment_live' => 0,
        'first_level_distributor:default' => 0,
        'first_level_distributor:first_level_distributor_invest' => 0,
        'first_level_distributor:first_level_distributor_live' => 0,
        'formalities_administration:admin_formalities' => 0,
        'formalities_administration:default' => 0,
        'frequent_questions_administration:admin_frequent_questions' => 0,
        'frequent_questions_administration:default' => 0,
        'frequent_questions_search:default' => 'frequent_questions_search:default',
        'frequent_questions_search:page' => 'frequent_questions_search:page',
        'frontpage:default' => 0,
        'frontpage:feed' => 0,
        'frontpage:page' => 0,
        'glossary:attachment' => 0,
        'glossary:default' => 0,
        'glossary:page' => 0,
        'goverment_agenda:block' => 0,
        'goverment_agenda:default' => 0,
        'goverment_agenda_search:default' => 'goverment_agenda_search:default',
        'goverment_agenda_search:page' => 'goverment_agenda_search:page',
        'landing_administration:admin_landings' => 0,
        'landing_administration:default' => 0,
        'main_information_administration:admin_main_information' => 0,
        'main_information_administration:default' => 0,
        'media_default:default' => 0,
        'media_default:media_browser_1' => 0,
        'media_default:media_browser_my_files' => 0,
        'menu_categories:children_categories_by_parent' => 0,
        'menu_categories:children_interesting_categories' => 0,
        'menu_categories:default' => 0,
        'menu_categories:enjoy_menu' => 0,
        'menu_categories:government_menu' => 0,
        'menu_categories:invest_menu' => 0,
        'menu_categories:live_menu' => 0,
        'menu_categories:menu_categories_entity_reference' => 0,
        'menu_categories:menu_parent_categories_entity_reference' => 0,
        'migration_thematics_administration:default' => 0,
        'migration_thematics_administration:migration_export_enjoy' => 0,
        'migration_thematics_administration:migration_export_government' => 0,
        'migration_thematics_administration:migration_export_invest' => 0,
        'migration_thematics_administration:migration_export_live' => 0,
        'migration_thematics_administration:migration_export_segment' => 0,
        'most_viewed_content:default' => 0,
        'most_viewed_content:most_viewed_content_admin' => 0,
        'most_viewed_content:most_viewed_enjoy' => 0,
        'most_viewed_content:most_viewed_govern' => 0,
        'most_viewed_content:most_viewed_invest' => 0,
        'most_viewed_content:most_viewed_live' => 0,
        'news:default' => 0,
        'news:widget_featured_news_block' => 0,
        'news_administration:admin_news' => 0,
        'news_administration:default' => 0,
        'news_search:default' => 'news_search:default',
        'news_search:page' => 'news_search:page',
        'newsletter_get_submission_by_id:default' => 0,
        'persons_administration:admin_persons' => 0,
        'persons_administration:default' => 0,
        'persons_search:default' => 'persons_search:default',
        'persons_search:page' => 'persons_search:page',
        'popular:block' => 0,
        'popular:block_1' => 0,
        'popular:default' => 0,
        'popular:page' => 0,
        'popular:page_1' => 0,
        'press_conference_administration:admin_press_conference' => 0,
        'press_conference_administration:default' => 0,
        'press_conferences:default' => 0,
        'press_conferences:widget_last_video_old' => 0,
        'press_conferences:widget_old_video' => 0,
        'press_conferences:widget_video_live' => 0,
        'press_conferences_search:default' => 'press_conferences_search:default',
        'press_conferences_search:page' => 'press_conferences_search:page',
        'press_releases_administration:admin_events' => 0,
        'press_releases_administration:default' => 0,
        'press_releases_search:default' => 'press_releases_search:default',
        'press_releases_search:page' => 'press_releases_search:page',
        'publications_administration:admin_publications' => 0,
        'publications_administration:default' => 0,
        'redirects:default' => 0,
        'redirects:page_admin' => 0,
        'redirects:page_user' => 0,
        'regulations_administration:admin_regulations' => 0,
        'regulations_administration:default' => 0,
        'related_content_by_terms:default' => 0,
        'related_content_by_terms:filter_content_by_terms' => 0,
        'related_content_by_terms:filter_content_by_terms_and_type' => 0,
        'related_content_by_terms:related_content_by_terms' => 0,
        'related_content_by_terms:related_content_node_thematics' => 0,
        'taxonomy_term:default' => 0,
        'taxonomy_term:feed' => 0,
        'taxonomy_term:page' => 0,
        'tracker:default' => 0,
        'tracker:page' => 0,
        'user_entityforms:default' => 0,
        'user_entityforms:entityforms_admin_page' => 0,
        'videos:block_related_videos' => 0,
        'videos:default' => 0,
        'videos:widget_last_video' => 0,
        'videos:widget_last_videos' => 0,
        'videos_administration:default' => 0,
        'videos_administration:page' => 0,
        'videos_search:default' => 'videos_search:default',
        'videos_search:page' => 'videos_search:page',
        'workbench_access_content:default' => 0,
        'workbench_current_user:block_1' => 0,
        'workbench_current_user:default' => 0,
        'workbench_edited:block_1' => 0,
        'workbench_edited:default' => 0,
        'workbench_edited:page_1' => 0,
        'workbench_moderation:default' => 0,
        'workbench_moderation:drafts_page' => 0,
        'workbench_moderation:needs_review_page' => 0,
        'workbench_recent_content:block_1' => 0,
        'workbench_recent_content:default' => 0,
        'workbench_recent_content:page_1' => 0,
      ),
      'skip_default' => 1,
      'skip_disabled' => 0,
      'skip_empty' => 0,
      'sort_views' => 1,
    ),
    'translatable' => 0,
    'type' => 'viewreference',
  );

  return $field_bases;
}
