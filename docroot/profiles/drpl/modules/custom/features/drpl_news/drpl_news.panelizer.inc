<?php
/**
 * @file
 * drpl_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function drpl_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->name = 'node:news:default:full';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol_15_85_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right_top' => NULL,
      'right' => NULL,
      'right_bottom_left' => NULL,
      'right_bottom_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9350b21e-3709-4a30-851d-e9d6cb33baf7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1dced351-f083-4346-81c4-e49d26c9a43d';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'custom_drpl_paragraphs-custom_drpl_slider_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Buscar',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1dced351-f083-4346-81c4-e49d26c9a43d';
    $display->content['new-1dced351-f083-4346-81c4-e49d26c9a43d'] = $pane;
    $display->panels['left'][0] = 'new-1dced351-f083-4346-81c4-e49d26c9a43d';
    $pane = new stdClass();
    $pane->pid = 'new-697a071e-092b-4000-9a60-f618f8c47084';
    $pane->panel = 'left';
    $pane->type = 'paragraph_panes';
    $pane->subtype = 'news_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'field_block_reference' => array(
        0 => array(
          'moddelta' => 'views:-exp-news_search-page',
        ),
      ),
      'field_block_reference_v2' => array(
        0 => array(
          'moddelta' => 'custom_drpl_paragraphs:drpl_news_dates_navigation',
        ),
      ),
      'field_label' => array(
        0 => array(
          'value' => 'Buscador de noticias',
        ),
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '697a071e-092b-4000-9a60-f618f8c47084';
    $display->content['new-697a071e-092b-4000-9a60-f618f8c47084'] = $pane;
    $display->panels['left'][1] = 'new-697a071e-092b-4000-9a60-f618f8c47084';
    $pane = new stdClass();
    $pane->pid = 'new-331402d6-c5e2-4b79-9a15-1149f096ff79';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_short_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '331402d6-c5e2-4b79-9a15-1149f096ff79';
    $display->content['new-331402d6-c5e2-4b79-9a15-1149f096ff79'] = $pane;
    $display->panels['right'][0] = 'new-331402d6-c5e2-4b79-9a15-1149f096ff79';
    $pane = new stdClass();
    $pane->pid = 'new-861401e8-925b-4cda-840d-093321b1daa0';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '861401e8-925b-4cda-840d-093321b1daa0';
    $display->content['new-861401e8-925b-4cda-840d-093321b1daa0'] = $pane;
    $display->panels['right'][1] = 'new-861401e8-925b-4cda-840d-093321b1daa0';
    $pane = new stdClass();
    $pane->pid = 'new-1c654da2-8b58-4b33-9175-582adf363014';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_paragraphs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'paragraphs_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1c654da2-8b58-4b33-9175-582adf363014';
    $display->content['new-1c654da2-8b58-4b33-9175-582adf363014'] = $pane;
    $display->panels['right'][2] = 'new-1c654da2-8b58-4b33-9175-582adf363014';
    $pane = new stdClass();
    $pane->pid = 'new-8e9c3616-ec8b-4a3a-8c1f-ac3e6cb79674';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_files';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_download_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
        'text' => 'Download [file:name]',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Archivos',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8e9c3616-ec8b-4a3a-8c1f-ac3e6cb79674';
    $display->content['new-8e9c3616-ec8b-4a3a-8c1f-ac3e6cb79674'] = $pane;
    $display->panels['right'][3] = 'new-8e9c3616-ec8b-4a3a-8c1f-ac3e6cb79674';
    $pane = new stdClass();
    $pane->pid = 'new-68eac768-8c7d-491b-8515-5fa82d4c79b0';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_formalities_reference';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
        'view_mode' => 'block_teaser',
        'links' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Trámites',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '68eac768-8c7d-491b-8515-5fa82d4c79b0';
    $display->content['new-68eac768-8c7d-491b-8515-5fa82d4c79b0'] = $pane;
    $display->panels['right'][4] = 'new-68eac768-8c7d-491b-8515-5fa82d4c79b0';
    $pane = new stdClass();
    $pane->pid = 'new-36439428-961f-4bfc-ac06-d19387a5d9b4';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '36439428-961f-4bfc-ac06-d19387a5d9b4';
    $display->content['new-36439428-961f-4bfc-ac06-d19387a5d9b4'] = $pane;
    $display->panels['right'][5] = 'new-36439428-961f-4bfc-ac06-d19387a5d9b4';
    $pane = new stdClass();
    $pane->pid = 'new-326a70d5-11da-46e3-9316-517d8a6f55da';
    $pane->panel = 'right_top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '326a70d5-11da-46e3-9316-517d8a6f55da';
    $display->content['new-326a70d5-11da-46e3-9316-517d8a6f55da'] = $pane;
    $display->panels['right_top'][0] = 'new-326a70d5-11da-46e3-9316-517d8a6f55da';
    $pane = new stdClass();
    $pane->pid = 'new-7a344375-352e-4a50-946a-db6b13771bff';
    $pane->panel = 'right_top';
    $pane->type = 'block';
    $pane->subtype = 'open_readspeaker-open_readspeaker_ui';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7a344375-352e-4a50-946a-db6b13771bff';
    $display->content['new-7a344375-352e-4a50-946a-db6b13771bff'] = $pane;
    $display->panels['right_top'][1] = 'new-7a344375-352e-4a50-946a-db6b13771bff';
    $pane = new stdClass();
    $pane->pid = 'new-741695f9-15bf-41b2-a420-59b6f5494e4c';
    $pane->panel = 'right_top';
    $pane->type = 'block';
    $pane->subtype = 'sharethis-sharethis_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '741695f9-15bf-41b2-a420-59b6f5494e4c';
    $display->content['new-741695f9-15bf-41b2-a420-59b6f5494e4c'] = $pane;
    $display->panels['right_top'][2] = 'new-741695f9-15bf-41b2-a420-59b6f5494e4c';
    $pane = new stdClass();
    $pane->pid = 'new-16a4930c-13a9-469a-b398-0457b72f710b';
    $pane->panel = 'top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16a4930c-13a9-469a-b398-0457b72f710b';
    $display->content['new-16a4930c-13a9-469a-b398-0457b72f710b'] = $pane;
    $display->panels['top'][0] = 'new-16a4930c-13a9-469a-b398-0457b72f710b';
    $pane = new stdClass();
    $pane->pid = 'new-c1a6d575-d97d-4233-b0b7-70e2c7dd584d';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_images';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'owlcarousel_formatter',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
        'image_style' => 'header_featured_image',
        'settings_group' => 'owlcarousel_settings_slideshow-header',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c1a6d575-d97d-4233-b0b7-70e2c7dd584d';
    $display->content['new-c1a6d575-d97d-4233-b0b7-70e2c7dd584d'] = $pane;
    $display->panels['top'][1] = 'new-c1a6d575-d97d-4233-b0b7-70e2c7dd584d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:news:default:full'] = $panelizer;

  return $export;
}
