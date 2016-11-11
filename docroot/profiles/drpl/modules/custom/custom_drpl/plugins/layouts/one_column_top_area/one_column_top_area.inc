<?php
/**
 * @file   twocol_15_85_stacked.inc
 * @author António P. P. Almeida <appa@perusio.net>
 * @date   Sun Jul 24 20:41:58 2011
 *
 * @brief  One column with top area layout.
 *
 *
 */

// Plugin definition.
$plugin = array(
  'title' => t('One column with top area'),
  'category' => t('DRPL'),
  'icon' => 'one_column_top_area.png',
  'theme' => 'one_column_top_area',
  'css' => 'one_column_top_area.css',
  'regions' => array(
    'top' => t('Top'),
    'content' => t('Content'),
  ),
);
