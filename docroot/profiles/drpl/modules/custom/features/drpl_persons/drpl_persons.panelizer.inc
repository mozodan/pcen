<?php
/**
 * @file
 * drpl_persons.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function drpl_persons_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'persons';
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->name = 'node:persons:default:full';
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
  $display->uuid = '89a92f6c-0558-4350-a187-44bbb6bc9061';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-64a47895-b40f-435b-a474-b5384e1d5378';
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
    $pane->uuid = '64a47895-b40f-435b-a474-b5384e1d5378';
    $display->content['new-64a47895-b40f-435b-a474-b5384e1d5378'] = $pane;
    $display->panels['left'][0] = 'new-64a47895-b40f-435b-a474-b5384e1d5378';
    $pane = new stdClass();
    $pane->pid = 'new-f37ccd71-3ebe-4ce1-bf73-f8ed44fd0177';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-persons_search-page';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f37ccd71-3ebe-4ce1-bf73-f8ed44fd0177';
    $display->content['new-f37ccd71-3ebe-4ce1-bf73-f8ed44fd0177'] = $pane;
    $display->panels['left'][1] = 'new-f37ccd71-3ebe-4ce1-bf73-f8ed44fd0177';
    $pane = new stdClass();
    $pane->pid = 'new-abbd6574-b031-4286-834c-89d972ac54c6';
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
    $pane->uuid = 'abbd6574-b031-4286-834c-89d972ac54c6';
    $display->content['new-abbd6574-b031-4286-834c-89d972ac54c6'] = $pane;
    $display->panels['right'][0] = 'new-abbd6574-b031-4286-834c-89d972ac54c6';
    $pane = new stdClass();
    $pane->pid = 'new-6d0598cf-e50b-4c61-b559-72bd796c4315';
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
    $pane->uuid = '6d0598cf-e50b-4c61-b559-72bd796c4315';
    $display->content['new-6d0598cf-e50b-4c61-b559-72bd796c4315'] = $pane;
    $display->panels['right'][1] = 'new-6d0598cf-e50b-4c61-b559-72bd796c4315';
    $pane = new stdClass();
    $pane->pid = 'new-2f0389ff-2775-49ec-8695-f90824a600e0';
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
    $pane->uuid = '2f0389ff-2775-49ec-8695-f90824a600e0';
    $display->content['new-2f0389ff-2775-49ec-8695-f90824a600e0'] = $pane;
    $display->panels['right_top'][0] = 'new-2f0389ff-2775-49ec-8695-f90824a600e0';
    $pane = new stdClass();
    $pane->pid = 'new-6a7120ba-b3b9-42d7-80d0-e605a77f4a78';
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
    $pane->uuid = '6a7120ba-b3b9-42d7-80d0-e605a77f4a78';
    $display->content['new-6a7120ba-b3b9-42d7-80d0-e605a77f4a78'] = $pane;
    $display->panels['right_top'][1] = 'new-6a7120ba-b3b9-42d7-80d0-e605a77f4a78';
    $pane = new stdClass();
    $pane->pid = 'new-abde08cd-c2ee-4b51-8140-5020bcc7f15f';
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
    $pane->uuid = 'abde08cd-c2ee-4b51-8140-5020bcc7f15f';
    $display->content['new-abde08cd-c2ee-4b51-8140-5020bcc7f15f'] = $pane;
    $display->panels['right_top'][2] = 'new-abde08cd-c2ee-4b51-8140-5020bcc7f15f';
    $pane = new stdClass();
    $pane->pid = 'new-194957c0-d9f1-4a85-aec9-7db4f30bd079';
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
    $pane->uuid = '194957c0-d9f1-4a85-aec9-7db4f30bd079';
    $display->content['new-194957c0-d9f1-4a85-aec9-7db4f30bd079'] = $pane;
    $display->panels['right_top'][3] = 'new-194957c0-d9f1-4a85-aec9-7db4f30bd079';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:persons:default:full'] = $panelizer;

  return $export;
}
