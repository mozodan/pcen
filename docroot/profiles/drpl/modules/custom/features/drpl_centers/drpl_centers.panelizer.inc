<?php
/**
 * @file
 * drpl_centers.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function drpl_centers_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'centers';
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->name = 'node:centers:default:full';
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
  $display->uuid = '860ffc02-82b4-4bbf-a309-66fe35c18d18';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-abe69a32-bde0-444e-aa4d-7fa58e299196';
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
    $pane->uuid = 'abe69a32-bde0-444e-aa4d-7fa58e299196';
    $display->content['new-abe69a32-bde0-444e-aa4d-7fa58e299196'] = $pane;
    $display->panels['left'][0] = 'new-abe69a32-bde0-444e-aa4d-7fa58e299196';
    $pane = new stdClass();
    $pane->pid = 'new-699042cb-299a-4baa-9637-d9991b84eaaf';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-centers_search-page';
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
    $pane->uuid = '699042cb-299a-4baa-9637-d9991b84eaaf';
    $display->content['new-699042cb-299a-4baa-9637-d9991b84eaaf'] = $pane;
    $display->panels['left'][1] = 'new-699042cb-299a-4baa-9637-d9991b84eaaf';
    $pane = new stdClass();
    $pane->pid = 'new-0b413d25-7292-4380-8198-3f7d4e02570c';
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
    $pane->uuid = '0b413d25-7292-4380-8198-3f7d4e02570c';
    $display->content['new-0b413d25-7292-4380-8198-3f7d4e02570c'] = $pane;
    $display->panels['right'][0] = 'new-0b413d25-7292-4380-8198-3f7d4e02570c';
    $pane = new stdClass();
    $pane->pid = 'new-7ad3be2b-ce63-41cd-a69c-e3e5fdcdf7c9';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
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
    $pane->uuid = '7ad3be2b-ce63-41cd-a69c-e3e5fdcdf7c9';
    $display->content['new-7ad3be2b-ce63-41cd-a69c-e3e5fdcdf7c9'] = $pane;
    $display->panels['right'][1] = 'new-7ad3be2b-ce63-41cd-a69c-e3e5fdcdf7c9';
    $pane = new stdClass();
    $pane->pid = 'new-e4540436-4810-4198-93ae-9658911093fb';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_district';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'Distrito',
      'override_title_heading' => 'div',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e4540436-4810-4198-93ae-9658911093fb';
    $display->content['new-e4540436-4810-4198-93ae-9658911093fb'] = $pane;
    $display->panels['right'][2] = 'new-e4540436-4810-4198-93ae-9658911093fb';
    $pane = new stdClass();
    $pane->pid = 'new-4e8aed66-7314-4476-825c-bf0651c19eb3';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_long_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'Dirección',
      'override_title_heading' => 'div',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4e8aed66-7314-4476-825c-bf0651c19eb3';
    $display->content['new-4e8aed66-7314-4476-825c-bf0651c19eb3'] = $pane;
    $display->panels['right'][3] = 'new-4e8aed66-7314-4476-825c-bf0651c19eb3';
    $pane = new stdClass();
    $pane->pid = 'new-f35598e8-243c-483b-8db9-fb06ac9a2d1d';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_postal_code';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => '',
        'prefix_suffix' => 1,
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'Código postal',
      'override_title_heading' => 'div',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f35598e8-243c-483b-8db9-fb06ac9a2d1d';
    $display->content['new-f35598e8-243c-483b-8db9-fb06ac9a2d1d'] = $pane;
    $display->panels['right'][4] = 'new-f35598e8-243c-483b-8db9-fb06ac9a2d1d';
    $pane = new stdClass();
    $pane->pid = 'new-6de02614-eaec-480d-9e05-75c48dde708f';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_long_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'Teléfono',
      'override_title_heading' => 'div',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '6de02614-eaec-480d-9e05-75c48dde708f';
    $display->content['new-6de02614-eaec-480d-9e05-75c48dde708f'] = $pane;
    $display->panels['right'][5] = 'new-6de02614-eaec-480d-9e05-75c48dde708f';
    $pane = new stdClass();
    $pane->pid = 'new-a2dd3fda-c115-4f7a-a709-275747b6f236';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_office_hours';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'Horario de atención',
      'override_title_heading' => 'div',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'a2dd3fda-c115-4f7a-a709-275747b6f236';
    $display->content['new-a2dd3fda-c115-4f7a-a709-275747b6f236'] = $pane;
    $display->panels['right'][6] = 'new-a2dd3fda-c115-4f7a-a709-275747b6f236';
    $pane = new stdClass();
    $pane->pid = 'new-7323d9e9-f445-43b8-a2d8-3c9fad7dca99';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_transport_consult';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'Consulta transporte',
      'override_title_heading' => 'div',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '7323d9e9-f445-43b8-a2d8-3c9fad7dca99';
    $display->content['new-7323d9e9-f445-43b8-a2d8-3c9fad7dca99'] = $pane;
    $display->panels['right'][7] = 'new-7323d9e9-f445-43b8-a2d8-3c9fad7dca99';
    $pane = new stdClass();
    $pane->pid = 'new-d3dfd8f6-55e5-4c1a-8598-fc45b2719634';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'geolocation_googlemaps_dynamic',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
        'map_width' => '300px%',
        'map_height' => '00px',
        'map_zoomlevel' => '7',
        'map_maptype' => 'roadmap',
        'marker_icon' => '',
        'map_scrollwheel' => 1,
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'div',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'd3dfd8f6-55e5-4c1a-8598-fc45b2719634';
    $display->content['new-d3dfd8f6-55e5-4c1a-8598-fc45b2719634'] = $pane;
    $display->panels['right'][8] = 'new-d3dfd8f6-55e5-4c1a-8598-fc45b2719634';
    $pane = new stdClass();
    $pane->pid = 'new-e94bc9c5-21d2-4d69-ae94-d0bc965bc272';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'e94bc9c5-21d2-4d69-ae94-d0bc965bc272';
    $display->content['new-e94bc9c5-21d2-4d69-ae94-d0bc965bc272'] = $pane;
    $display->panels['right'][9] = 'new-e94bc9c5-21d2-4d69-ae94-d0bc965bc272';
    $pane = new stdClass();
    $pane->pid = 'new-ac848d5c-7b48-4257-9cef-8f9047e944d7';
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
    $pane->uuid = 'ac848d5c-7b48-4257-9cef-8f9047e944d7';
    $display->content['new-ac848d5c-7b48-4257-9cef-8f9047e944d7'] = $pane;
    $display->panels['right_top'][0] = 'new-ac848d5c-7b48-4257-9cef-8f9047e944d7';
    $pane = new stdClass();
    $pane->pid = 'new-96042e3f-52e8-4e5b-b1d6-2d71774ae392';
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
    $pane->uuid = '96042e3f-52e8-4e5b-b1d6-2d71774ae392';
    $display->content['new-96042e3f-52e8-4e5b-b1d6-2d71774ae392'] = $pane;
    $display->panels['right_top'][1] = 'new-96042e3f-52e8-4e5b-b1d6-2d71774ae392';
    $pane = new stdClass();
    $pane->pid = 'new-6779761d-454d-4f86-8cf4-459b9dbd31eb';
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
    $pane->uuid = '6779761d-454d-4f86-8cf4-459b9dbd31eb';
    $display->content['new-6779761d-454d-4f86-8cf4-459b9dbd31eb'] = $pane;
    $display->panels['right_top'][2] = 'new-6779761d-454d-4f86-8cf4-459b9dbd31eb';
    $pane = new stdClass();
    $pane->pid = 'new-82853a83-e6d6-4543-a273-7951b82926c4';
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
    $pane->uuid = '82853a83-e6d6-4543-a273-7951b82926c4';
    $display->content['new-82853a83-e6d6-4543-a273-7951b82926c4'] = $pane;
    $display->panels['right_top'][3] = 'new-82853a83-e6d6-4543-a273-7951b82926c4';
    $pane = new stdClass();
    $pane->pid = 'new-9dd9dcc5-6646-4f3e-8dea-c85b260b35d3';
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
    $pane->uuid = '9dd9dcc5-6646-4f3e-8dea-c85b260b35d3';
    $display->content['new-9dd9dcc5-6646-4f3e-8dea-c85b260b35d3'] = $pane;
    $display->panels['top'][0] = 'new-9dd9dcc5-6646-4f3e-8dea-c85b260b35d3';
    $pane = new stdClass();
    $pane->pid = 'new-ca10df36-a2a3-4601-8d0a-4abe523b5083';
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
    $pane->uuid = 'ca10df36-a2a3-4601-8d0a-4abe523b5083';
    $display->content['new-ca10df36-a2a3-4601-8d0a-4abe523b5083'] = $pane;
    $display->panels['top'][1] = 'new-ca10df36-a2a3-4601-8d0a-4abe523b5083';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:centers:default:full'] = $panelizer;

  return $export;
}
