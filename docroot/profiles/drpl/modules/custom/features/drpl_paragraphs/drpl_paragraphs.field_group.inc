<?php
/**
 * @file
 * drpl_paragraphs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drpl_paragraphs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|call|default';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'call';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '13',
    'children' => array(
      0 => 'group_paragraph_link',
      1 => 'group_paragraph_main_information',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content|paragraphs_item|call|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|featured_image|default';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_image';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '13',
    'children' => array(
      0 => 'group_paragraph_main_information',
      1 => 'group_paragraph_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content|paragraphs_item|featured_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|entityform|events_search|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'events_search';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '35',
    'children' => array(
      0 => 'field_hidden_date',
      1 => 'field_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hidden field-group-div element-hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hidden|entityform|events_search|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|entityform|frequent_questions|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'frequent_questions';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '3',
    'children' => array(
      0 => 'field_link',
      1 => 'field_hidden_content_type',
      2 => 'field_content_types',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hidden field-group-div element-hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hidden|entityform|frequent_questions|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|paragraphs_item|calendar_block|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'calendar_block';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_main_information';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '10',
    'children' => array(
      0 => 'field_block_reference',
      1 => 'field_filter_categories',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hidden field-group-div element-hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hidden|paragraphs_item|calendar_block|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|paragraphs_item|events_search|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'events_search';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_main_information';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '14',
    'children' => array(
      0 => 'field_block_reference',
      1 => 'field_block_reference_v2',
      2 => 'field_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hidden field-group-div element-hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hidden|paragraphs_item|events_search|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|paragraphs_item|featured_events|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_events';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_main_information';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '14',
    'children' => array(
      0 => 'field_block_reference',
      1 => 'field_filter_categories',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hidden field-group-div element-hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hidden|paragraphs_item|featured_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|paragraphs_item|featured_list_entity|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_list_entity';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '2',
    'children' => array(
      0 => 'field_block_reference',
      1 => 'field_filter_categories',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hidden field-group-div element-hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hidden|paragraphs_item|featured_list_entity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|paragraphs_item|file_search_by_date|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'file_search_by_date';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_main_information';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '9',
    'children' => array(
      0 => 'field_block_reference',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hidden field-group-div element-hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hidden|paragraphs_item|file_search_by_date|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|paragraphs_item|frequent_questions|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'frequent_questions';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_main_information';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '6',
    'children' => array(
      0 => 'field_block_reference',
      1 => 'field_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hidden field-group-div element-hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hidden|paragraphs_item|frequent_questions|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|paragraphs_item|list|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'list';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '7',
    'children' => array(
      0 => 'field_block_reference',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hidden field-group-div element-hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hidden|paragraphs_item|list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|paragraphs_item|news_search|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'news_search';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_main_information';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '8',
    'children' => array(
      0 => 'field_block_reference',
      1 => 'field_block_reference_v2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hidden field-group-div element-hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hidden|paragraphs_item|news_search|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|paragraphs_item|newsletter|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'newsletter';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_main_information';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '7',
    'children' => array(
      0 => 'field_block_reference',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hidden field-group-div element-hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hidden|paragraphs_item|newsletter|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|paragraphs_item|text_video|default';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_video';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Main information',
    'weight' => '12',
    'children' => array(
      0 => 'field_description',
      1 => 'field_link',
      2 => 'field_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Main information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-main-information field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_main_information|paragraphs_item|text_video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multimedia|paragraphs_item|text_video|default';
  $field_group->group_name = 'group_multimedia';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_video';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Multimedia',
    'weight' => '13',
    'children' => array(
      0 => 'field_videos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Multimedia',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-multimedia field-group-div col-md-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_multimedia|paragraphs_item|text_video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_accordions|paragraphs_item|title_text|accordion';
  $field_group->group_name = 'group_paragraph_accordions';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'title_text';
  $field_group->mode = 'accordion';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accordions',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_accordion',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'label' => 'Accordions',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-accordions field-group-accordion',
        'description' => '',
        'effect' => 'none',
      ),
    ),
  );
  $field_groups['group_paragraph_accordions|paragraphs_item|title_text|accordion'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_accordion|paragraphs_item|title_text|accordion';
  $field_group->group_name = 'group_paragraph_accordion';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'title_text';
  $field_group->mode = 'accordion';
  $field_group->parent_name = 'group_paragraph_accordions';
  $field_group->data = array(
    'label' => 'Accordion',
    'weight' => '0',
    'children' => array(
      0 => 'field_title',
      1 => 'field_description',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Accordion',
      'instance_settings' => array(
        'classes' => 'group-paragraph-accordion field-group-accordion-item',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_accordion|paragraphs_item|title_text|accordion'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_background|paragraphs_item|call|default';
  $field_group->group_name = 'group_paragraph_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'call';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Image and background',
    'weight' => '12',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image and background',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-background field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_background|paragraphs_item|call|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_background|paragraphs_item|featured_image|default';
  $field_group->group_name = 'group_paragraph_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_image';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Image and background',
    'weight' => '11',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image and background',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-background field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_background|paragraphs_item|featured_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_banner|paragraphs_item|banner|default';
  $field_group->group_name = 'group_paragraph_banner';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'banner';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Banner',
    'weight' => '8',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Banner',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-banner field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_banner|paragraphs_item|banner|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_controls|paragraphs_item|gallery|coverflow';
  $field_group->group_name = 'group_paragraph_controls';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'coverflow';
  $field_group->parent_name = 'group_paragraph_coverflow';
  $field_group->data = array(
    'label' => 'Controls',
    'weight' => '8',
    'children' => array(
      0 => 'widget_controls_coverflow',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Controls',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-controls field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_controls|paragraphs_item|gallery|coverflow'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_controls|paragraphs_item|slideshow|default';
  $field_group->group_name = 'group_paragraph_controls';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'slideshow';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph_coverflow';
  $field_group->data = array(
    'label' => 'Controls',
    'weight' => '5',
    'children' => array(
      0 => 'widget_controls_coverflow',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Controls',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-controls field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_controls|paragraphs_item|slideshow|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_coverflow|paragraphs_item|gallery|coverflow';
  $field_group->group_name = 'group_paragraph_coverflow';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'coverflow';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Coverflow',
    'weight' => '1',
    'children' => array(
      0 => 'field_gallery',
      1 => 'group_paragraph_controls',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Coverflow',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-coverflow field-group-div coverflow-slider',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_coverflow|paragraphs_item|gallery|coverflow'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_coverflow|paragraphs_item|slideshow|default';
  $field_group->group_name = 'group_paragraph_coverflow';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'slideshow';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Coverflow',
    'weight' => '6',
    'children' => array(
      0 => 'field_gallery',
      1 => 'group_paragraph_controls',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Coverflow',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-coverflow field-group-div coverflow-slider',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_coverflow|paragraphs_item|slideshow|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_download_files|paragraphs_item|download_files|default';
  $field_group->group_name = 'group_paragraph_download_files';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'download_files';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Descarga de documentos',
    'weight' => '6',
    'children' => array(
      0 => 'field_files',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Descarga de documentos',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-download-files field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_download_files|paragraphs_item|download_files|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_image|paragraphs_item|featured_image|default';
  $field_group->group_name = 'group_paragraph_image';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_image';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Background image',
    'weight' => '8',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Background image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_image|paragraphs_item|featured_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_image|paragraphs_item|featured|default';
  $field_group->group_name = 'group_paragraph_image';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Imagen',
    'weight' => '10',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Imagen',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_image|paragraphs_item|featured|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_image|paragraphs_item|information_container_block|default';
  $field_group->group_name = 'group_paragraph_image';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'information_container_block';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Imagen',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Imagen',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-image field-group-div col-md-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_image|paragraphs_item|information_container_block|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_image|paragraphs_item|title_text_image|owl_carousel';
  $field_group->group_name = 'group_paragraph_image';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'title_text_image';
  $field_group->mode = 'owl_carousel';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Background image',
    'weight' => '8',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Background image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_image|paragraphs_item|title_text_image|owl_carousel'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|accordion|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'accordion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|accordion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|action|default';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'action';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '8',
    'children' => array(
      0 => 'field_description',
      1 => 'field_icon',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Información paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-information field-group-div col-md-9',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|action|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|action|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'action';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Información paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-information field-group-htabs',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|action|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|banner|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'banner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|banner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|block_reference|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'block_reference';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Información paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-information field-group-htabs',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|block_reference|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|button|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'button';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
      1 => 'group_paragraph_visualization',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|button|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|calendar_block|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'calendar_block';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|calendar_block|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|call|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'call';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
      1 => 'group_paragraph_visualization',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|call|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|carousel_banners|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'carousel_banners';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
      1 => 'group_paragraph_visualization',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|carousel_banners|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|carousel|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'carousel';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_visualization',
      1 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|carousel|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|column|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'column';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
      1 => 'group_paragraph_options',
      2 => 'group_paragraph_visualization',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|column|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|compound_information_block|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'compound_information_block';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
      1 => 'group_paragraph_visualization',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|compound_information_block|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|compound_information|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'compound_information';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '2',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|compound_information|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|download_files|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'download_files';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|download_files|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|events_search|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'events_search';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|events_search|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|featured_events|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|featured_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|featured_image|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|featured_image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|featured_list_entity|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_list_entity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_hidden',
      1 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|featured_list_entity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|featured_list|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_list';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
      1 => 'group_paragraph_visualization',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|featured_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|featured|default';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Información',
    'weight' => '11',
    'children' => array(
      0 => 'field_singular_featured_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Información',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|featured|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|featured|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph	',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|featured|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|file_search_by_date|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'file_search_by_date';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|file_search_by_date|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|frequent_questions|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'frequent_questions';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|frequent_questions|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|gallery|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
      1 => 'group_paragraph_visualization',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|image_link|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'image_link';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|image_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|information_container_block|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'information_container_block';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
      1 => 'group_paragraph_visualization',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|information_container_block|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|information_container|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'information_container';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|information_container|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|link_list|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'link_list';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
      1 => 'group_paragraph_visualization',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Información paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-information field-group-htabs',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|link_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|link|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'link';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
      1 => 'group_paragraph_visualization',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|list|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'list';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
      1 => 'group_paragraph_visualization',
      2 => 'group_hidden',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Información paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-information field-group-htabs',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|map_imagen_text|default';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'map_imagen_text';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Information',
    'weight' => '13',
    'children' => array(
      0 => 'field_image',
      1 => 'field_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Information',
      'instance_settings' => array(
        'id' => 'drpl_map_information',
        'classes' => 'group-paragraph-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|map_imagen_text|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|map_imagen_text|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'map_imagen_text';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|map_imagen_text|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|multiple_compound_links|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'multiple_compound_links';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '3',
    'children' => array(
      0 => 'group_paragraph_visualization',
      1 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|multiple_compound_links|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|news_search|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'news_search';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|news_search|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|newsletter|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'newsletter';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|newsletter|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|paragraph_text|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'paragraph_text';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|paragraph_text|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|separator|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'separator';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|separator|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|slideshow|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'slideshow';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|slideshow|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|switch|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'switch';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|switch|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|tabs|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'tabs';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|tabs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|text_link|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_link';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|text_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|text_video|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '3',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|text_video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|title_text_image|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'title_text_image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '3',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|title_text_image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|title_text_image|owl_carousel';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'title_text_image';
  $field_group->mode = 'owl_carousel';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Information',
    'weight' => '9',
    'children' => array(
      0 => 'field_description',
      1 => 'field_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|title_text_image|owl_carousel'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|title_text|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'title_text';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|title_text|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|two_columns_double_text|default';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_columns_double_text';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Information',
    'weight' => '5',
    'children' => array(
      0 => 'field_subparagraphs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|two_columns_double_text|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|two_columns|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '3',
    'children' => array(
      0 => 'group_paragraph_main_information',
      1 => 'group_paragraph_visualization',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|two_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|vertical_tabs|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'vertical_tabs';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|vertical_tabs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_information|paragraphs_item|video|form';
  $field_group->group_name = 'group_paragraph_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_main_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_information|paragraphs_item|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_left|paragraphs_item|two_columns_double_text|default';
  $field_group->group_name = 'group_paragraph_left';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_columns_double_text';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Paragraph left column',
    'weight' => '8',
    'children' => array(
      0 => 'field_short_description_left',
      1 => 'field_description_left',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph left column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-left field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_left|paragraphs_item|two_columns_double_text|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_link|paragraphs_item|action|default';
  $field_group->group_name = 'group_paragraph_link';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'action';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Link',
    'weight' => '9',
    'children' => array(
      0 => 'field_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Link',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-link field-group-div col-md-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_link|paragraphs_item|action|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_link|paragraphs_item|call|default';
  $field_group->group_name = 'group_paragraph_link';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'call';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Link',
    'weight' => '14',
    'children' => array(
      0 => 'field_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Link',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-link field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_link|paragraphs_item|call|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_link|paragraphs_item|featured_image|default';
  $field_group->group_name = 'group_paragraph_link';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_image';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Link',
    'weight' => '6',
    'children' => array(
      0 => 'field_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Link',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-link field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_link|paragraphs_item|featured_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_link|paragraphs_item|featured|default';
  $field_group->group_name = 'group_paragraph_link';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Link',
    'weight' => '12',
    'children' => array(
      0 => 'field_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Link',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-link field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_link|paragraphs_item|featured|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|accordion|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'accordion';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_label',
      1 => 'field_subparagraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Información general',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-paragraph-main-information field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|accordion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|action|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'action';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_description',
      1 => 'field_label',
      2 => 'field_link',
      3 => 'field_icon',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Información general',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-paragraph-main-information field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|action|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|banner|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'banner';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
      1 => 'field_label',
      2 => 'field_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|banner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|block_reference|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'block_reference';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_block_reference',
      1 => 'field_label',
      2 => 'field_block_type',
      3 => 'field_views_reference',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Información general',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-paragraph-main-information field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|block_reference|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|button|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'button';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '9',
    'children' => array(
      0 => 'field_link',
      1 => 'field_label',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|button|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|calendar_block|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'calendar_block';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_label',
      1 => 'field_invest_category',
      2 => 'field_enjoy_category',
      3 => 'field_live_category',
      4 => 'field_open_government',
      5 => 'group_hidden',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Información general',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-paragraph-main-information field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|calendar_block|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|call|default';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'call';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Main information',
    'weight' => '13',
    'children' => array(
      0 => 'field_description',
      1 => 'field_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Main information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-main-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|call|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|call|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'call';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '13',
    'children' => array(
      0 => 'field_description',
      1 => 'field_label',
      2 => 'field_link',
      3 => 'field_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|call|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|carousel_banners_slide|default';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'carousel_banners_slide';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main information',
    'weight' => '1',
    'children' => array(
      0 => 'field_title',
      1 => 'field_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Main information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-main-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|carousel_banners_slide|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|carousel_banners|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'carousel_banners';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_label',
      1 => 'field_subparagraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|carousel_banners|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|carousel|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'carousel';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_label',
      1 => 'field_subparagraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|carousel|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|column|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'column';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '5',
    'children' => array(
      0 => 'field_label',
      1 => 'field_paragraph_title',
      2 => 'field_subparagraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|column|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|compound_information_block|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'compound_information_block';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '5',
    'children' => array(
      0 => 'field_icon',
      1 => 'field_label',
      2 => 'field_link',
      3 => 'field_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|compound_information_block|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|compound_information|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'compound_information';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_label',
      1 => 'field_subparagraphs',
      2 => 'field_description',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|compound_information|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|download_files|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'download_files';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_files',
      1 => 'field_label',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|download_files|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|events_search|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'events_search';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '3',
    'children' => array(
      0 => 'field_label',
      1 => 'field_show_link',
      2 => 'group_hidden',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|events_search|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|featured_events|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_events';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '4',
    'children' => array(
      0 => 'field_items_limit',
      1 => 'field_label',
      2 => 'field_enjoy_category',
      3 => 'field_open_government',
      4 => 'field_invest_category',
      5 => 'field_live_category',
      6 => 'group_hidden',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|featured_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|featured_image|default';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_image';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Main information',
    'weight' => '5',
    'children' => array(
      0 => 'field_short_description',
      1 => 'field_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Main information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-main-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|featured_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|featured_image|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_image';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '3',
    'children' => array(
      0 => 'field_title',
      1 => 'field_link',
      2 => 'field_short_description',
      3 => 'field_image',
      4 => 'field_label',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|featured_image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|featured_list_entity|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_list_entity';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_content_types',
      1 => 'field_label',
      2 => 'field_title',
      3 => 'field_enjoy_category',
      4 => 'field_invest_category',
      5 => 'field_live_category',
      6 => 'field_open_government',
      7 => 'field_config_type',
      8 => 'field_items_limit',
      9 => 'field_associated_entities',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|featured_list_entity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|featured_list|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_list';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_disabled_short_description',
      1 => 'field_label',
      2 => 'field_featured_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Información general',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-paragraph-main-information field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|featured_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|featured|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general	',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
      1 => 'field_label',
      2 => 'field_link',
      3 => 'field_singular_featured_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|featured|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|file_search_by_date|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'file_search_by_date';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_label',
      1 => 'group_hidden',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|file_search_by_date|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|frequent_questions|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'frequent_questions';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_label',
      1 => 'field_content_types',
      2 => 'field_filter_parent_categorie',
      3 => 'group_hidden',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Información general',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-paragraph-main-information field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|frequent_questions|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|gallery|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_gallery',
      1 => 'field_label',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|image_link|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'image_link';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
      1 => 'field_link',
      2 => 'field_label',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|image_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|information_container_block|default';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'information_container_block';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Main information',
    'weight' => '2',
    'children' => array(
      0 => 'field_description',
      1 => 'field_paragraph_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Main information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-main-information field-group-div col-md-9',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|information_container_block|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|information_container_block|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'information_container_block';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_description',
      1 => 'field_image',
      2 => 'field_paragraph_title',
      3 => 'field_label',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|information_container_block|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|information_container|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'information_container';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '4',
    'children' => array(
      0 => 'field_label',
      1 => 'field_paragraph_sub_item_limit',
      2 => 'field_subparagraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|information_container|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|link_list|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'link_list';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_label',
      1 => 'field_subparagraphs',
      2 => 'field_title',
      3 => 'field_link',
      4 => 'field_icon',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Información general',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-paragraph-main-information field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|link_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|link|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'link';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_label',
      1 => 'field_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|list|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'list';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '5',
    'children' => array(
      0 => 'field_config_type',
      1 => 'field_items_limit',
      2 => 'field_label',
      3 => 'field_news_reference',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Información general',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-paragraph-main-information field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|map_imagen_text|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'map_imagen_text';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
      1 => 'field_label',
      2 => 'field_location',
      3 => 'field_tag',
      4 => 'field_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|map_imagen_text|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|multiple_compound_links|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'multiple_compound_links';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '3',
    'children' => array(
      0 => 'field_label',
      1 => 'field_title',
      2 => 'field_subparagraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|multiple_compound_links|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|news_search|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'news_search';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '2',
    'children' => array(
      0 => 'field_label',
      1 => 'group_hidden',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|news_search|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|newsletter|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'newsletter';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '2',
    'children' => array(
      0 => 'field_label',
      1 => 'field_short_description',
      2 => 'field_title',
      3 => 'group_hidden',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|newsletter|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|paragraph_text|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'paragraph_text';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_description',
      1 => 'field_label',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|paragraph_text|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|separator|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'separator';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_color_border',
      1 => 'field_color_text',
      2 => 'field_label',
      3 => 'field_paragraph_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|separator|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|slideshow|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'slideshow';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_gallery',
      1 => 'field_paragraph_title',
      2 => 'field_label',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|slideshow|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|switch|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'switch';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_label',
      1 => 'field_subparagraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|switch|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|tabs|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'tabs';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_label',
      1 => 'field_subparagraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Información general',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-paragraph-main-information field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|tabs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|text_link|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_link';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_description',
      1 => 'field_link',
      2 => 'field_label',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|text_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|text_video|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '3',
    'children' => array(
      0 => 'field_description',
      1 => 'field_label',
      2 => 'field_link',
      3 => 'field_title',
      4 => 'field_videos',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|text_video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|title_text_image|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'title_text_image';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '3',
    'children' => array(
      0 => 'field_description',
      1 => 'field_image',
      2 => 'field_title',
      3 => 'field_label',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|title_text_image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|title_text|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'title_text';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_description',
      1 => 'field_title',
      2 => 'field_label',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Información general',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-paragraph-main-information field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|title_text|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|two_columns|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '3',
    'children' => array(
      0 => 'field_label',
      1 => 'field_subparagraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Información general',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-paragraph-main-information field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|two_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|vertical_tabs|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'vertical_tabs';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_label',
      1 => 'field_subparagraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-main-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|vertical_tabs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_main_information|paragraphs_item|video|form';
  $field_group->group_name = 'group_paragraph_main_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Información general',
    'weight' => '1',
    'children' => array(
      0 => 'field_videos',
      1 => 'field_label',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_main_information|paragraphs_item|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_map|paragraphs_item|map_imagen_text|default';
  $field_group->group_name = 'group_paragraph_map';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'map_imagen_text';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Map',
    'weight' => '14',
    'children' => array(
      0 => 'field_location',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Map',
      'instance_settings' => array(
        'id' => 'drpl_map_google',
        'classes' => 'group-paragraph-map field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_map|paragraphs_item|map_imagen_text|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_options|paragraphs_item|column|form';
  $field_group->group_name = 'group_paragraph_options';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'column';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Opciones generales',
    'weight' => '7',
    'children' => array(
      0 => 'field_paragraph_title_to_menu',
      1 => 'field_paragraph_item_to_menu',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-options field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_options|paragraphs_item|column|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_options|paragraphs_item|two_columns|form';
  $field_group->group_name = 'group_paragraph_options';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Opciones generales',
    'weight' => '5',
    'children' => array(
      0 => 'field_paragraph_item_to_menu',
      1 => 'field_paragraph_title_to_menu',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-options field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_options|paragraphs_item|two_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_parent_fieldset|paragraphs_item|title_text|switch';
  $field_group->group_name = 'group_paragraph_parent_fieldset';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'title_text';
  $field_group->mode = 'switch';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fieldset',
    'weight' => '0',
    'children' => array(
      0 => 'field_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Fieldset',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-parent-fieldset field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_paragraph_parent_fieldset|paragraphs_item|title_text|switch'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_right|paragraphs_item|two_columns_double_text|default';
  $field_group->group_name = 'group_paragraph_right';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_columns_double_text';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Paragraph right column',
    'weight' => '9',
    'children' => array(
      0 => 'field_short_description_right',
      1 => 'field_description_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph right column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph-right field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_right|paragraphs_item|two_columns_double_text|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_tabs|paragraphs_item|title_text|tabs';
  $field_group->group_name = 'group_paragraph_tabs';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'title_text';
  $field_group->mode = 'tabs';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_tab',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_tabs|paragraphs_item|title_text|tabs'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_tabs|paragraphs_item|title_text|vertical_tabs';
  $field_group->group_name = 'group_paragraph_tabs';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'title_text';
  $field_group->mode = 'vertical_tabs';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_tab',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph-tabs field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_tabs|paragraphs_item|title_text|vertical_tabs'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_tab|paragraphs_item|title_text|tabs';
  $field_group->group_name = 'group_paragraph_tab';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'title_text';
  $field_group->mode = 'tabs';
  $field_group->parent_name = 'group_paragraph_tabs';
  $field_group->data = array(
    'label' => 'Tab',
    'weight' => '1',
    'children' => array(
      0 => 'field_title',
      1 => 'field_description',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Tab',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_tab|paragraphs_item|title_text|tabs'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_tab|paragraphs_item|title_text|vertical_tabs';
  $field_group->group_name = 'group_paragraph_tab';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'title_text';
  $field_group->mode = 'vertical_tabs';
  $field_group->parent_name = 'group_paragraph_tabs';
  $field_group->data = array(
    'label' => 'Tab',
    'weight' => '5',
    'children' => array(
      0 => 'field_title',
      1 => 'field_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Tab',
      'instance_settings' => array(
        'classes' => 'group-paragraph-tab field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_tab|paragraphs_item|title_text|vertical_tabs'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_tag|paragraphs_item|map_imagen_text|default';
  $field_group->group_name = 'group_paragraph_tag';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'map_imagen_text';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Tag',
    'weight' => '15',
    'children' => array(
      0 => 'field_tag',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tag',
      'instance_settings' => array(
        'id' => 'drpl_map_link',
        'classes' => 'group-paragraph-tag field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph_tag|paragraphs_item|map_imagen_text|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_visualization|paragraphs_item|button|form';
  $field_group->group_name = 'group_paragraph_visualization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'button';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Estilo',
    'weight' => '10',
    'children' => array(
      0 => 'field_color',
      1 => 'field_color_text',
      2 => 'field_color_border',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-visualization field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_visualization|paragraphs_item|button|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_visualization|paragraphs_item|call|form';
  $field_group->group_name = 'group_paragraph_visualization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'call';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Estilo',
    'weight' => '14',
    'children' => array(
      0 => 'field_color',
      1 => 'field_image',
      2 => 'field_paragraph_class_list',
      3 => 'field_background_type',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-visualization field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_visualization|paragraphs_item|call|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_visualization|paragraphs_item|carousel_banners|form';
  $field_group->group_name = 'group_paragraph_visualization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'carousel_banners';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Estilo',
    'weight' => '2',
    'children' => array(
      0 => 'field_paragraph_class_list',
      1 => 'field_paragraph_carousel_nav',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-visualization field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_visualization|paragraphs_item|carousel_banners|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_visualization|paragraphs_item|carousel|form';
  $field_group->group_name = 'group_paragraph_visualization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'carousel';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Estilo',
    'weight' => '2',
    'children' => array(
      0 => 'field_paragraph_carousel_nav',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-visualization field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_visualization|paragraphs_item|carousel|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_visualization|paragraphs_item|column|form';
  $field_group->group_name = 'group_paragraph_visualization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'column';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Estilo',
    'weight' => '6',
    'children' => array(
      0 => 'field_color',
      1 => 'field_paragraph_container_size',
      2 => 'field_paragraph_edge_to_edge',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-visualization field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_visualization|paragraphs_item|column|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_visualization|paragraphs_item|compound_information_block|form';
  $field_group->group_name = 'group_paragraph_visualization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'compound_information_block';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Estilo',
    'weight' => '7',
    'children' => array(
      0 => 'field_color',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-visualization field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_visualization|paragraphs_item|compound_information_block|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_visualization|paragraphs_item|featured_list|form';
  $field_group->group_name = 'group_paragraph_visualization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_list';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Estilo',
    'weight' => '3',
    'children' => array(
      0 => 'field_paragraph_class_list',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-visualization field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_visualization|paragraphs_item|featured_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_visualization|paragraphs_item|gallery|form';
  $field_group->group_name = 'group_paragraph_visualization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Estilo',
    'weight' => '3',
    'children' => array(
      0 => 'field_paragraph_class_list',
      1 => 'field_paragraph_gallery_type',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-visualization field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_visualization|paragraphs_item|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_visualization|paragraphs_item|information_container_block|form';
  $field_group->group_name = 'group_paragraph_visualization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'information_container_block';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Estilo',
    'weight' => '3',
    'children' => array(
      0 => 'field_paragraph_class_list',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-visualization field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_visualization|paragraphs_item|information_container_block|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_visualization|paragraphs_item|link_list|form';
  $field_group->group_name = 'group_paragraph_visualization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'link_list';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Estilo',
    'weight' => '3',
    'children' => array(
      0 => 'field_paragraph_class_list',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-visualization field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_visualization|paragraphs_item|link_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_visualization|paragraphs_item|link|form';
  $field_group->group_name = 'group_paragraph_visualization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'link';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Estilo',
    'weight' => '2',
    'children' => array(
      0 => 'field_color',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-visualization field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_visualization|paragraphs_item|link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_visualization|paragraphs_item|list|form';
  $field_group->group_name = 'group_paragraph_visualization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'list';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Estilo',
    'weight' => '6',
    'children' => array(
      0 => 'field_paragraph_class_list',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Estilo',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-paragraph-visualization field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_paragraph_visualization|paragraphs_item|list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_visualization|paragraphs_item|map_imagen_text|form';
  $field_group->group_name = 'group_paragraph_visualization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'map_imagen_text';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Estilo',
    'weight' => '2',
    'children' => array(
      0 => 'field_paragraph_edge_to_edge',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-visualization field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_visualization|paragraphs_item|map_imagen_text|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_visualization|paragraphs_item|multiple_compound_links|form';
  $field_group->group_name = 'group_paragraph_visualization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'multiple_compound_links';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Estilo',
    'weight' => '4',
    'children' => array(
      0 => 'field_color',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_visualization|paragraphs_item|multiple_compound_links|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_visualization|paragraphs_item|two_columns|form';
  $field_group->group_name = 'group_paragraph_visualization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph_information';
  $field_group->data = array(
    'label' => 'Estilo',
    'weight' => '4',
    'children' => array(
      0 => 'field_paragraph_class_list',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-visualization field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_visualization|paragraphs_item|two_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|accordion|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'accordion';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'field_subparagraphs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|accordion|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|action|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'action';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'group_paragraph_information',
      1 => 'group_paragraph_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|action|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|banner|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'banner';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'group_paragraph_banner',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|banner|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|block_reference|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'block_reference';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_block_reference',
      1 => 'field_views_reference',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|block_reference|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|button|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'button';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|button|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|button|paragraphs_editor_preview';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'button';
  $field_group->mode = 'paragraphs_editor_preview';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_label',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|button|paragraphs_editor_preview'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|calendar_block|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'calendar_block';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'field_block_reference',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|calendar_block|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|call|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'call';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'group_content',
      1 => 'group_paragraph_background',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|call|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|carousel_banners|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'carousel_banners';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_subparagraphs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|carousel_banners|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|carousel|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'carousel';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'field_subparagraphs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|carousel|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|column|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'column';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'field_subparagraphs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|column|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|compound_information_block|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'compound_information_block';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_icon',
      1 => 'field_link',
      2 => 'field_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|compound_information_block|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|compound_information|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'compound_information';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_subparagraphs',
      1 => 'field_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|compound_information|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|download_files|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'download_files';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'group_paragraph_download_files',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|download_files|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|events_search|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'events_search';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_link',
      1 => 'group_search',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|events_search|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|featured_events|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_events';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'field_block_reference',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|featured_events|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|featured_image|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_background',
      1 => 'group_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|featured_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|featured_list_entity|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_list_entity';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'field_block_reference',
      1 => 'field_title',
      2 => 'field_associated_entities',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|featured_list_entity|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|featured_list|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_list';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'field_featured_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|featured_list|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|featured|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_image',
      1 => 'group_paragraph_information',
      2 => 'group_paragraph_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|featured|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|file_search_by_date|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'file_search_by_date';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_block_reference',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|file_search_by_date|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|frequent_questions|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'frequent_questions';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_block_reference',
      1 => 'field_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|frequent_questions|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|gallery|coverflow';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'coverflow';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'group_paragraph_coverflow',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div slider_coverflow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|gallery|coverflow'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|gallery|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'field_gallery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|gallery|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|gallery|gallery';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'gallery';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'field_gallery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|gallery|gallery'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|image_link|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'image_link';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|image_link|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|information_container_block|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'information_container_block';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_image',
      1 => 'group_paragraph_main_information',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|information_container_block|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|information_container|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'information_container';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_subparagraphs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|information_container|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|link_list|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'link_list';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_subparagraphs',
      1 => 'field_link',
      2 => 'group_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|link_list|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|link|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'link';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|link|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|list|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'list';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'field_block_reference',
      1 => 'field_news_reference',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|list|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|map_imagen_text|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'map_imagen_text';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'group_paragraph_information',
      1 => 'group_paragraph_map',
      2 => 'group_paragraph_tag',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|map_imagen_text|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|multiple_compound_links|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'multiple_compound_links';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_subparagraphs',
      1 => 'field_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|multiple_compound_links|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|news_search|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'news_search';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_block_reference',
      1 => 'field_block_reference_v2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-fieldset',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|news_search|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|newsletter|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'newsletter';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'field_block_reference',
      1 => 'field_short_description',
      2 => 'field_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|newsletter|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|paragraph_text|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'paragraph_text';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|paragraph_text|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|separator|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'separator';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_paragraph_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-fieldset',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|separator|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|slideshow|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'slideshow';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'group_paragraph_coverflow',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div slider_coverflow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|slideshow|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|switch|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'switch';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'field_subparagraphs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|switch|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|tabs|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'tabs';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'field_subparagraphs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|tabs|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|text_link|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_link';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_description',
      1 => 'field_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|text_link|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|text_video|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'group_main_information',
      1 => 'group_multimedia',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|text_video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|title_text_image|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'title_text_image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_description',
      1 => 'field_image',
      2 => 'field_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|title_text_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|title_text_image|owl_carousel';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'title_text_image';
  $field_group->mode = 'owl_carousel';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_image',
      1 => 'group_paragraph_information',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|title_text_image|owl_carousel'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|title_text|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'title_text';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_title',
      1 => 'field_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|title_text|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|two_columns_double_text|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_columns_double_text';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_information',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|two_columns_double_text|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|two_columns|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_columns';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'field_subparagraphs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|two_columns|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|vertical_tabs|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'vertical_tabs';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'field_subparagraphs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|vertical_tabs|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|video|default';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraph',
    'weight' => '0',
    'children' => array(
      0 => 'field_videos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paragraph',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paragraph field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_search|paragraphs_item|events_search|default';
  $field_group->group_name = 'group_search';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'events_search';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Search block',
    'weight' => '13',
    'children' => array(
      0 => 'field_block_reference',
      1 => 'field_block_reference_v2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Search block',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-search field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_search|paragraphs_item|events_search|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title|paragraphs_item|link_list|default';
  $field_group->group_name = 'group_title';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'link_list';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Título',
    'weight' => '13',
    'children' => array(
      0 => 'field_title',
      1 => 'field_icon',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Título',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title field-group-div title-icon',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_title|paragraphs_item|link_list|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Accordion');
  t('Accordions');
  t('Background image');
  t('Banner');
  t('Content');
  t('Controls');
  t('Coverflow');
  t('Descarga de documentos');
  t('Estilo');
  t('Fieldset');
  t('Hidden');
  t('Image and background');
  t('Imagen');
  t('Información');
  t('Información general');
  t('Información general	');
  t('Información paragraph');
  t('Información paragraph	');
  t('Information');
  t('Link');
  t('Main information');
  t('Map');
  t('Multimedia');
  t('Opciones generales');
  t('Paragraph');
  t('Paragraph left column');
  t('Paragraph right column');
  t('Search block');
  t('Tab');
  t('Tabs');
  t('Tag');
  t('Título');

  return $field_groups;
}
