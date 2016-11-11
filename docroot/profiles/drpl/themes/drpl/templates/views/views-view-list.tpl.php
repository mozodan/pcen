<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php print $wrapper_prefix; ?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php $class_ul = null; 
  if(isset($options['wrapper_class'])){
  	if(strpos($options['wrapper_class'], "coverflow-slider") !== false){
  		$class_ul = 'coverflow';
  	}
  }?>
  <<?php print $options['type'];?> class="<?php print $class_ul; ?>">
    <?php foreach ($rows as $id => $row): ?>
      <li class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></li>
    <?php endforeach; ?>
  </<?php print $options['type'];?>>
  <?php if(!empty($class_ul)): ?>
    <?php
    $coverflow_controls = block_load('custom_drpl_paragraphs', 'coverflow_controls'); 
    $coverflow_controls = _block_render_blocks(array($coverflow_controls));
    $coverflow_controls = _block_get_renderable_array($coverflow_controls);
    $coverflow_controls = drupal_render($coverflow_controls);     
    print $coverflow_controls;
    ?>
  <?php endif; ?>
  <?php print $wrapper_suffix; ?>
