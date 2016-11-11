<?php

/**
 * Implements hook_field_widget_info().
 */
function entity_reference_tree_field_widget_info() {
  return array(
    'entity_reference_tree' => array(
      'label' => 'Entity reference tree',
      'field types' => array('entityreference'),
      'behaviors' => array(
        'multiple values' => FIELD_BEHAVIOR_CUSTOM, 
        'default value' => FIELD_BEHAVIOR_DEFAULT,
      ),
      'settings' => array(
        'start_minimized' => 0,
        'leaves_only' => 0,
        'filter_view' => '',
        'filter_view_arg_type' => 0,
        'filter_view_arg_key' => '',
        'select_parents' => 0,
        'cascading_selection' => 0,
        'track_list' => 0,
        'token_display' => '',
        'allowed_ids' => '',
        'parent_id' => '',
        'max_depth' => '',
      ),
    ),
  );
}

/**
 * Implements hook_field_widget_settings_form().
 */
function entity_reference_tree_field_widget_settings_form($field, $instance) {
  $widget = $instance['widget'];
  $settings = $widget['settings'];
  $form = array();
  if ($widget['type'] == 'entity_reference_tree') {
    $form['start_minimized'] = array(
      '#type' => 'checkbox',
      '#title' => t('Start minimized'),
      '#description' => t('Make the tree appear minimized on the form by default'),
      '#default_value' => $settings['start_minimized'],
      '#return_value' => 1,
    );
    
    $form['leaves_only'] = array(
      '#type' => 'checkbox',
      '#title' => t('Leaves only'),
      '#description' => t("Don't allow the user to select items that have children"),
      '#default_value' => $settings['leaves_only'],
      '#return_value' => 1,
    );

    $form['select_parents'] = array(
      '#type' => 'checkbox',
      '#title' => t('Select parents automatically'),
      '#description' => t("When turned on, this option causes the widget to automatically select the ancestors of all selected items. In Leaves Only mode, the parents will be added invisibly to the selected value.  <em>This option is only valid if an unlimited number of values can be selected.</em>"),
      '#default_value' => $settings['select_parents'],
      '#element_validate' => array('_entity_reference_tree_select_parents_validate'),
      '#return_value' => 1,
    );

    $form['use_ajax'] = array(
      '#type' => 'checkbox',
      '#title' => t('Load children with ajax'),
      '#description' => t('This option is recommended for large taxonomy lists for better performance.'),
      '#default_value' => isset($settings['use_ajax']) ? $settings['use_ajax'] : 0,
      '#return_value' => 1,
    );

    $form['cascading_selection'] = array(
      '#type' => 'checkbox',
      '#title' => t('Cascading selection'),
      '#description' => t('On parent selection, automatically select children if none were selected. Some may then be manually unselected. In the same way, on parent unselection, unselect children if all were selected. <em>This option is only valid if an unlimited number of values can be selected.</em>'),
      '#default_value' => $settings['cascading_selection'],
      '#element_validate' => array('_entity_reference_tree_cascading_selection_validate'),
      '#return_value' => 1,
    );

    $form['filter_view'] = array(
      '#type' => 'hidden',
      '#value' => $settings['filter_view'],
    );

    $form['filter_view_arg_type'] = array(
      '#type' => 'hidden',
      '#value' => $settings['filter_view_arg_type'],
    );
    
    $form['filter_view_arg_key'] = array(
      '#type' => 'hidden',
      '#value' => $settings['filter_view_arg_key'],
    );

    $form['token_display'] = array(
      '#type' => 'hidden',
      '#value' => $settings['token_display'],
    );

    $form['track_list'] = array(
      '#type' => 'checkbox',
      '#title' => t('Track list'),
      '#description' => t('Track what the user has chosen in a list below the tree. Useful when the tree is large, with many levels.'),
      '#default_value' => $settings['track_list'],
      '#return_value' => 1,
    );
    
    $form['max_depth'] = array(
      '#type' => 'textfield',
      '#title' => t('Maximum Depth'),
      '#description' => t("Only show items up to this many levels deep."),
      '#default_value' => $settings['max_depth'],
      '#size' => 2,
      '#return_value' => 1,
    );    
    
    $form['parent_id'] = array(
      '#type' => 'textfield',
      '#title' => t('Parent Entity IDs'),
      '#description' => t("Only show items underneath the entity with this ID number.  Leave this field blank to not limit entities by parent."),
      '#default_value' => $settings['parent_id'],
      '#size' => 8,
      '#return_value' => 1,
    );    
  }

  return $form;
}

