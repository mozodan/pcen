<?php
/**
 * @file
 * drpl_common_repository.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function drpl_common_repository_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Menú principal',
    'description' => 'El menú <em>Principal</em> se usa en muchos sitios web para mostrar las secciones principales del sitio, generalmente en una barra de navegación superior.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-administration-menu-tools.
  $menus['menu-administration-menu-tools'] = array(
    'menu_name' => 'menu-administration-menu-tools',
    'title' => 'Menú - Gestión',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-bottom.
  $menus['menu-bottom'] = array(
    'menu_name' => 'menu-bottom',
    'title' => 'Menú - Bottom',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-footer.
  $menus['menu-footer'] = array(
    'menu_name' => 'menu-footer',
    'title' => 'Menú - Footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-open-government.
  $menus['menu-open-government'] = array(
    'menu_name' => 'menu-open-government',
    'title' => 'Menú - Gobierno abierto',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-social-media.
  $menus['menu-social-media'] = array(
    'menu_name' => 'menu-social-media',
    'title' => 'Redes sociales',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('El menú <em>Principal</em> se usa en muchos sitios web para mostrar las secciones principales del sitio, generalmente en una barra de navegación superior.');
  t('Menú - Bottom');
  t('Menú - Footer');
  t('Menú - Gestión');
  t('Menú - Gobierno abierto');
  t('Menú principal');
  t('Redes sociales');

  return $menus;
}
