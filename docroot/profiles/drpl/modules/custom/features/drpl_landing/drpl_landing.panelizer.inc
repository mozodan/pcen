<?php
/**
 * @file
 * drpl_landing.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function drpl_landing_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'landing';
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->name = 'node:landing:default:full';
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
  $display->uuid = '799c8e65-a5ff-4654-91de-ef89c08a3e95';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f449b222-3670-4dd2-b13c-1afbc979ad73';
    $pane->panel = 'content';
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
    $pane->uuid = 'f449b222-3670-4dd2-b13c-1afbc979ad73';
    $display->content['new-f449b222-3670-4dd2-b13c-1afbc979ad73'] = $pane;
    $display->panels['content'][0] = 'new-f449b222-3670-4dd2-b13c-1afbc979ad73';
    $pane = new stdClass();
    $pane->pid = 'new-1784d5ea-e5bd-469f-8e3e-4edbaf88dc2b';
    $pane->panel = 'content';
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
      'formatter_settings' => array(),
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
    $pane->uuid = '1784d5ea-e5bd-469f-8e3e-4edbaf88dc2b';
    $display->content['new-1784d5ea-e5bd-469f-8e3e-4edbaf88dc2b'] = $pane;
    $display->panels['content'][1] = 'new-1784d5ea-e5bd-469f-8e3e-4edbaf88dc2b';
    $pane = new stdClass();
    $pane->pid = 'new-f0bb192d-4002-487e-ae5c-e7c17cbbc157';
    $pane->panel = 'content';
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
    $pane->uuid = 'f0bb192d-4002-487e-ae5c-e7c17cbbc157';
    $display->content['new-f0bb192d-4002-487e-ae5c-e7c17cbbc157'] = $pane;
    $display->panels['content'][2] = 'new-f0bb192d-4002-487e-ae5c-e7c17cbbc157';
    $pane = new stdClass();
    $pane->pid = 'new-c0bc1772-ebbe-407c-896d-3873351f8aea';
    $pane->panel = 'top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
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
    $pane->uuid = 'c0bc1772-ebbe-407c-896d-3873351f8aea';
    $display->content['new-c0bc1772-ebbe-407c-896d-3873351f8aea'] = $pane;
    $display->panels['top'][0] = 'new-c0bc1772-ebbe-407c-896d-3873351f8aea';
    $pane = new stdClass();
    $pane->pid = 'new-b673787f-70b3-4928-9bac-0f9a139dfa8f';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_paragraphs_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'paragraphs_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b673787f-70b3-4928-9bac-0f9a139dfa8f';
    $display->content['new-b673787f-70b3-4928-9bac-0f9a139dfa8f'] = $pane;
    $display->panels['top'][1] = 'new-b673787f-70b3-4928-9bac-0f9a139dfa8f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:landing:default:full'] = $panelizer;

  return $export;
}
