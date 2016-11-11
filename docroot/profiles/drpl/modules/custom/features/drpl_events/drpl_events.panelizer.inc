<?php
/**
 * @file
 * drpl_events.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function drpl_events_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'events';
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->name = 'node:events:default:full';
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
  $display->uuid = 'd32b73d1-21bb-4ed0-b7ff-3fb7e05bea15';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0c2493e0-a69a-4279-a571-c44579589b8c';
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
    $pane->uuid = '0c2493e0-a69a-4279-a571-c44579589b8c';
    $display->content['new-0c2493e0-a69a-4279-a571-c44579589b8c'] = $pane;
    $display->panels['left'][0] = 'new-0c2493e0-a69a-4279-a571-c44579589b8c';
    $pane = new stdClass();
    $pane->pid = 'new-693aad21-d8ff-4d82-ae14-e68913d1f71a';
    $pane->panel = 'left';
    $pane->type = 'paragraph_panes';
    $pane->subtype = 'events_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'field_block_reference' => array(
        0 => array(
          'moddelta' => 'views:-exp-events_search-page',
        ),
      ),
      'field_label' => array(
        0 => array(
          'value' => 'Buscador de actividades',
        ),
      ),
      'field_show_link' => array(),
      'field_block_reference_v2' => array(
        0 => array(
          'moddelta' => 'custom_drpl_paragraphs:drpl_events_month_navigation',
        ),
      ),
      'field_link' => array(
        0 => array(
          'title' => 'Accede a todas las actividades',
          'url' => 'actividades',
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
    $pane->uuid = '693aad21-d8ff-4d82-ae14-e68913d1f71a';
    $display->content['new-693aad21-d8ff-4d82-ae14-e68913d1f71a'] = $pane;
    $display->panels['left'][1] = 'new-693aad21-d8ff-4d82-ae14-e68913d1f71a';
    $pane = new stdClass();
    $pane->pid = 'new-90318388-5f23-47f0-bf64-73f7e5be4fb2';
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
    $pane->uuid = '90318388-5f23-47f0-bf64-73f7e5be4fb2';
    $display->content['new-90318388-5f23-47f0-bf64-73f7e5be4fb2'] = $pane;
    $display->panels['right'][0] = 'new-90318388-5f23-47f0-bf64-73f7e5be4fb2';
    $pane = new stdClass();
    $pane->pid = 'new-0be6ad9d-09e5-4e6f-be33-667889181696';
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
    $pane->uuid = '0be6ad9d-09e5-4e6f-be33-667889181696';
    $display->content['new-0be6ad9d-09e5-4e6f-be33-667889181696'] = $pane;
    $display->panels['right'][1] = 'new-0be6ad9d-09e5-4e6f-be33-667889181696';
    $pane = new stdClass();
    $pane->pid = 'new-df71c50e-f199-41fb-aec3-4aea2933bf32';
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
    $pane->uuid = 'df71c50e-f199-41fb-aec3-4aea2933bf32';
    $display->content['new-df71c50e-f199-41fb-aec3-4aea2933bf32'] = $pane;
    $display->panels['right'][2] = 'new-df71c50e-f199-41fb-aec3-4aea2933bf32';
    $pane = new stdClass();
    $pane->pid = 'new-5a3f24a6-1345-40e9-a8a9-4853381acbfc';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => ' ',
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
    $pane->uuid = '5a3f24a6-1345-40e9-a8a9-4853381acbfc';
    $display->content['new-5a3f24a6-1345-40e9-a8a9-4853381acbfc'] = $pane;
    $display->panels['right'][3] = 'new-5a3f24a6-1345-40e9-a8a9-4853381acbfc';
    $pane = new stdClass();
    $pane->pid = 'new-86797aec-e5bb-4e87-b5da-95d0467b2e84';
    $pane->panel = 'right_bottom_left';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '86797aec-e5bb-4e87-b5da-95d0467b2e84';
    $display->content['new-86797aec-e5bb-4e87-b5da-95d0467b2e84'] = $pane;
    $display->panels['right_bottom_left'][0] = 'new-86797aec-e5bb-4e87-b5da-95d0467b2e84';
    $pane = new stdClass();
    $pane->pid = 'new-ebede831-ca43-41aa-b7cc-c0c2e4a7868e';
    $pane->panel = 'right_bottom_right';
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
      'override_title_text' => 'Descarga de documentos',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ebede831-ca43-41aa-b7cc-c0c2e4a7868e';
    $display->content['new-ebede831-ca43-41aa-b7cc-c0c2e4a7868e'] = $pane;
    $display->panels['right_bottom_right'][0] = 'new-ebede831-ca43-41aa-b7cc-c0c2e4a7868e';
    $pane = new stdClass();
    $pane->pid = 'new-17ef661a-bebc-498b-9703-e3f3cfa12961';
    $pane->panel = 'right_top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h3',
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
    $pane->uuid = '17ef661a-bebc-498b-9703-e3f3cfa12961';
    $display->content['new-17ef661a-bebc-498b-9703-e3f3cfa12961'] = $pane;
    $display->panels['right_top'][0] = 'new-17ef661a-bebc-498b-9703-e3f3cfa12961';
    $pane = new stdClass();
    $pane->pid = 'new-43695cca-4e0f-4db9-8c41-7a03bc6773df';
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
    $pane->uuid = '43695cca-4e0f-4db9-8c41-7a03bc6773df';
    $display->content['new-43695cca-4e0f-4db9-8c41-7a03bc6773df'] = $pane;
    $display->panels['right_top'][1] = 'new-43695cca-4e0f-4db9-8c41-7a03bc6773df';
    $pane = new stdClass();
    $pane->pid = 'new-eb60e4f4-fff0-4866-987e-763d9d780c9a';
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
    $pane->uuid = 'eb60e4f4-fff0-4866-987e-763d9d780c9a';
    $display->content['new-eb60e4f4-fff0-4866-987e-763d9d780c9a'] = $pane;
    $display->panels['right_top'][2] = 'new-eb60e4f4-fff0-4866-987e-763d9d780c9a';
    $pane = new stdClass();
    $pane->pid = 'new-bb763b44-6144-4142-85da-04dd51a13b93';
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
    $pane->uuid = 'bb763b44-6144-4142-85da-04dd51a13b93';
    $display->content['new-bb763b44-6144-4142-85da-04dd51a13b93'] = $pane;
    $display->panels['right_top'][3] = 'new-bb763b44-6144-4142-85da-04dd51a13b93';
    $pane = new stdClass();
    $pane->pid = 'new-30289408-472f-41f2-a6f5-a185215eb817';
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
    $pane->uuid = '30289408-472f-41f2-a6f5-a185215eb817';
    $display->content['new-30289408-472f-41f2-a6f5-a185215eb817'] = $pane;
    $display->panels['top'][0] = 'new-30289408-472f-41f2-a6f5-a185215eb817';
    $pane = new stdClass();
    $pane->pid = 'new-3ffeb68c-67d9-46b5-963c-a3ccfb3c36f9';
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
    $pane->uuid = '3ffeb68c-67d9-46b5-963c-a3ccfb3c36f9';
    $display->content['new-3ffeb68c-67d9-46b5-963c-a3ccfb3c36f9'] = $pane;
    $display->panels['top'][1] = 'new-3ffeb68c-67d9-46b5-963c-a3ccfb3c36f9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:events:default:full'] = $panelizer;

  return $export;
}
