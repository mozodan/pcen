<?php
/**
 * @file
 * drpl_news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function drpl_news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-administration-menu-tools_administrar-noticias:admin/news.
  $menu_links['menu-administration-menu-tools_administrar-noticias:admin/news'] = array(
    'menu_name' => 'menu-administration-menu-tools',
    'link_path' => 'admin/news',
    'router_path' => 'admin',
    'link_title' => 'Administrar noticias',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-menu-tools_administrar-noticias:admin/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Administrar noticias');

  return $menu_links;
}