/**
 * Implements hook_field_widget_form().
 */
function entity_reference_tree_field_widget_form(&$form, &$form_state, $field, $instance, $langcode, $items, $delta, $element) {
  $settings = $instance['widget']['settings'];
  $value_key = key($field['columns']);
  $type = $instance['widget']['type'];
  $default_value = array();
  foreach ($items as $item) {
    $key = $item[$value_key];
    if ($key === 0) {
      $default_value[$key] = '0';
    }
    else {
      $default_value[$key] = $key;
    }
  }
  $multiple = $field['cardinality'] > 1 || $field['cardinality'] == FIELD_CARDINALITY_UNLIMITED;
  $properties = array();
  if (!array_key_exists('#value', $element)) {
    $element['#value'] = array();
  }
  switch ($instance['widget']['type']) {
    case 'entity_reference_tree':
      $element['#field'] = 'entity_reference_tree';
      $element['#attached']['js'] = array(drupal_get_path('module', 'entity_reference_tree') . '/entity_reference_tree.js');
      $element['#attached']['css'] = array(drupal_get_path('module', 'entity_reference_tree') . '/entity_reference_tree.css', drupal_get_path('module', 'entity_reference_tree') . '/entity_reference_tree.css');
      $element['#type'] = 'entity_tree';   
      $element['#default_value'] = $multiple ? $default_value : array(reset($default_value) => reset($default_value));
      $element['#max_choices'] = $field['cardinality'];
      $element['#max_depth'] = $settings['max_depth'];
      $element['#start_minimized'] = $settings['start_minimized'];
      $element['#leaves_only'] = $settings['leaves_only'];
      $element['#filter_view'] = module_exists('views') ? $settings['filter_view'] : '';
      $element['#filter_view_arg_type'] = module_exists('views') ? $settings['filter_view_arg_type'] : '';
      $element['#filter_view_arg_key'] = module_exists('views') ? $settings['filter_view_arg_key'] : '';
      $element['#select_parents'] = $settings['select_parents'];
      $element['#cascading_selection'] = $settings['cascading_selection'];
      $element['#track_list'] = $settings['track_list'];
      $element['#use_ajax'] = isset($settings['use_ajax']) ? (bool) $settings['use_ajax'] : FALSE;
      $element['#allowed_ids'] = ($settings['allowed_ids'] <> '') ? explode(',', str_replace(" ", "", $settings['allowed_ids'])) : array();
      $element['#allowed_bundles']['entity_type'] = $field['settings']['target_type'];
      $element['#allowed_bundles']['bundle_names'] = $field['settings']['handler_settings']['target_bundles'];
      $element['#allowed_bundles']['#parent_id'] = $settings['parent_id'] ? $settings['parent_id'] : 0;
      $element['#token_display'] = module_exists('token') ? $settings['token_display'] : '';
      $element['#target_entity'] = $field['settings']['target_type'];
      break;
  }
  $element += array(
    '#value_key' => $value_key,
    '#element_validate' => array('_entity_reference_tree_widget_validate'),
    '#properties' => $properties,
  );
  return $element;
}

function theme_entity_reference_tree_list($variables) {
  $element =& $variables['element'];
  $data =& $element['#data'];
  $tree = array();
  foreach ($data as $item) {
    $values = array();
    $id = $item[$element['#display']['settings']['target_id']];
    $original_id = $id;    
    while ($id != 0) {
      array_unshift($values, $id);
      $id = current(module_invoke_all('get_entity_parent', $element, $id));
    }
    $current =& $tree;
    foreach ($values as $id) {
      if (!isset($current['children'][$id])) {
        $current['children'][$id] = array('selected' => FALSE);
      }
      if ($id == $original_id) {
        $current['children'][$id]['selected'] = TRUE;
      }
      $current['children'][$id]['id'] = $id;
      $current =& $current['children'][$id];
    }
  }
  $output = "<div class='entity-tree-list'>";
    $output .= _entity_reference_tree_output_list_level($element, $tree);
  $output .= "</div>";
  return $output;
}

