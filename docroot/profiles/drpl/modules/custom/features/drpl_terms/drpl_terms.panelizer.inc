<?php
/**
 * @file
 * drpl_terms.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function drpl_terms_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = '';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'taxonomy_term::default';
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
  $display->uuid = 'f8f1da42-8b60-406c-a4e0-4c00ae5641b2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dd3cc8ac-3118-4f82-ac8a-5ecb00a0d3f1';
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
    $pane->uuid = 'dd3cc8ac-3118-4f82-ac8a-5ecb00a0d3f1';
    $display->content['new-dd3cc8ac-3118-4f82-ac8a-5ecb00a0d3f1'] = $pane;
    $display->panels['content'][0] = 'new-dd3cc8ac-3118-4f82-ac8a-5ecb00a0d3f1';
    $pane = new stdClass();
    $pane->pid = 'new-5f509988-e11f-4c2e-8b5b-866cc3038a3e';
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
    $pane->uuid = '5f509988-e11f-4c2e-8b5b-866cc3038a3e';
    $display->content['new-5f509988-e11f-4c2e-8b5b-866cc3038a3e'] = $pane;
    $display->panels['top'][0] = 'new-5f509988-e11f-4c2e-8b5b-866cc3038a3e';
    $pane = new stdClass();
    $pane->pid = 'new-8bac73ec-7ed7-4cff-9819-bbf12f9bba59';
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
    $pane->uuid = '8bac73ec-7ed7-4cff-9819-bbf12f9bba59';
    $display->content['new-8bac73ec-7ed7-4cff-9819-bbf12f9bba59'] = $pane;
    $display->panels['top'][1] = 'new-8bac73ec-7ed7-4cff-9819-bbf12f9bba59';
    $pane = new stdClass();
    $pane->pid = 'new-4359476c-280b-4454-97c1-d8d3c98749f7';
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
    $pane->uuid = '4359476c-280b-4454-97c1-d8d3c98749f7';
    $display->content['new-4359476c-280b-4454-97c1-d8d3c98749f7'] = $pane;
    $display->panels['top'][2] = 'new-4359476c-280b-4454-97c1-d8d3c98749f7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term::default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Predeterminado';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'open_government';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'taxonomy_term:open_government:default';
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
  $display->uuid = 'dea22c74-db8e-4208-aa3b-dfd0520ffa1c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f0103e23-fea8-431a-beb9-10d24e226e4e';
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
    $pane->uuid = 'f0103e23-fea8-431a-beb9-10d24e226e4e';
    $display->content['new-f0103e23-fea8-431a-beb9-10d24e226e4e'] = $pane;
    $display->panels['content'][0] = 'new-f0103e23-fea8-431a-beb9-10d24e226e4e';
    $pane = new stdClass();
    $pane->pid = 'new-3be880af-c6d5-42e8-844c-e7501bae483e';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_paragraphs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'paragraphs_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'full',
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
    $pane->uuid = '3be880af-c6d5-42e8-844c-e7501bae483e';
    $display->content['new-3be880af-c6d5-42e8-844c-e7501bae483e'] = $pane;
    $display->panels['content'][1] = 'new-3be880af-c6d5-42e8-844c-e7501bae483e';
    $pane = new stdClass();
    $pane->pid = 'new-752effad-1187-4f1c-9585-c95677c61401';
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
        'image_style' => 'header_featured_image',
        'image_link' => '',
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
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
    $pane->uuid = '752effad-1187-4f1c-9585-c95677c61401';
    $display->content['new-752effad-1187-4f1c-9585-c95677c61401'] = $pane;
    $display->panels['top'][0] = 'new-752effad-1187-4f1c-9585-c95677c61401';
    $pane = new stdClass();
    $pane->pid = 'new-22f762fc-6f47-4faa-afcd-a79288a2646e';
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
    $pane->uuid = '22f762fc-6f47-4faa-afcd-a79288a2646e';
    $display->content['new-22f762fc-6f47-4faa-afcd-a79288a2646e'] = $pane;
    $display->panels['top'][1] = 'new-22f762fc-6f47-4faa-afcd-a79288a2646e';
    $pane = new stdClass();
    $pane->pid = 'new-a71a8eb9-4551-4f73-9f16-cb02104fa142';
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
    $pane->uuid = 'a71a8eb9-4551-4f73-9f16-cb02104fa142';
    $display->content['new-a71a8eb9-4551-4f73-9f16-cb02104fa142'] = $pane;
    $display->panels['top'][2] = 'new-a71a8eb9-4551-4f73-9f16-cb02104fa142';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-752effad-1187-4f1c-9585-c95677c61401';
  $panelizer->display = $display;
  $export['taxonomy_term:open_government:default'] = $panelizer;

  return $export;
}
