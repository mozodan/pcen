<?php
  
/**
* @file
* Contains Batch API callbacks used during installation.
*/

/**
 * BatchAPI callback.
 *
 * @see drpl_install_additional_modules()
 */
function _drpl_enable_theme($theme, $theme_disable, &$context) {
  theme_enable(array($theme));
  variable_set('theme_default', $theme);
  theme_disable(array($theme_disable));
  $context['message'] = st('Installed the default theme.');
}

/**
 * BatchAPI callback.
 *
 * @see drpl_install_additional_modules()
 */
function _drpl_enable_module($module, $module_name, &$context) {
  module_enable(array($module), FALSE);
  $context['message'] = st('Installed %module module.', array('%module' => $module_name));
}
