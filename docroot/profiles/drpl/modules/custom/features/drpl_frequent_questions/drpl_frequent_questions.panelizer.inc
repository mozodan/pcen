<?php
/**
 * @file
 * drpl_frequent_questions.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function drpl_frequent_questions_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'frequent_questions';
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->name = 'node:frequent_questions:default:full';
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
  $display->uuid = 'f655efeb-1386-48e8-a8c4-b4dc12ab1173';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a84e8777-dd58-49bc-875b-5aa3d32c1b09';
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
    $pane->uuid = 'a84e8777-dd58-49bc-875b-5aa3d32c1b09';
    $display->content['new-a84e8777-dd58-49bc-875b-5aa3d32c1b09'] = $pane;
    $display->panels['left'][0] = 'new-a84e8777-dd58-49bc-875b-5aa3d32c1b09';
    $pane = new stdClass();
    $pane->pid = 'new-c93517c7-c35b-4138-8be0-1a452e258ad0';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-40ab0a28303849ceaaa46c130124f457';
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
    $pane->uuid = 'c93517c7-c35b-4138-8be0-1a452e258ad0';
    $display->content['new-c93517c7-c35b-4138-8be0-1a452e258ad0'] = $pane;
    $display->panels['left'][1] = 'new-c93517c7-c35b-4138-8be0-1a452e258ad0';
    $pane = new stdClass();
    $pane->pid = 'new-7e34b782-352a-4899-98b0-893b168740cb';
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
    $pane->uuid = '7e34b782-352a-4899-98b0-893b168740cb';
    $display->content['new-7e34b782-352a-4899-98b0-893b168740cb'] = $pane;
    $display->panels['right'][0] = 'new-7e34b782-352a-4899-98b0-893b168740cb';
    $pane = new stdClass();
    $pane->pid = 'new-89d24bae-3e10-4189-bc6c-6bdbc0868008';
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
    $pane->uuid = '89d24bae-3e10-4189-bc6c-6bdbc0868008';
    $display->content['new-89d24bae-3e10-4189-bc6c-6bdbc0868008'] = $pane;
    $display->panels['right'][1] = 'new-89d24bae-3e10-4189-bc6c-6bdbc0868008';
    $pane = new stdClass();
    $pane->pid = 'new-cb5aedcf-a21c-4fe7-b8ef-0885be9fb363';
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
    $pane->uuid = 'cb5aedcf-a21c-4fe7-b8ef-0885be9fb363';
    $display->content['new-cb5aedcf-a21c-4fe7-b8ef-0885be9fb363'] = $pane;
    $display->panels['right_top'][0] = 'new-cb5aedcf-a21c-4fe7-b8ef-0885be9fb363';
    $pane = new stdClass();
    $pane->pid = 'new-51c8711d-1a84-418a-80cd-2c49f0ff0c8c';
    $pane->panel = 'right_top';
    $pane->type = 'node_updated';
    $pane->subtype = 'node_updated';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'day_and_month',
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
    $pane->uuid = '51c8711d-1a84-418a-80cd-2c49f0ff0c8c';
    $display->content['new-51c8711d-1a84-418a-80cd-2c49f0ff0c8c'] = $pane;
    $display->panels['right_top'][1] = 'new-51c8711d-1a84-418a-80cd-2c49f0ff0c8c';
    $pane = new stdClass();
    $pane->pid = 'new-064b7d71-050f-41e7-958d-4bcd53b87fd2';
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
    $pane->uuid = '064b7d71-050f-41e7-958d-4bcd53b87fd2';
    $display->content['new-064b7d71-050f-41e7-958d-4bcd53b87fd2'] = $pane;
    $display->panels['right_top'][2] = 'new-064b7d71-050f-41e7-958d-4bcd53b87fd2';
    $pane = new stdClass();
    $pane->pid = 'new-278b9968-4867-4a9d-b27a-f0d4f720aa62';
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
    $pane->uuid = '278b9968-4867-4a9d-b27a-f0d4f720aa62';
    $display->content['new-278b9968-4867-4a9d-b27a-f0d4f720aa62'] = $pane;
    $display->panels['right_top'][3] = 'new-278b9968-4867-4a9d-b27a-f0d4f720aa62';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:frequent_questions:default:full'] = $panelizer;

  return $export;
}
