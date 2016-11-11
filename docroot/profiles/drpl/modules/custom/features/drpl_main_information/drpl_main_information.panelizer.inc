<?php
/**
 * @file
 * drpl_main_information.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function drpl_main_information_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'main_information';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:main_information:default';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '47f38967-b4ba-44b1-8eb3-b1d1d8829e99';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-457a7c1f-6ffd-4e87-bd49-35e73464c8df';
    $pane->panel = 'center';
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
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '457a7c1f-6ffd-4e87-bd49-35e73464c8df';
    $display->content['new-457a7c1f-6ffd-4e87-bd49-35e73464c8df'] = $pane;
    $display->panels['center'][0] = 'new-457a7c1f-6ffd-4e87-bd49-35e73464c8df';
    $pane = new stdClass();
    $pane->pid = 'new-77a0bb8e-8fd5-4809-9bda-e1bb1279080c';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_paragraphs';
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
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '77a0bb8e-8fd5-4809-9bda-e1bb1279080c';
    $display->content['new-77a0bb8e-8fd5-4809-9bda-e1bb1279080c'] = $pane;
    $display->panels['center'][1] = 'new-77a0bb8e-8fd5-4809-9bda-e1bb1279080c';
    $pane = new stdClass();
    $pane->pid = 'new-239bda11-b033-4cf3-809e-4d50474cc05c';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '239bda11-b033-4cf3-809e-4d50474cc05c';
    $display->content['new-239bda11-b033-4cf3-809e-4d50474cc05c'] = $pane;
    $display->panels['center'][2] = 'new-239bda11-b033-4cf3-809e-4d50474cc05c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-239bda11-b033-4cf3-809e-4d50474cc05c';
  $panelizer->display = $display;
  $export['node:main_information:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'main_information';
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->name = 'node:main_information:default:full';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'h2';
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
      'header' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'footer' => NULL,
      'right_top' => NULL,
      'right_bottom_left' => NULL,
      'right_bottom_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e1d06ff9-30dd-4db2-8b61-794fb0d4e807';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f4ffc49f-b7b5-48bf-b648-765781c96d00';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'custom_drpl_paragraphs-custom_drpl_slider_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Secciones',
      'override_title_heading' => 'div',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f4ffc49f-b7b5-48bf-b648-765781c96d00';
    $display->content['new-f4ffc49f-b7b5-48bf-b648-765781c96d00'] = $pane;
    $display->panels['left'][0] = 'new-f4ffc49f-b7b5-48bf-b648-765781c96d00';
    $pane = new stdClass();
    $pane->pid = 'new-3bf7d2c7-39c3-423c-9061-f56cbf6726d9';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'custom_drpl-custom_drpl_related_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Contenido relacionado',
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
    $pane->uuid = '3bf7d2c7-39c3-423c-9061-f56cbf6726d9';
    $display->content['new-3bf7d2c7-39c3-423c-9061-f56cbf6726d9'] = $pane;
    $display->panels['left'][1] = 'new-3bf7d2c7-39c3-423c-9061-f56cbf6726d9';
    $pane = new stdClass();
    $pane->pid = 'new-c576602c-ecae-43cc-914c-e8693dcc23fa';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_short_description';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c576602c-ecae-43cc-914c-e8693dcc23fa';
    $display->content['new-c576602c-ecae-43cc-914c-e8693dcc23fa'] = $pane;
    $display->panels['right'][0] = 'new-c576602c-ecae-43cc-914c-e8693dcc23fa';
    $pane = new stdClass();
    $pane->pid = 'new-57d90a14-df0e-423b-a4f6-a6f41e6b69ca';
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
    $pane->uuid = '57d90a14-df0e-423b-a4f6-a6f41e6b69ca';
    $display->content['new-57d90a14-df0e-423b-a4f6-a6f41e6b69ca'] = $pane;
    $display->panels['right'][1] = 'new-57d90a14-df0e-423b-a4f6-a6f41e6b69ca';
    $pane = new stdClass();
    $pane->pid = 'new-80eed1d6-e051-4670-b186-fd9cde12abe0';
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
    $pane->uuid = '80eed1d6-e051-4670-b186-fd9cde12abe0';
    $display->content['new-80eed1d6-e051-4670-b186-fd9cde12abe0'] = $pane;
    $display->panels['right'][2] = 'new-80eed1d6-e051-4670-b186-fd9cde12abe0';
    $pane = new stdClass();
    $pane->pid = 'new-20c10799-e587-429e-b1b7-753ae243f110';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '20c10799-e587-429e-b1b7-753ae243f110';
    $display->content['new-20c10799-e587-429e-b1b7-753ae243f110'] = $pane;
    $display->panels['right'][3] = 'new-20c10799-e587-429e-b1b7-753ae243f110';
    $pane = new stdClass();
    $pane->pid = 'new-3f15f13b-a79e-4515-be47-97f0842dcf42';
    $pane->panel = 'right_bottom_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_publications_reference';
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
      'override_title_text' => 'Publicaciones',
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
    $pane->uuid = '3f15f13b-a79e-4515-be47-97f0842dcf42';
    $display->content['new-3f15f13b-a79e-4515-be47-97f0842dcf42'] = $pane;
    $display->panels['right_bottom_left'][0] = 'new-3f15f13b-a79e-4515-be47-97f0842dcf42';
    $pane = new stdClass();
    $pane->pid = 'new-86d2d5a8-8c82-4d2d-b34a-9f2f926a97fc';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '86d2d5a8-8c82-4d2d-b34a-9f2f926a97fc';
    $display->content['new-86d2d5a8-8c82-4d2d-b34a-9f2f926a97fc'] = $pane;
    $display->panels['right_bottom_left'][1] = 'new-86d2d5a8-8c82-4d2d-b34a-9f2f926a97fc';
    $pane = new stdClass();
    $pane->pid = 'new-8aa0d8ea-7be0-400d-a702-a7849f002021';
    $pane->panel = 'right_bottom_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_regulations_reference';
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
        'links' => 1,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Normativas',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8aa0d8ea-7be0-400d-a702-a7849f002021';
    $display->content['new-8aa0d8ea-7be0-400d-a702-a7849f002021'] = $pane;
    $display->panels['right_bottom_left'][2] = 'new-8aa0d8ea-7be0-400d-a702-a7849f002021';
    $pane = new stdClass();
    $pane->pid = 'new-1752eb1c-26fb-4676-bd32-41f4276c3b77';
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
      'override_title_text' => 'Archivos',
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
    $pane->uuid = '1752eb1c-26fb-4676-bd32-41f4276c3b77';
    $display->content['new-1752eb1c-26fb-4676-bd32-41f4276c3b77'] = $pane;
    $display->panels['right_bottom_right'][0] = 'new-1752eb1c-26fb-4676-bd32-41f4276c3b77';
    $pane = new stdClass();
    $pane->pid = 'new-8e793a19-1f13-4d0b-afec-0945009ba899';
    $pane->panel = 'right_bottom_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_counselings';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'ds_taxonomy_view_mode',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Atención al ciudadano',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8e793a19-1f13-4d0b-afec-0945009ba899';
    $display->content['new-8e793a19-1f13-4d0b-afec-0945009ba899'] = $pane;
    $display->panels['right_bottom_right'][1] = 'new-8e793a19-1f13-4d0b-afec-0945009ba899';
    $pane = new stdClass();
    $pane->pid = 'new-68754194-65b1-4c25-ace5-7a61a3caac42';
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
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '68754194-65b1-4c25-ace5-7a61a3caac42';
    $display->content['new-68754194-65b1-4c25-ace5-7a61a3caac42'] = $pane;
    $display->panels['right_top'][0] = 'new-68754194-65b1-4c25-ace5-7a61a3caac42';
    $pane = new stdClass();
    $pane->pid = 'new-1cc9c130-62a7-45ad-936e-2538c268a2d1';
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
    $pane->uuid = '1cc9c130-62a7-45ad-936e-2538c268a2d1';
    $display->content['new-1cc9c130-62a7-45ad-936e-2538c268a2d1'] = $pane;
    $display->panels['right_top'][1] = 'new-1cc9c130-62a7-45ad-936e-2538c268a2d1';
    $pane = new stdClass();
    $pane->pid = 'new-5532d385-76ce-4a22-87b3-a1dda5f87d0c';
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
    $pane->uuid = '5532d385-76ce-4a22-87b3-a1dda5f87d0c';
    $display->content['new-5532d385-76ce-4a22-87b3-a1dda5f87d0c'] = $pane;
    $display->panels['right_top'][2] = 'new-5532d385-76ce-4a22-87b3-a1dda5f87d0c';
    $pane = new stdClass();
    $pane->pid = 'new-024734e8-39e4-4939-9fb3-07d9f80c2230';
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
    $pane->uuid = '024734e8-39e4-4939-9fb3-07d9f80c2230';
    $display->content['new-024734e8-39e4-4939-9fb3-07d9f80c2230'] = $pane;
    $display->panels['right_top'][3] = 'new-024734e8-39e4-4939-9fb3-07d9f80c2230';
    $pane = new stdClass();
    $pane->pid = 'new-e8fc861b-1401-4c84-9129-2cf63694e522';
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
    $pane->uuid = 'e8fc861b-1401-4c84-9129-2cf63694e522';
    $display->content['new-e8fc861b-1401-4c84-9129-2cf63694e522'] = $pane;
    $display->panels['top'][0] = 'new-e8fc861b-1401-4c84-9129-2cf63694e522';
    $pane = new stdClass();
    $pane->pid = 'new-97ac191c-46c4-4b48-878f-96c52d8252be';
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
    $pane->uuid = '97ac191c-46c4-4b48-878f-96c52d8252be';
    $display->content['new-97ac191c-46c4-4b48-878f-96c52d8252be'] = $pane;
    $display->panels['top'][1] = 'new-97ac191c-46c4-4b48-878f-96c52d8252be';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:main_information:default:full'] = $panelizer;

  return $export;
}
