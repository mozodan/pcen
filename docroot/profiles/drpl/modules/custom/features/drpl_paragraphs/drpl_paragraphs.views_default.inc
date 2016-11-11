<?php
/**
 * @file
 * drpl_paragraphs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mdrpl_paragraphs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'menu_categories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = '[Menu] - Temáticas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'live_category' => 'live_category',
  );

  /* Display: live_menu */
  $handler = $view->new_display('block', 'live_menu', 'live_menu');

  /* Display: enjoy_menu */
  $handler = $view->new_display('block', 'enjoy_menu', 'enjoy_menu');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'enjoy_category' => 'enjoy_category',
  );

  /* Display: invest_menu */
  $handler = $view->new_display('block', 'invest_menu', 'invest_menu');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'invest_category' => 'invest_category',
  );

  $translatables['menu_categories'] = array(
    t('Master'),
    t('more'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('live_menu'),
    t('enjoy_menu'),
    t('invest_menu'),
  );
  $export['menu_categories'] = $view;

  $view = new view();
  $view->name = 'newsletter_get_submission_by_id';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Entityform - Newsletter - Get submission by ID';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = '';
  /* Contextual filter: Entityform Submission: Email (field_email) */
  $handler->display->display_options['arguments']['field_email_email']['id'] = 'field_email_email';
  $handler->display->display_options['arguments']['field_email_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['arguments']['field_email_email']['field'] = 'field_email_email';
  $handler->display->display_options['arguments']['field_email_email']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_email_email']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['field_email_email']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_email_email']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_email_email']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_email_email']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_email_email']['limit'] = '0';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'newsletter' => 'newsletter',
  );
  $translatables['newsletter_get_submission_by_id'] = array(
    t('Master'),
    t('more'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('.'),
    t(','),
    t('Todo'),
  );
  $export['newsletter_get_submission_by_id'] = $view;

  return $export;
}
