<?php
/**
 * @file
 * drpl_main_information.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function drpl_main_information_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-administration-menu-tools_administrar-informaciones-prcticas:admin/main-information.
  $menu_links['menu-administration-menu-tools_administrar-informaciones-prcticas:admin/main-information'] = array(
    'menu_name' => 'menu-administration-menu-tools',
    'link_path' => 'admin/main-information',
    'router_path' => 'admin/main-information',
    'link_title' => 'Administrar informaciones prácticas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-menu-tools_administrar-informaciones-prcticas:admin/main-information',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Administrar informaciones prácticas');

  return $menu_links;
}
