<?php
/**
 * @file
 * drpl_common_repository.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function drpl_common_repository_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'enjoy_category';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'taxonomy_term:enjoy_category:default';
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
  $display->uuid = 'c4f7d295-6bdc-4d8b-8d37-bc2f7c47bf85';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b123237e-b8fd-4258-89c8-5afbf14ae379';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'views-12b01e386f2e40b7c340259307f06c19';
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
    $pane->uuid = 'b123237e-b8fd-4258-89c8-5afbf14ae379';
    $display->content['new-b123237e-b8fd-4258-89c8-5afbf14ae379'] = $pane;
    $display->panels['content'][0] = 'new-b123237e-b8fd-4258-89c8-5afbf14ae379';
    $pane = new stdClass();
    $pane->pid = 'new-96b375ba-4fa3-4f23-9bdd-156688b74698';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_paragraphs';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '96b375ba-4fa3-4f23-9bdd-156688b74698';
    $display->content['new-96b375ba-4fa3-4f23-9bdd-156688b74698'] = $pane;
    $display->panels['content'][1] = 'new-96b375ba-4fa3-4f23-9bdd-156688b74698';
    $pane = new stdClass();
    $pane->pid = 'new-b629fc93-4ffb-4bcc-a066-122d621d2305';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_images';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b629fc93-4ffb-4bcc-a066-122d621d2305';
    $display->content['new-b629fc93-4ffb-4bcc-a066-122d621d2305'] = $pane;
    $display->panels['top'][0] = 'new-b629fc93-4ffb-4bcc-a066-122d621d2305';
    $pane = new stdClass();
    $pane->pid = 'new-1af2ac12-dc76-4c0e-8098-a3a632c48e53';
    $pane->panel = 'top';
    $pane->type = 'term_name';
    $pane->subtype = 'term_name';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1af2ac12-dc76-4c0e-8098-a3a632c48e53';
    $display->content['new-1af2ac12-dc76-4c0e-8098-a3a632c48e53'] = $pane;
    $display->panels['top'][1] = 'new-1af2ac12-dc76-4c0e-8098-a3a632c48e53';
    $pane = new stdClass();
    $pane->pid = 'new-7ecf21bf-669b-4aaa-a394-51911d65f377';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
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
    $pane->uuid = '7ecf21bf-669b-4aaa-a394-51911d65f377';
    $display->content['new-7ecf21bf-669b-4aaa-a394-51911d65f377'] = $pane;
    $display->panels['top'][2] = 'new-7ecf21bf-669b-4aaa-a394-51911d65f377';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:enjoy_category:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Predeterminado';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'invest_category';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'taxonomy_term:invest_category:default';
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
  $display->uuid = '1b1fb181-71c1-4d66-bf1f-f61a11b4794e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7220d837-4f79-48d0-9082-4ec11a2a332b';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'views-12b01e386f2e40b7c340259307f06c19';
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
    $pane->uuid = '7220d837-4f79-48d0-9082-4ec11a2a332b';
    $display->content['new-7220d837-4f79-48d0-9082-4ec11a2a332b'] = $pane;
    $display->panels['content'][0] = 'new-7220d837-4f79-48d0-9082-4ec11a2a332b';
    $pane = new stdClass();
    $pane->pid = 'new-1c920a6e-699b-46d4-9321-4c3f44857c8b';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_paragraphs';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1c920a6e-699b-46d4-9321-4c3f44857c8b';
    $display->content['new-1c920a6e-699b-46d4-9321-4c3f44857c8b'] = $pane;
    $display->panels['content'][1] = 'new-1c920a6e-699b-46d4-9321-4c3f44857c8b';
    $pane = new stdClass();
    $pane->pid = 'new-36f2b1e6-e5ca-41ff-8471-6dc840af7820';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_images';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '36f2b1e6-e5ca-41ff-8471-6dc840af7820';
    $display->content['new-36f2b1e6-e5ca-41ff-8471-6dc840af7820'] = $pane;
    $display->panels['top'][0] = 'new-36f2b1e6-e5ca-41ff-8471-6dc840af7820';
    $pane = new stdClass();
    $pane->pid = 'new-0d4aae5c-9962-4768-97cc-b42d733fa4ba';
    $pane->panel = 'top';
    $pane->type = 'term_name';
    $pane->subtype = 'term_name';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0d4aae5c-9962-4768-97cc-b42d733fa4ba';
    $display->content['new-0d4aae5c-9962-4768-97cc-b42d733fa4ba'] = $pane;
    $display->panels['top'][1] = 'new-0d4aae5c-9962-4768-97cc-b42d733fa4ba';
    $pane = new stdClass();
    $pane->pid = 'new-a4b85cff-998a-4080-8643-ffe139c38e38';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
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
    $pane->uuid = 'a4b85cff-998a-4080-8643-ffe139c38e38';
    $display->content['new-a4b85cff-998a-4080-8643-ffe139c38e38'] = $pane;
    $display->panels['top'][2] = 'new-a4b85cff-998a-4080-8643-ffe139c38e38';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1c920a6e-699b-46d4-9321-4c3f44857c8b';
  $panelizer->display = $display;
  $export['taxonomy_term:invest_category:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Predeterminado';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'live_category';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'taxonomy_term:live_category:default';
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
      'center' => NULL,
      'top' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fff6e376-a7c2-4cca-9b2e-83332739573a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7d1a8930-0e7e-4e7e-8617-02c5479462fa';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'views-12b01e386f2e40b7c340259307f06c19';
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
    $pane->uuid = '7d1a8930-0e7e-4e7e-8617-02c5479462fa';
    $display->content['new-7d1a8930-0e7e-4e7e-8617-02c5479462fa'] = $pane;
    $display->panels['content'][0] = 'new-7d1a8930-0e7e-4e7e-8617-02c5479462fa';
    $pane = new stdClass();
    $pane->pid = 'new-7ef574b1-48b7-42ee-a180-4918c6a565f9';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_paragraphs';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7ef574b1-48b7-42ee-a180-4918c6a565f9';
    $display->content['new-7ef574b1-48b7-42ee-a180-4918c6a565f9'] = $pane;
    $display->panels['content'][1] = 'new-7ef574b1-48b7-42ee-a180-4918c6a565f9';
    $pane = new stdClass();
    $pane->pid = 'new-0eb323c7-94ac-4ee9-b744-1aa39563311b';
    $pane->panel = 'top';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0eb323c7-94ac-4ee9-b744-1aa39563311b';
    $display->content['new-0eb323c7-94ac-4ee9-b744-1aa39563311b'] = $pane;
    $display->panels['top'][0] = 'new-0eb323c7-94ac-4ee9-b744-1aa39563311b';
    $pane = new stdClass();
    $pane->pid = 'new-b5b51b50-37b6-4fd9-80b4-09c80652ed5f';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_images';
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
    $pane->uuid = 'b5b51b50-37b6-4fd9-80b4-09c80652ed5f';
    $display->content['new-b5b51b50-37b6-4fd9-80b4-09c80652ed5f'] = $pane;
    $display->panels['top'][1] = 'new-b5b51b50-37b6-4fd9-80b4-09c80652ed5f';
    $pane = new stdClass();
    $pane->pid = 'new-e82f1885-6b0a-4595-8e01-f1250c94bb3b';
    $pane->panel = 'top';
    $pane->type = 'term_name';
    $pane->subtype = 'term_name';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e82f1885-6b0a-4595-8e01-f1250c94bb3b';
    $display->content['new-e82f1885-6b0a-4595-8e01-f1250c94bb3b'] = $pane;
    $display->panels['top'][2] = 'new-e82f1885-6b0a-4595-8e01-f1250c94bb3b';
    $pane = new stdClass();
    $pane->pid = 'new-6de0efca-e588-4ed8-bb5b-1b19d61e461e';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
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
    $pane->uuid = '6de0efca-e588-4ed8-bb5b-1b19d61e461e';
    $display->content['new-6de0efca-e588-4ed8-bb5b-1b19d61e461e'] = $pane;
    $display->panels['top'][3] = 'new-6de0efca-e588-4ed8-bb5b-1b19d61e461e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:live_category:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'tags';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'taxonomy_term:tags:default';
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
      'center' => NULL,
      'top' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '34c380e3-fbc7-49ef-b921-ab3e83c7a258';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bc5dd439-a4f2-4417-b72d-bf6af38fcbed';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_paragraphs';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bc5dd439-a4f2-4417-b72d-bf6af38fcbed';
    $display->content['new-bc5dd439-a4f2-4417-b72d-bf6af38fcbed'] = $pane;
    $display->panels['content'][0] = 'new-bc5dd439-a4f2-4417-b72d-bf6af38fcbed';
    $pane = new stdClass();
    $pane->pid = 'new-e412ffa8-21e8-4deb-a8b3-bfeaa5d4fb1f';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
        'image_style' => 'header_featured_image',
        'image_link' => '',
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
    $pane->uuid = 'e412ffa8-21e8-4deb-a8b3-bfeaa5d4fb1f';
    $display->content['new-e412ffa8-21e8-4deb-a8b3-bfeaa5d4fb1f'] = $pane;
    $display->panels['top'][0] = 'new-e412ffa8-21e8-4deb-a8b3-bfeaa5d4fb1f';
    $pane = new stdClass();
    $pane->pid = 'new-eb363c29-801d-4928-8ce3-793a6a21e3b1';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'eb363c29-801d-4928-8ce3-793a6a21e3b1';
    $display->content['new-eb363c29-801d-4928-8ce3-793a6a21e3b1'] = $pane;
    $display->panels['top'][1] = 'new-eb363c29-801d-4928-8ce3-793a6a21e3b1';
    $pane = new stdClass();
    $pane->pid = 'new-c49bc148-1baa-46ac-851b-67eb0646c5fd';
    $pane->panel = 'top';
    $pane->type = 'term_name';
    $pane->subtype = 'term_name';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c49bc148-1baa-46ac-851b-67eb0646c5fd';
    $display->content['new-c49bc148-1baa-46ac-851b-67eb0646c5fd'] = $pane;
    $display->panels['top'][2] = 'new-c49bc148-1baa-46ac-851b-67eb0646c5fd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:tags:default'] = $panelizer;

  return $export;
}
