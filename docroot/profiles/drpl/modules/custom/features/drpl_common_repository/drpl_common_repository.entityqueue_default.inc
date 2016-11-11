<?php
/**
 * @file
 * drpl_common_repository.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function drpl_common_repository_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'first_level_queue_highlighted_invest_category';
  $queue->label = 'First level queue destacados invertir';
  $queue->language = 'es';
  $queue->handler = 'simple';
  $queue->target_type = 'taxonomy_term';
  $queue->settings = array(
    'target_bundles' => array(
      'invest_category' => 'invest_category',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 1,
  );
  $export['first_level_queue_highlighted_invest_category'] = $queue;

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'first_level_queue_highlighted_live_category';
  $queue->label = 'First level queue destacados vivir';
  $queue->language = 'es';
  $queue->handler = 'simple';
  $queue->target_type = 'taxonomy_term';
  $queue->settings = array(
    'target_bundles' => array(
      'live_category' => 'live_category',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 1,
  );
  $export['first_level_queue_highlighted_live_category'] = $queue;

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'first_level_queue_secundary_invest_category';
  $queue->label = 'First level queue secundary invertir';
  $queue->language = 'es';
  $queue->handler = 'simple';
  $queue->target_type = 'taxonomy_term';
  $queue->settings = array(
    'target_bundles' => array(
      'invest_category' => 'invest_category',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 1,
  );
  $export['first_level_queue_secundary_invest_category'] = $queue;

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'first_level_queue_secundary_live_category';
  $queue->label = 'First level queue secundary vivir';
  $queue->language = 'es';
  $queue->handler = 'simple';
  $queue->target_type = 'taxonomy_term';
  $queue->settings = array(
    'target_bundles' => array(
      'live_category' => 'live_category',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 1,
  );
  $export['first_level_queue_secundary_live_category'] = $queue;

  return $export;
}
