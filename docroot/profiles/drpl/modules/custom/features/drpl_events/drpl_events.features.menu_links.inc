<?php
/**
 * @file
 * drpl_events.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function drpl_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-administration-menu-tools_administrar-eventos:admin/events.
  $menu_links['menu-administration-menu-tools_administrar-eventos:admin/events'] = array(
    'menu_name' => 'menu-administration-menu-tools',
    'link_path' => 'admin/events',
    'router_path' => 'admin',
    'link_title' => 'Administrar eventos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-menu-tools_administrar-eventos:admin/events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Administrar eventos');

  return $menu_links;
}
