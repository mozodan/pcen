<?php
// add collapse functionality to paragraphs
function drpl_admin_preprocess_paragraphs_field_multiple_value_form(&$vars){
  // If they're named we simply array_flip the element_children() result first:
  $children = array_intersect_key($vars['element'], array_flip(element_children($vars['element'])));
  foreach ($children as $index=>$child) {
    if(empty($child['paragraph_bundle_title'])) continue;
    $title_markup = $child['paragraph_bundle_title']['info']['#markup'];
    $collapsible_id = 'collapsible-' . $child['#id'];
    $bundle_info = paragraphs_bundle_load($child['#bundle']);
    $info="<div class='eve_admin_paragraph_type'>".t('Type: %bundle', array('%bundle' => $bundle_info->name))."</div>";
    $child['paragraph_bundle_title']['#prefix'] = $info;
    $child['paragraph_bundle_title']['#prefix'] = '<a href="#' . $collapsible_id . '" class="eve_paragraph_collapsible" role="button" data-toggle="collapse" aria-expanded="true" aria-controls="' . $collapsible_id . '">';
    $child['paragraph_bundle_title']['#suffix'] = '</a>';
    // use paragraph titile field as title to show when collapsed
    if (!empty($child['field_label'][LANGUAGE_NONE][0]['value']['#value'])) {
        $child['paragraph_bundle_title']['info']['#markup']='<h5>'.$child['field_label'][LANGUAGE_NONE][0]['value']['#value'].'</h5>';
    }
    elseif (!empty($child['field_rich_title'][LANGUAGE_NONE][0]['value']['#value'])) {
      $richtitle=trim(strip_tags($child['field_rich_title'][LANGUAGE_NONE][0]['value']['#value']));
      $richtitle=preg_replace( "/\r\n\r\n|\r\n|\r|\n/", "-", $richtitle );
      if (drupal_strlen($richtitle) > 40) {
        $richtitle = drupal_substr($richtitle, 0, 37)."...";
      }
      $child['paragraph_bundle_title']['info']['#markup']='<h5>'.$richtitle.'</h5>';
    }
    $vars['element'][$index] = $child;
  }
  /*
   // If they're named we simply array_flip the element_children() result first:
  $children = array_intersect_key($vars['element'], array_flip(element_children($vars['element'])));
  foreach($children as $index=>$child){
    if(empty($child['paragraph_bundle_title'])) continue;
    $title_markup = $child['paragraph_bundle_title']['info']['#markup'];
    $collapsible_id = 'collapsible-' . $child['#id'];
    $child['paragraph_bundle_title']['#prefix'] = '<a href="#' . $collapsible_id . '" class="eve_paragraph_collapsible" role="button" data-toggle="collapse" aria-expanded="true" aria-controls="' . $collapsible_id . '">';
    $child['paragraph_bundle_title']['#suffix'] = '</a>';
    $vars['element'][$index] = $child;
  }*/
}