function _entity_reference_tree_output_list_level(&$element, &$tree) {
  if (isset($tree['children']) && is_array($tree['children']) && count($tree['children'] > 0)) {
    $output = '<ul class="entity">';
    $settings = $element['#display']['settings'];
    $tokens_selected = $settings['token_display_selected'];
    $tokens_unselected = ($settings['token_display_unselected'] != '') ? $settings['token_display_unselected'] : $tokens_selected;

    $entity_info = entity_get_info($settings['target_entity']);
    foreach ($tree['children'] as &$item) {
      $entity = $entity_info['load hook']($item['id']);
      $uri = $entity_info['uri callback']($entity);
      $uri['options']['html'] = TRUE;
      $class = $item['selected'] ? 'selected' : 'unselected';
      $output .= "<li class='$class'>";
      if ($tokens_selected != '' && module_exists('token')) {
        $replace = $item['selected'] ? $tokens_selected : $tokens_unselected;
        $output .= token_replace($replace, array('entity' => $entity), array('clear' => TRUE));
      }
      else {
        $output .= l(entity_label($settings['target_entity'], $entity), $uri['path'], $uri['options']);
      }
      if (isset($item['children'])) {
        $output .= _entity_reference_tree_output_list_level($element, $item);
      }
      $output .= "</li>";
    }
    $output .= '</ul>';
    return $output;
  }
}

function _entity_reference_tree_select_parents_validate($element, &$form_state) {
  if ($form_state['values']['instance']['widget']['settings']['select_parents'] == 1 && $form_state['values']['field']['cardinality'] != -1) {
    form_set_error('field][cardinality', t('You must select an Unlimited number of values if Select Parents Automatically is enabled.'));
  }
}

function _entity_reference_tree_cascading_selection_validate($element, &$form_state) {
  if ($form_state['values']['instance']['widget']['settings']['cascading_selection'] == 1 && $form_state['values']['field']['cardinality'] != -1) {
    form_set_error('field][cardinality', t('You must select an Unlimited number of values if Cascading selection is enabled.'));
    if ($form_state['values']['instance']['widget']['settings']['use_ajax'] == 1) {
      form_set_error('instance[widget][settings][use_ajax', t('You must deselect the use of ajax for loading children if you need cascading selection.'));
    }
  }
}

function entity_reference_tree_process_entity_tree($element, $form_state) {
  if (is_array($form_state)) {
    if (!empty($element['#max_choices']) && $element['#max_choices'] != '-1') {
      drupal_add_js(array('entity_reference_tree' => array('trees' => array($element['#id'] => array('max_choices' => $element['#max_choices'])))), 'setting');
    }
    $allowed = '';
    if ($element['#filter_view'] != '') {
      $allowed = _entity_reference_tree_get_allowed_values($element);
    }
    $entity_info = entity_get_info($element['#target_entity']);
    $value = !empty($element['#default_value']) ? $element['#default_value'] : array();
    if (empty($element['#options'])) {
      $element['#options_tree'] = module_invoke_all('get_entity_hierarchy', $element, $allowed, $value);
      $required = $element['#required'];
      if ($element['#max_choices'] == 1 && !$required) {
        array_unshift($element['#options_tree'], (object) array(
          $entity_info['entity keys']['id'] => '',
          $entity_info['entity keys']['label'] => 'N/A',
          'depth' => 0,
        ));
      }
      $element['#options'] = _entity_reference_tree_get_options($element['#options_tree'], $allowed, $element['#filter_view'], $entity_info['entity keys']['id'], $entity_info['entity keys']['label']);
    }
    $entities = !empty($element['#options_tree']) ? $element['#options_tree'] : array();
    $max_choices = !empty($element['#max_choices']) ? $element['#max_choices'] : 1;
    if (array_key_exists('#select_parents', $element) && $element['#select_parents']) {
      $element['#attributes']['class'][] = 'select-parents';
    }
    if ($max_choices != 1) {
      $element['#tree'] = TRUE;
    }
    $tree = new stdClass();
    $tree->children = $entities;
    $element[] = _entity_reference_tree_build_level($element, $tree, $form_state, $value, $max_choices, array(), 1);
    $track_list = !empty($element['#track_list']) && $element['#track_list'];
    if ($track_list) {
      $element[] = array(
        '#type' => 'entity_tree_track_list',
        '#max_choices' => $max_choices,
      );
    }
  }
  return $element;
}

