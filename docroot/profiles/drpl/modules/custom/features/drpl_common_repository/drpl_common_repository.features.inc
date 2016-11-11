<?php
/**
 * @file
 * drpl_common_repository.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drpl_common_repository_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "backup_migrate" && $api == "backup_migrate_exportables") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_entityqueue_api().
 */
function drpl_common_repository_entityqueue_api($module = NULL, $api = NULL) {
  if ($module == "entityqueue" && $api == "entityqueue_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drpl_common_repository_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function drpl_common_repository_default_entityform_type() {
  $items = array();
  $items['newsletter'] = entity_import('entityform_type', '{
    "type" : "newsletter",
    "label" : "Newsletter",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "Subscribirse",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3", "4" : "4", "5" : "5" },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" },
      "enable_block" : 1
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_image_default_styles().
 */
function drpl_common_repository_image_default_styles() {
  $styles = array();

  // Exported image style: block_teaser_image.
  $styles['block_teaser_image'] = array(
    'label' => 'Block teaser image',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: block_teaser_image_horizontal.
  $styles['block_teaser_image_horizontal'] = array(
    'label' => 'Block teaser image horizontal',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 525,
          'height' => 285,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_featured_image.
  $styles['header_featured_image'] = array(
    'label' => 'Header featured image',
    'effects' => array(
      3 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1170,
          'height' => 300,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'header_featured_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: header_featured_image_version_2.
  $styles['header_featured_image_version_2'] = array(
    'label' => 'Header featured image - version 2',
    'effects' => array(
      8 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1170,
          'height' => 550,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'header_featured_image_version_2',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: horizontal.
  $styles['horizontal'] = array(
    'label' => 'Horizontal',
    'effects' => array(
      9 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1170,
          'height' => 300,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'horizontal',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: slider_coverflow_image.
  $styles['slider_coverflow_image'] = array(
    'label' => 'Slider coverflow image',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 480,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slideshow.
  $styles['slideshow'] = array(
    'label' => 'Slideshow',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_small.
  $styles['square_small'] = array(
    'label' => 'Square small',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_search_api_index().
 */
function drpl_common_repository_default_search_api_index() {
  $items = array();
  $items['drpl_global_content_type'] = entity_import('search_api_index', '{
    "name" : "DRPL - Global content type",
    "machine_name" : "drpl_global_content_type",
    "description" : null,
    "server" : "drpl",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [
          "main_information",
          "events",
          "landing",
          "regulations",
          "news",
          "publications",
          "formalities"
        ]
      },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "body:value" : { "type" : "text" },
        "field_paragraphs" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "paragraphs_item" },
        "field_paragraphs_header" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "paragraphs_item" },
        "field_short_description" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "panelizer" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_metatag_alter_callback" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_short_description" : true,
              "field_paragraphs" : true,
              "field_paragraphs_header" : true,
              "body:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "field_short_description" : true, "body:value" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 1,
          "weight" : "15",
          "settings" : { "fields" : {
              "title" : true,
              "field_short_description" : true,
              "field_paragraphs" : true,
              "field_paragraphs_header" : true,
              "body:value" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "field_short_description" : true, "body:value" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "field_short_description" : true, "body:value" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_page().
 */
function drpl_common_repository_default_search_api_page() {
  $items = array();
  $items['drpl_global_content_type_page'] = entity_import('search_api_page', '{
    "index_id" : "drpl_global_content_type",
    "path" : "busqueda",
    "name" : "DRPL - Global content type page",
    "machine_name" : "drpl_global_content_type_page",
    "description" : "",
    "options" : {
      "mode" : "terms",
      "fields" : {
        "body:value" : "body:value",
        "field_short_description" : "field_short_description",
        "title" : "title"
      },
      "per_page" : "20",
      "result_page_search_form" : 1,
      "get_per_page" : 0,
      "view_mode" : "teaser",
      "language_filter" : { "default" : "default" },
      "empty_behavior" : ""
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function drpl_common_repository_default_search_api_server() {
  $items = array();
  $items['drpl'] = entity_import('search_api_server', '{
    "name" : "DRPL",
    "machine_name" : "drpl",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 1,
      "indexes" : {
        "default_node_index" : {
          "type" : {
            "table" : "search_api_db_default_node_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "promote" : {
            "table" : "search_api_db_default_node_index",
            "column" : "promote",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "sticky" : {
            "table" : "search_api_db_default_node_index",
            "column" : "sticky",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_default_node_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_default_node_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_default_node_index",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "comment_count" : {
            "table" : "search_api_db_default_node_index",
            "column" : "comment_count",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_default_node_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          }
        },
        "drpl_global_content_type" : {
          "title" : {
            "table" : "search_api_db_drpl_global_content_type_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_short_description" : {
            "table" : "search_api_db_drpl_global_content_type_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_paragraphs" : {
            "table" : "search_api_db_drpl_global_content_type_field_paragraphs",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_paragraphs_header" : {
            "table" : "search_api_db_drpl_global_content_type_field_paragraphs_header",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_drpl_global_content_type",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_drpl_global_content_type_text",
            "type" : "text",
            "boost" : "1.0"
          }
        },
        "frequent_questions" : {
          "type" : {
            "table" : "search_api_db_frequent_questions",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_frequent_questions_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_enjoy_category" : {
            "table" : "search_api_db_frequent_questions_field_enjoy_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_invest_category" : {
            "table" : "search_api_db_frequent_questions_field_invest_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_live_category" : {
            "table" : "search_api_db_frequent_questions_field_live_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_open_government" : {
            "table" : "search_api_db_frequent_questions_field_open_government",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_related_thematic" : {
            "table" : "search_api_db_frequent_questions_field_related_thematic",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_frequent_questions",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_frequent_questions_text",
            "type" : "text",
            "boost" : "1.0"
          }
        },
        "news" : {
          "title" : { "table" : "search_api_db_news_text", "type" : "text", "boost" : "1.0" },
          "field_enjoy_category" : {
            "table" : "search_api_db_news_field_enjoy_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_invest_category" : {
            "table" : "search_api_db_news_field_invest_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_live_category" : {
            "table" : "search_api_db_news_field_live_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_short_description" : { "table" : "search_api_db_news_text", "type" : "text", "boost" : "1.0" },
          "field_open_government" : {
            "table" : "search_api_db_news_field_open_government",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_related_thematic" : {
            "table" : "search_api_db_news_field_related_thematic",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_news",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : { "table" : "search_api_db_news_text", "type" : "text", "boost" : "1.0" },
          "field_date:value" : {
            "table" : "search_api_db_news",
            "column" : "field_date_value",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_date:value2" : {
            "table" : "search_api_db_news",
            "column" : "field_date_value2",
            "type" : "date",
            "boost" : "1.0"
          }
        },
        "press_releases" : {
          "title" : {
            "table" : "search_api_db_press_releases_text_1",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_short_description" : {
            "table" : "search_api_db_press_releases_text_1",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_press_releases",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_press_releases_text_1",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_date:value" : {
            "table" : "search_api_db_press_releases",
            "column" : "field_date_value",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_date:value2" : {
            "table" : "search_api_db_press_releases",
            "column" : "field_date_value2",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_counselings:name" : {
            "table" : "search_api_db_press_releases_text_1",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          }
        },
        "press_conferences" : {
          "search_api_language" : {
            "table" : "search_api_db_press_conferences",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_date:value" : {
            "table" : "search_api_db_press_conferences",
            "column" : "field_date_value",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_date:value2" : {
            "table" : "search_api_db_press_conferences",
            "column" : "field_date_value2",
            "type" : "date",
            "boost" : "1.0"
          }
        },
        "events" : {
          "title" : {
            "table" : "search_api_db_events_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_categories" : {
            "table" : "search_api_db_events",
            "column" : "field_categories",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_enjoy_category" : {
            "table" : "search_api_db_events_field_enjoy_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_invest_category" : {
            "table" : "search_api_db_events_field_invest_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_live_category" : {
            "table" : "search_api_db_events_field_live_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_short_description" : {
            "table" : "search_api_db_events_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_open_government" : {
            "table" : "search_api_db_events_field_open_government",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_related_thematic" : {
            "table" : "search_api_db_events_field_related_thematic",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_event_type" : {
            "table" : "search_api_db_events",
            "column" : "field_event_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_events",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_events_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_date:value" : {
            "table" : "search_api_db_events",
            "column" : "field_date_value",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_date:value2" : {
            "table" : "search_api_db_events",
            "column" : "field_date_value2",
            "type" : "date",
            "boost" : "1.0"
          }
        },
        "persons" : {
          "title" : {
            "table" : "search_api_db_persons_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_persons",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_persons_text",
            "type" : "text",
            "boost" : "1.0"
          }
        },
        "videos" : {
          "title" : {
            "table" : "search_api_db_videos_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_categories" : {
            "table" : "search_api_db_videos",
            "column" : "field_categories",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_enjoy_category" : {
            "table" : "search_api_db_videos_field_enjoy_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_invest_category" : {
            "table" : "search_api_db_videos_field_invest_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_live_category" : {
            "table" : "search_api_db_videos_field_live_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_short_description" : {
            "table" : "search_api_db_videos_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_open_government" : {
            "table" : "search_api_db_videos_field_open_government",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_related_thematic" : {
            "table" : "search_api_db_videos_field_related_thematic",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_event_type" : {
            "table" : "search_api_db_videos",
            "column" : "field_event_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_videos",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_videos_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_date:value" : {
            "table" : "search_api_db_videos",
            "column" : "field_date_value",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_date:value2" : {
            "table" : "search_api_db_videos",
            "column" : "field_date_value2",
            "type" : "date",
            "boost" : "1.0"
          }
        },
        "centers" : {
          "title" : {
            "table" : "search_api_db_centers_text_1",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_short_description" : {
            "table" : "search_api_db_centers_text_1",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_email" : {
            "table" : "search_api_db_centers_text_1",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_center_type" : {
            "table" : "search_api_db_centers_text_1",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_district" : {
            "table" : "search_api_db_centers_text_1",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_postal_code" : {
            "table" : "search_api_db_centers_text_1",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_centers",
            "column" : "search_api_language_1",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_centers_text_1",
            "type" : "text",
            "boost" : "1.0"
          }
        },
        "goverment_agenda" : {
          "title" : {
            "table" : "search_api_db_goverment_agenda_text_2",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_short_description" : {
            "table" : "search_api_db_goverment_agenda_text_2",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_place" : {
            "table" : "search_api_db_goverment_agenda_text_2",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_goverment_agenda",
            "column" : "search_api_language_2",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_goverment_agenda_text_2",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_date:value" : {
            "table" : "search_api_db_goverment_agenda",
            "column" : "field_date_value_2",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_date:value2" : {
            "table" : "search_api_db_goverment_agenda",
            "column" : "field_date_value2_2",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_counselings:name" : {
            "table" : "search_api_db_goverment_agenda_text_2",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
