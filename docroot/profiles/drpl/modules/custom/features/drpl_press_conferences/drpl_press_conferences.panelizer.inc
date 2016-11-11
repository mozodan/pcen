<?php
/**
 * @file
 * drpl_press_conferences.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function drpl_press_conferences_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'press_conferences';
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->name = 'node:press_conferences:default:full';
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
  $display->uuid = '7990ab0d-08b6-4d63-b897-96271766606b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bedd2e1d-aff8-4021-a4c5-75130431fcf0';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-cd0bf7c17eb05b804aded039f5b99f1d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Histórico de retransmisiones',
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
    $pane->uuid = 'bedd2e1d-aff8-4021-a4c5-75130431fcf0';
    $display->content['new-bedd2e1d-aff8-4021-a4c5-75130431fcf0'] = $pane;
    $display->panels['left'][0] = 'new-bedd2e1d-aff8-4021-a4c5-75130431fcf0';
    $pane = new stdClass();
    $pane->pid = 'new-a0792bcf-4ada-4996-8f86-1981f7121b8c';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a0792bcf-4ada-4996-8f86-1981f7121b8c';
    $display->content['new-a0792bcf-4ada-4996-8f86-1981f7121b8c'] = $pane;
    $display->panels['right'][0] = 'new-a0792bcf-4ada-4996-8f86-1981f7121b8c';
    $pane = new stdClass();
    $pane->pid = 'new-30d7ae46-1578-4717-9997-897d2d4e3f87';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_videos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->uuid = '30d7ae46-1578-4717-9997-897d2d4e3f87';
    $display->content['new-30d7ae46-1578-4717-9997-897d2d4e3f87'] = $pane;
    $display->panels['right'][1] = 'new-30d7ae46-1578-4717-9997-897d2d4e3f87';
    $pane = new stdClass();
    $pane->pid = 'new-c20a9314-930a-486f-b0ea-d98877a33695';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-ffbe2404b41ccfd65e571cf8327019fd';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Últimas retransmisiones',
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
    $pane->uuid = 'c20a9314-930a-486f-b0ea-d98877a33695';
    $display->content['new-c20a9314-930a-486f-b0ea-d98877a33695'] = $pane;
    $display->panels['right'][2] = 'new-c20a9314-930a-486f-b0ea-d98877a33695';
    $pane = new stdClass();
    $pane->pid = 'new-5b8093f1-dbd2-4834-8af6-fe5887cf6b86';
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
    $pane->uuid = '5b8093f1-dbd2-4834-8af6-fe5887cf6b86';
    $display->content['new-5b8093f1-dbd2-4834-8af6-fe5887cf6b86'] = $pane;
    $display->panels['right_top'][0] = 'new-5b8093f1-dbd2-4834-8af6-fe5887cf6b86';
    $pane = new stdClass();
    $pane->pid = 'new-bc3f27ef-faf6-41fd-81fc-2063d23cd507';
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
    $pane->uuid = 'bc3f27ef-faf6-41fd-81fc-2063d23cd507';
    $display->content['new-bc3f27ef-faf6-41fd-81fc-2063d23cd507'] = $pane;
    $display->panels['right_top'][1] = 'new-bc3f27ef-faf6-41fd-81fc-2063d23cd507';
    $pane = new stdClass();
    $pane->pid = 'new-8e8c8bf1-b82e-4056-a0db-87fd2a6b42ff';
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
    $pane->uuid = '8e8c8bf1-b82e-4056-a0db-87fd2a6b42ff';
    $display->content['new-8e8c8bf1-b82e-4056-a0db-87fd2a6b42ff'] = $pane;
    $display->panels['right_top'][2] = 'new-8e8c8bf1-b82e-4056-a0db-87fd2a6b42ff';
    $pane = new stdClass();
    $pane->pid = 'new-0593a0a4-daba-41ba-8ac4-19fc6b339d3e';
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
    $pane->uuid = '0593a0a4-daba-41ba-8ac4-19fc6b339d3e';
    $display->content['new-0593a0a4-daba-41ba-8ac4-19fc6b339d3e'] = $pane;
    $display->panels['right_top'][3] = 'new-0593a0a4-daba-41ba-8ac4-19fc6b339d3e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:press_conferences:default:full'] = $panelizer;

  return $export;
}
