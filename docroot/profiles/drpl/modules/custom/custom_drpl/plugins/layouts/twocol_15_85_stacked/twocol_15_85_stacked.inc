<?php
/**
 * @file   twocol_15_85_stacked.inc
 * @author António P. P. Almeida <appa@perusio.net>
 * @date   Sun Jul 24 20:41:58 2011
 *
 * @brief  The two column 30/70 stacked layout.
 *
 *
 */

// Plugin definition.
$plugin = array(
  'title' => t('Two column 15/85 stacked'),
  'category' => t('DRPL'),
  'icon' => 'twocol_15_85_stacked.png',
  'theme' => 'twocol_15_85_stacked',
  'css' => 'twocol_15_85_stacked.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left'),
    'right_top' => t('Right Top'),
    'right' => t('Right content'),
    'right_bottom_left' => t('Right bottom left'),
    'right_bottom_right' => t('Right bottom right'),
  ),
);
