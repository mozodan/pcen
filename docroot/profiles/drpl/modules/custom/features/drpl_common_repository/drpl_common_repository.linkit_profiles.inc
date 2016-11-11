<?php
/**
 * @file
 * drpl_common_repository.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function drpl_common_repository_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'drpl';
  $linkit_profile->admin_title = 'DRPL';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '2';
  $linkit_profile->data = array(
    'search_plugins' => array(
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_page' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:comment' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_server' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_index' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:comment' => array(
      'result_description' => '',
      'bundles' => array(
        'comment_node_article' => 0,
        'comment_node_main_information' => 0,
        'comment_node_events' => 0,
        'comment_node_landing' => 0,
        'comment_node_regulations' => 0,
        'comment_node_news' => 0,
        'comment_node_publications' => 0,
        'comment_node_page' => 0,
        'comment_node_formalities' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'main_information' => 'main_information',
        'events' => 'events',
        'landing' => 'landing',
        'regulations' => 'regulations',
        'news' => 'news',
        'publications' => 'publications',
        'formalities' => 'formalities',
        'article' => 0,
        'page' => 0,
      ),
      'group_by_bundle' => 0,
      'include_unpublished' => 0,
    ),
    'entity:search_api_server' => array(
      'result_description' => '',
    ),
    'entity:search_api_index' => array(
      'result_description' => '',
    ),
    'entity:search_api_page' => array(
      'result_description' => '',
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'entity',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'tags' => 0,
        'enjoy_category' => 0,
        'invest_category' => 0,
        'live_category' => 0,
        'counseling' => 0,
        'municipalities' => 0,
        'provinces' => 0,
        'thematics' => 0,
        'open_government' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'plugin' => 'raw_url',
      'url_method' => '3',
    ),
    'attribute_plugins' => array(
      'target' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '1',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['drpl'] = $linkit_profile;

  return $export;
}