function theme_entity_tree($variables) {
  $element = $variables['element'];
  $element['#children'] = drupal_render_children($element);
  $attributes = array();
  if (isset($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  $attributes['class'][] = 'entity-reference-tree';
  if (form_get_error($element)) {
    $attributes['class'][] = 'error';
  }
  if (!empty($element['#required'])) {
    $attributes['class'][] = 'required';
  }
  if (array_key_exists('#start_minimized', $element) && $element['#start_minimized']) {
    $attributes['class'][] = "entity-reference-tree-start-minimized";
  }
  if (array_key_exists('#cascading_selection', $element) && $element['#cascading_selection']) {
    $attributes['class'][] = "entity-reference-tree-cascading-selection";
  }
  $add_track_list = FALSE;
  if (array_key_exists('#track_list', $element) && $element['#track_list']) {
    $attributes['class'][] = "entity-reference-tree-track-list-shown";
    $add_track_list = TRUE;
  }
  if (!empty($element['#attributes']['class'])) {
    $attributes['class'] = array_merge($attributes['class'], $element['#attributes']['class']);
  }
  return 
      '<div' . drupal_attributes($attributes) . '>' 
    . (!empty($element['#children']) ? $element['#children'] : '') 
    . '</div>';
}

function theme_entity_tree_level($variables) {
  $element = $variables['element'];
  $sm = '';
  if (array_key_exists('#level_start_minimized', $element) && $element['#level_start_minimized']) {
    $sm = " style='display: none;'";
  }
  $max_choices = 0;
  if (array_key_exists('#max_choices', $element)) {
    $max_choices = $element['#max_choices'];
  }
  $output = "<ul class='entity-reference-tree-level '$sm>";
  $children = element_children($element);
  foreach ($children as $child) {
    $output .= "<li>";
    $output .= drupal_render($element[$child]);
    $output .= "</li>";
  }
  $output .= "</ul>";
  return $output;
}

function theme_entity_tree_item($variables) {
  $element = $variables['element'];
  $children = element_children($element);
  $output = "";
  $sm = $element['#level_start_minimized'] ? ' entity-reference-tree-collapsed' : '';
  if (is_array($children) && count($children) > 1) {
    $output .= "<div class='entity-reference-tree-button$sm'></div>";
  }
  elseif (!$element['#leaves_only']) {
    $output .= "<div class='no-entity-reference-tree-button'></div>";
  }
  foreach ($children as $child) {
    $output .= drupal_render($element[$child]);
  }
  return $output;
}

function theme_entity_tree_label($variables) {
  $element = $variables['element'];
  $output = "<div class='parent-entity'>" . $element['#value'] . "</div>";
  return $output;
}

function theme_entity_tree_track_list($variables) {
  static $nothingselected;
  if (!$nothingselected) {
    $nothingselected = t('[Nothing selected]');
    drupal_add_js(
      'var entityReferenceTreeNothingSelectedText = "' . $nothingselected . '";',
      'inline'
    );
  }
  $label = format_plural(
      $variables['element']['#max_choices'],
      'Selected item (click the item to uncheck it)',
      'Selected items (click an item to uncheck it)'
  );
  $output = '<div class="entity-reference-track-list-container">';
  $output .= '<div class="entity-reference-track-list-label">' . $label . '</div>';
  $output .= '<ul class="entity-reference-tree-track-list"><li class="entity_ref_tree_nothing_message">' . $nothingselected . '</li></ul>';
  $output .= '</div>';
  return $output;
}

function _entity_reference_tree_widget_validate(&$element, &$form_state) {
  $items = _entity_reference_tree_flatten($element, $form_state);
  $value = array();
  if ($element['#max_choices'] != 1) {
    foreach ($items as $child) {
      if (!empty($child['#value'])) {
        array_push($value, array($element['#value_key'] => $child['#value']));
        if ($element['#select_parents'] && $element['#leaves_only']) {
          foreach ($child['#parent_values'] as $parent_id) {
            if (!in_array(array($element['#value_key'] => $parent_id), $value)) {
              array_push($value, array($element['#value_key'] => $parent_id));
            }
          }
        }
      }
    }
  }
  else {
    if (count($items) > 0) {
      $child = reset($items);
      if (!empty($child['#value'])) {
        array_push($value, array($element['#value_key'] => $child['#value']));
      }
    }
  }
  if ($element['#required'] && empty($value)) {
    form_error($element, t('!name field is required.', array('!name' => $element['#title'])));
  }
  form_set_value($element, $value, $form_state);
  return $element;
}

function _entity_reference_tree_get_allowed_values($element) {
  $filter = $element['#filter_view'];
  $arg_type = $element['#filter_view_arg_type'];
  $arg_value = $element['#filter_view_arg_key'];
  $entity_info = entity_get_info($element['#target_entity']);
  $id = $entity_info['entity keys']['id'];
  $viewname = "";
  $displayname = "";
  $args = "";
  $allowed = array();
  $viewname = "";
  $displayname = "";
  if ($arg_type == 1 && is_numeric($arg_value)) $args = arg($arg_value);
  if ($arg_type == 2 && $arg_value<>'' && isset($_REQUEST[$arg_value])) {
    if (is_array($_REQUEST[$arg_value])) {
      foreach ($_REQUEST[$arg_value] as $k => $arg) {
        $args .= $arg;
        if ($k < count($arg)-1) $args .= ',';
      }
    }
    else {
      $args = $_REQUEST[$arg_value];
    }
  }

  if (module_exists('views') && $filter != '') {
    list($viewname, $displayname) = explode(":", $filter);
    $view = views_get_view($viewname);
    if (is_object($view)) {
      if ($view->access($displayname)) {
        $title = drupal_get_title();
        $view->execute_display($displayname);
        $title = drupal_set_title($title, PASS_THROUGH);
        foreach ($view->result as $item) {
          $allowed[$item->{$id}] = TRUE;
        }
      }
      else {
        drupal_set_message(t("Cannot access view for entity reference tree widget."), 'warning');
      }
    }
    else {
      drupal_set_message(t("Entity reference tree: no view named"), 'warning');
    }
  }

  return $allowed;
}

function _entity_reference_tree_build_item(&$element, &$entity, $form_state, $value, $max_choices, $parent_ids, $parent, $depth) {
  $entity_info = entity_get_info($element['#target_entity']);
  $id = $entity_info['entity keys']['id'];
  $start_minimized = FALSE;
  if (array_key_exists('#start_minimized', $element)) {
    $start_minimized = $element['#start_minimized'];
  }
  $leaves_only = FALSE;
  if (array_key_exists('#leaves_only', $element)) {
    $leaves_only = $element['#leaves_only'];
  }
  $entity_name = $entity->{$entity_info['entity keys']['label']};
  $container = array(
    '#type' => 'entity_tree_item',
    '#max_choices' => $max_choices,
    '#leaves_only' => $leaves_only,
    '#entity_name' => $entity_name,
    '#level_start_minimized' => FALSE,
    '#depth' => $depth,
  );

  if (!$element['#leaves_only'] || count($entity->children) == 0) {
    $name = "edit-" . str_replace('_', '-', $element['#field_name']);
    if (!$element['#allowed_ids'] || in_array($entity->{$id}, $element['#allowed_ids'])) {
      $e = array(
        '#type' => ($max_choices == 1) ? 'radio' : 'checkbox',
        '#title' => $entity_name,
        '#on_value' => $entity->{$id},
        '#off_value' => 0,
        '#return_value' => $entity->{$id},
        '#parent_values' => $parent_ids,
        '#default_value' => isset($value[$entity->{$id}]) ? $entity->{$id} : NULL,
        '#attributes' => isset($element['#attributes']) ? $element['#attributes'] : NULL,
        '#ajax' => isset($element['#ajax']) ? $element['#ajax'] : NULL,
      );
    }
    else {
      $e = array(
        '#type' => 'markup',
        '#suffix' => $entity_name,
      );
    }
    if ($element['#token_display'] != '' && module_exists('token')) {
      $ent = entity_load($entity->type, $entity->{$id});
      $e['#title'] = token_replace($element['#token_display'], array('entity' => $ent), array('clear' => TRUE));
    }

    if ($e['#type'] == 'radio') {
      $parents_for_id = array_merge($element['#parents'], array($entity->{$id}));
      $e['#id'] = drupal_html_id('edit-' . implode('-', $parents_for_id));
      $e['#parents'] = $element['#parents'];
    }
  }
  else {
    $e = array(
      '#type' => 'entity_tree_label',
      '#value' => $entity->name,
    );
  }
  $container[$entity->{$id}] = $e;
  if (($depth + 1 <= $element['#max_depth'] || !$element['#max_depth']) && property_exists($entity, 'children') && count($entity->children) > 0) {
    $parents = $parent_ids;
    $parents[] = $entity->{$id};
    $container[$entity->{$id} . '-children'] = _entity_reference_tree_build_level($element, $entity, $form_state, $value, $max_choices, $parents, $depth+1);
    $container['#level_start_minimized'] = $container[$entity->{$id} . '-children']['#level_start_minimized'];
  }
  return $container;
}

function _entity_reference_tree_build_level($element, $entity, $form_state, $value, $max_choices, $parent_ids, $depth) {
  $entity_info = entity_get_info($element['#target_entity']);
  $start_minimized = FALSE;
  if (array_key_exists('#start_minimized', $element)) {
    $start_minimized = $element['#start_minimized'];
  }
  $leaves_only = FALSE;
  if (array_key_exists('#leaves_only', $element)) {
    $leaves_only = $element['#leaves_only'];
  }
  if ($element['#target_entity'] == 'node') {
    $id_target = 'nid';
    $name_target = 'node';
  }
  elseif ($element['#target_entity'] == 'taxonomy_term') {
    $id_target = 'tid';
    $name_target = 'term';
  }
  if ($entity->children) {
    if (is_array($entity->children)) {
      $container = array(
        '#type' => 'entity_tree_level',
        '#max_choices' => $max_choices,
        '#leaves_only' => $leaves_only,
        '#start_minimized' => $start_minimized,
        '#depth' => $depth,
      );
      $container['#level_start_minimized'] = $depth > 1 && $element['#start_minimized'] && !($entity->children_selected);
      foreach ($entity->children as $child) {
        $container[$child->{$entity_info['entity keys']['id']}] = _entity_reference_tree_build_item($element, $child, $form_state, $value, $max_choices, $parent_ids, $container, $depth);
      }
    }
    else {
      dpm($entity);
      $id = drupal_html_id('entity-reference-tree-widget-level-ajax-' . $entity->{$id_target});
      $container['#type'] = 'container';
      $container['#attributes']['id'] = $id;
      $container['#attributes']['class'][] = 'entity-reference-tree-widget-level-ajax';
      $container['load_children_' . $entity->{$id_target}] = array(
        '#type' => 'button',
        '#attributes' => array('class' => array('entity-reference-tree-widget-level-ajax-button')),
        '#value' => 'load children ' . $entity->{$id_target},
        '#limit_validation_errors' => array(),
        '#term' => $entity,
        '#ajax' => array(
          'wrapper' => $id,
          'callback' => 'entity_reference_tree_children_callback',
        ),
      );
    }  
  }
  return $container;
}
