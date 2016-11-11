<?php
/**
 * @file
 * drpl_common_repository.backup_migrate_exportables.inc
 */

/**
 * Implements hook_exportables_backup_migrate_destinations().
 */
function drpl_common_repository_exportables_backup_migrate_destinations() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'drpl';
  $item->name = 'DRPL';
  $item->subtype = 'file';
  $item->location = 'backups';
  $item->settings = array(
    'chmod' => '0777',
    'chgrp' => '',
  );
  $export['drpl'] = $item;

  return $export;
}

/**
 * Implements hook_exportables_backup_migrate_profiles().
 */
function drpl_common_repository_exportables_backup_migrate_profiles() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'drpl';
  $item->name = 'DRPL';
  $item->filename = '[site:name]';
  $item->append_timestamp = TRUE;
  $item->timestamp_format = 'Y-m-d\\TH-i-s';
  $item->filters = array(
    'compression' => 'gzip',
    'notify_success_enable' => 0,
    'notify_success_email' => 'aperedos@everis.com',
    'notify_failure_enable' => 0,
    'notify_failure_email' => 'aperedos@everis.com',
    'utils_site_offline' => 0,
    'utils_site_offline_message' => 'Comunidad de Madrid está desconectado por tareas de mantenimiento. Volvemos en muy breve. Gracias por su paciencia.',
    'utils_description' => '',
    'use_cli' => 0,
    'ignore_errors' => 0,
    'sources' => array(
      'db' => array(
        'exclude_tables' => array(),
        'nodata_tables' => array(
          'cache' => 'cache',
          'cache_admin_menu' => 'cache_admin_menu',
          'cache_block' => 'cache_block',
          'cache_bootstrap' => 'cache_bootstrap',
          'cache_field' => 'cache_field',
          'cache_filter' => 'cache_filter',
          'cache_form' => 'cache_form',
          'cache_image' => 'cache_image',
          'cache_menu' => 'cache_menu',
          'cache_page' => 'cache_page',
          'cache_path' => 'cache_path',
          'cache_views' => 'cache_views',
          'cache_views_data' => 'cache_views_data',
          'search_dataset' => 'search_dataset',
          'search_index' => 'search_index',
          'search_total' => 'search_total',
          'sessions' => 'sessions',
          'watchdog' => 'watchdog',
        ),
        'utils_lock_tables' => 0,
      ),
      'files' => array(
        'exclude_filepaths' => 'backup_migrate
styles
css
js
ctools
less
.svn',
      ),
      'archive' => array(
        'exclude_filepaths' => 'public://backup_migrate
public://styles
public://css
public://js
public://ctools
public://less
private://backup_migrate
sites/default/settings.php
/tmp
includes
misc
modules
scripts
themes
.editorconfig
.gitignore
authorize.php
cron.php
index.php
install.php
robots.txt
update.php
web.config
xmlrpc.php
sites/all
sites/example.sites.php
sites/README.txt
profiles/minimal
profiles/standard
profiles/testing
profiles/README.txt
.svn
.sql
backups',
      ),
    ),
  );
  $export['drpl'] = $item;

  return $export;
}
