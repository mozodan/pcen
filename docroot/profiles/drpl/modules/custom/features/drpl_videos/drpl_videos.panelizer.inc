<?php
/**
 * @file
 * drpl_videos.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function drpl_videos_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Predeterminado';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'videos';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:videos:default';
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
      'top' => NULL,
      'content' => NULL,
      'left' => NULL,
      'right_top' => NULL,
      'right' => NULL,
      'right_bottom_left' => NULL,
      'right_bottom_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cabee1be-7bdc-445b-8e65-892aad4ef84c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1321ef2f-fd37-4d7b-96b0-587a044c7bab';
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
    $pane->uuid = '1321ef2f-fd37-4d7b-96b0-587a044c7bab';
    $display->content['new-1321ef2f-fd37-4d7b-96b0-587a044c7bab'] = $pane;
    $display->panels['left'][0] = 'new-1321ef2f-fd37-4d7b-96b0-587a044c7bab';
    $pane = new stdClass();
    $pane->pid = 'new-9a0cc415-f183-46ac-9535-3f6e918a2ff8';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-videos_search-page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9a0cc415-f183-46ac-9535-3f6e918a2ff8';
    $display->content['new-9a0cc415-f183-46ac-9535-3f6e918a2ff8'] = $pane;
    $display->panels['left'][1] = 'new-9a0cc415-f183-46ac-9535-3f6e918a2ff8';
    $pane = new stdClass();
    $pane->pid = 'new-19dca77c-3d15-41ef-9e82-16520a6bbc84';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_videos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'media',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
        'file_view_mode' => 'default',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '19dca77c-3d15-41ef-9e82-16520a6bbc84';
    $display->content['new-19dca77c-3d15-41ef-9e82-16520a6bbc84'] = $pane;
    $display->panels['right'][0] = 'new-19dca77c-3d15-41ef-9e82-16520a6bbc84';
    $pane = new stdClass();
    $pane->pid = 'new-e14d6204-86d9-4c1c-9449-17f0bb376562';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_short_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e14d6204-86d9-4c1c-9449-17f0bb376562';
    $display->content['new-e14d6204-86d9-4c1c-9449-17f0bb376562'] = $pane;
    $display->panels['right'][1] = 'new-e14d6204-86d9-4c1c-9449-17f0bb376562';
    $pane = new stdClass();
    $pane->pid = 'new-c08e43d7-6398-4eeb-accd-f84e7653734e';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c08e43d7-6398-4eeb-accd-f84e7653734e';
    $display->content['new-c08e43d7-6398-4eeb-accd-f84e7653734e'] = $pane;
    $display->panels['right'][2] = 'new-c08e43d7-6398-4eeb-accd-f84e7653734e';
    $pane = new stdClass();
    $pane->pid = 'new-3fc0c944-a094-4a17-9093-55a093fdac7a';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'custom_drpl-custom_drpl_related_videos';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3fc0c944-a094-4a17-9093-55a093fdac7a';
    $display->content['new-3fc0c944-a094-4a17-9093-55a093fdac7a'] = $pane;
    $display->panels['right'][3] = 'new-3fc0c944-a094-4a17-9093-55a093fdac7a';
    $pane = new stdClass();
    $pane->pid = 'new-969e74bd-cbd0-4661-882e-089ea5af329f';
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
    $pane->uuid = '969e74bd-cbd0-4661-882e-089ea5af329f';
    $display->content['new-969e74bd-cbd0-4661-882e-089ea5af329f'] = $pane;
    $display->panels['right_top'][0] = 'new-969e74bd-cbd0-4661-882e-089ea5af329f';
    $pane = new stdClass();
    $pane->pid = 'new-27925a14-4dbd-4a41-bc32-df8848dd346b';
    $pane->panel = 'right_top';
    $pane->type = 'node_updated';
    $pane->subtype = 'node_updated';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'day_month_year',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '27925a14-4dbd-4a41-bc32-df8848dd346b';
    $display->content['new-27925a14-4dbd-4a41-bc32-df8848dd346b'] = $pane;
    $display->panels['right_top'][1] = 'new-27925a14-4dbd-4a41-bc32-df8848dd346b';
    $pane = new stdClass();
    $pane->pid = 'new-e2a28e82-c68c-47a2-ae6a-487a9a3a4472';
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
    $pane->uuid = 'e2a28e82-c68c-47a2-ae6a-487a9a3a4472';
    $display->content['new-e2a28e82-c68c-47a2-ae6a-487a9a3a4472'] = $pane;
    $display->panels['right_top'][2] = 'new-e2a28e82-c68c-47a2-ae6a-487a9a3a4472';
    $pane = new stdClass();
    $pane->pid = 'new-6c0bf4f0-6b1d-4107-ad7f-e255e5ef618b';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6c0bf4f0-6b1d-4107-ad7f-e255e5ef618b';
    $display->content['new-6c0bf4f0-6b1d-4107-ad7f-e255e5ef618b'] = $pane;
    $display->panels['right_top'][3] = 'new-6c0bf4f0-6b1d-4107-ad7f-e255e5ef618b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-19dca77c-3d15-41ef-9e82-16520a6bbc84';
  $panelizer->display = $display;
  $export['node:videos:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Predeterminado';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'videos';
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->name = 'node:videos:default:full';
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
  $display->layout = 'one_column_top_area';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f1ea818c-aad1-42f2-9ee9-b2dda97326bc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-234095b7-8c4c-4f09-b16d-e0059d99de2e';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_videos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'media',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
        'file_view_mode' => 'default',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '234095b7-8c4c-4f09-b16d-e0059d99de2e';
    $display->content['new-234095b7-8c4c-4f09-b16d-e0059d99de2e'] = $pane;
    $display->panels['content'][0] = 'new-234095b7-8c4c-4f09-b16d-e0059d99de2e';
    $pane = new stdClass();
    $pane->pid = 'new-e3a546d2-25b4-455f-8467-6cee0b544ecb';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e3a546d2-25b4-455f-8467-6cee0b544ecb';
    $display->content['new-e3a546d2-25b4-455f-8467-6cee0b544ecb'] = $pane;
    $display->panels['content'][1] = 'new-e3a546d2-25b4-455f-8467-6cee0b544ecb';
    $pane = new stdClass();
    $pane->pid = 'new-58ad958d-9613-47b7-99fc-ec06ba60ae89';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_videos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '4',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'old_video',
        'links' => 0,
        'conditions' => array(
          0 => array(
            'condition' => '',
            'configuration' => array(
              'target' => 'entityqueue_subqueue',
              'string' => '',
            ),
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
      'style' => 'naked',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '58ad958d-9613-47b7-99fc-ec06ba60ae89';
    $display->content['new-58ad958d-9613-47b7-99fc-ec06ba60ae89'] = $pane;
    $display->panels['content'][2] = 'new-58ad958d-9613-47b7-99fc-ec06ba60ae89';
    $pane = new stdClass();
    $pane->pid = 'new-73aabe59-6423-4404-b89d-165ecf5452cd';
    $pane->panel = 'content';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:videos_related_videos_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'old_video',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '73aabe59-6423-4404-b89d-165ecf5452cd';
    $display->content['new-73aabe59-6423-4404-b89d-165ecf5452cd'] = $pane;
    $display->panels['content'][3] = 'new-73aabe59-6423-4404-b89d-165ecf5452cd';
    $pane = new stdClass();
    $pane->pid = 'new-581f1db4-2bf7-4b62-a72a-c27b5e77e8df';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'easy_breadcrumb-easy_breadcrumb';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '581f1db4-2bf7-4b62-a72a-c27b5e77e8df';
    $display->content['new-581f1db4-2bf7-4b62-a72a-c27b5e77e8df'] = $pane;
    $display->panels['top'][0] = 'new-581f1db4-2bf7-4b62-a72a-c27b5e77e8df';
    $pane = new stdClass();
    $pane->pid = 'new-f210ba4c-87a6-4321-a3cd-85de7f6055a3';
    $pane->panel = 'top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'none',
      'id' => '',
      'class' => '',
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
    $pane->uuid = 'f210ba4c-87a6-4321-a3cd-85de7f6055a3';
    $display->content['new-f210ba4c-87a6-4321-a3cd-85de7f6055a3'] = $pane;
    $display->panels['top'][1] = 'new-f210ba4c-87a6-4321-a3cd-85de7f6055a3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-234095b7-8c4c-4f09-b16d-e0059d99de2e';
  $panelizer->display = $display;
  $export['node:videos:default:full'] = $panelizer;

  return $export;
}
