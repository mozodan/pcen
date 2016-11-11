<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

/**
 * template_menu_link()
 */
function drpl_menu_link(array $variables) {
  $element = $variables['element'];
  //Add class to menu link <li> in main menu
  
  if ($element['#theme'] == 'menu_link__main_menu') {
  	$element['#attributes']['class'][] = 'col-md-3 col-xs-12';
  }
  elseif ($element['#theme'] == 'menu_link__menu_social_media') {
  	if (isset($element['#localized_options']['menu_icon']) && $element['#localized_options']['menu_icon']['enable'] > 0) {
  		$element['#title'] = '';
  	}
  }
  return '<li' . drupal_attributes($element['#attributes']) . '>' . l($element['#title'], $element['#href'], $element['#localized_options']) . "</li>\n";
}