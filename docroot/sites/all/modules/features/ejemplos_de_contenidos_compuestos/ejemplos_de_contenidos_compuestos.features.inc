<?php
/**
 * @file
 * ejemplos_de_contenidos_compuestos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ejemplos_de_contenidos_compuestos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
