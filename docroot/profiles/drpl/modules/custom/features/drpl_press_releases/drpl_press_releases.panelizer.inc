<?php
/**
 * @file
 * drpl_press_releases.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function drpl_press_releases_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'press_releases';
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->name = 'node:press_releases:default:full';
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
  $display->uuid = 'd374ef83-ec8d-4009-8660-07eef098c412';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-59a0877d-cf39-4679-8edc-83578a6821e2';
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
    $pane->uuid = '59a0877d-cf39-4679-8edc-83578a6821e2';
    $display->content['new-59a0877d-cf39-4679-8edc-83578a6821e2'] = $pane;
    $display->panels['left'][0] = 'new-59a0877d-cf39-4679-8edc-83578a6821e2';
    $pane = new stdClass();
    $pane->pid = 'new-7349b2b8-1d4b-4314-81bb-d7f96207460b';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-press_releases_search-page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Buscar',
      'override_title_heading' => 'div',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7349b2b8-1d4b-4314-81bb-d7f96207460b';
    $display->content['new-7349b2b8-1d4b-4314-81bb-d7f96207460b'] = $pane;
    $display->panels['left'][1] = 'new-7349b2b8-1d4b-4314-81bb-d7f96207460b';
    $pane = new stdClass();
    $pane->pid = 'new-5b319d99-e97e-4fb4-89f1-922d73cb8cd2';
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
    $pane->uuid = '5b319d99-e97e-4fb4-89f1-922d73cb8cd2';
    $display->content['new-5b319d99-e97e-4fb4-89f1-922d73cb8cd2'] = $pane;
    $display->panels['right'][0] = 'new-5b319d99-e97e-4fb4-89f1-922d73cb8cd2';
    $pane = new stdClass();
    $pane->pid = 'new-5ff03192-22d1-48f0-a8f8-81f9b0d1d127';
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
    $pane->uuid = '5ff03192-22d1-48f0-a8f8-81f9b0d1d127';
    $display->content['new-5ff03192-22d1-48f0-a8f8-81f9b0d1d127'] = $pane;
    $display->panels['right'][1] = 'new-5ff03192-22d1-48f0-a8f8-81f9b0d1d127';
    $pane = new stdClass();
    $pane->pid = 'new-859bcf1c-ab3b-4360-b132-3a52f5af2baf';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_paragraphs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '859bcf1c-ab3b-4360-b132-3a52f5af2baf';
    $display->content['new-859bcf1c-ab3b-4360-b132-3a52f5af2baf'] = $pane;
    $display->panels['right'][2] = 'new-859bcf1c-ab3b-4360-b132-3a52f5af2baf';
    $pane = new stdClass();
    $pane->pid = 'new-57cb9a3b-8da3-4728-a0bd-3a709c411fa0';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_audio';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '57cb9a3b-8da3-4728-a0bd-3a709c411fa0';
    $display->content['new-57cb9a3b-8da3-4728-a0bd-3a709c411fa0'] = $pane;
    $display->panels['right'][3] = 'new-57cb9a3b-8da3-4728-a0bd-3a709c411fa0';
    $pane = new stdClass();
    $pane->pid = 'new-7e879998-4d67-42b8-8cef-48d1e503f46b';
    $pane->panel = 'right_bottom_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_files';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->uuid = '7e879998-4d67-42b8-8cef-48d1e503f46b';
    $display->content['new-7e879998-4d67-42b8-8cef-48d1e503f46b'] = $pane;
    $display->panels['right_bottom_right'][0] = 'new-7e879998-4d67-42b8-8cef-48d1e503f46b';
    $pane = new stdClass();
    $pane->pid = 'new-bc901866-48fa-4887-8cfd-9a8c15532bcd';
    $pane->panel = 'right_bottom_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_counselings';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'i18n_taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Organismo responsable',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bc901866-48fa-4887-8cfd-9a8c15532bcd';
    $display->content['new-bc901866-48fa-4887-8cfd-9a8c15532bcd'] = $pane;
    $display->panels['right_bottom_right'][1] = 'new-bc901866-48fa-4887-8cfd-9a8c15532bcd';
    $pane = new stdClass();
    $pane->pid = 'new-dd2e513c-2ad3-43c2-8bcf-f37ad57afa61';
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
    $pane->uuid = 'dd2e513c-2ad3-43c2-8bcf-f37ad57afa61';
    $display->content['new-dd2e513c-2ad3-43c2-8bcf-f37ad57afa61'] = $pane;
    $display->panels['right_top'][0] = 'new-dd2e513c-2ad3-43c2-8bcf-f37ad57afa61';
    $pane = new stdClass();
    $pane->pid = 'new-4c55db71-a0cd-4de0-bda6-37fbaeb37283';
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
    $pane->uuid = '4c55db71-a0cd-4de0-bda6-37fbaeb37283';
    $display->content['new-4c55db71-a0cd-4de0-bda6-37fbaeb37283'] = $pane;
    $display->panels['right_top'][1] = 'new-4c55db71-a0cd-4de0-bda6-37fbaeb37283';
    $pane = new stdClass();
    $pane->pid = 'new-e2b31189-b781-4dd2-9ef7-1467b737029c';
    $pane->panel = 'right_top';
    $pane->type = 'block';
    $pane->subtype = 'sharethis-sharethis_block';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e2b31189-b781-4dd2-9ef7-1467b737029c';
    $display->content['new-e2b31189-b781-4dd2-9ef7-1467b737029c'] = $pane;
    $display->panels['right_top'][2] = 'new-e2b31189-b781-4dd2-9ef7-1467b737029c';
    $pane = new stdClass();
    $pane->pid = 'new-7787b816-527a-4762-85a8-920e153ef9eb';
    $pane->panel = 'right_top';
    $pane->type = 'block';
    $pane->subtype = 'open_readspeaker-open_readspeaker_ui';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7787b816-527a-4762-85a8-920e153ef9eb';
    $display->content['new-7787b816-527a-4762-85a8-920e153ef9eb'] = $pane;
    $display->panels['right_top'][3] = 'new-7787b816-527a-4762-85a8-920e153ef9eb';
    $pane = new stdClass();
    $pane->pid = 'new-95e8cb5f-9996-4833-8ebc-e4cfc42334aa';
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
    $pane->uuid = '95e8cb5f-9996-4833-8ebc-e4cfc42334aa';
    $display->content['new-95e8cb5f-9996-4833-8ebc-e4cfc42334aa'] = $pane;
    $display->panels['top'][0] = 'new-95e8cb5f-9996-4833-8ebc-e4cfc42334aa';
    $pane = new stdClass();
    $pane->pid = 'new-c7edd298-39a0-466f-acec-b9efa9aa72de';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_images';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->uuid = 'c7edd298-39a0-466f-acec-b9efa9aa72de';
    $display->content['new-c7edd298-39a0-466f-acec-b9efa9aa72de'] = $pane;
    $display->panels['top'][1] = 'new-c7edd298-39a0-466f-acec-b9efa9aa72de';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:press_releases:default:full'] = $panelizer;

  return $export;
}
