<?php
/**
 * @file
 * Displays the items of the accordion.
 *
 * @ingroup views_templates
 *
 * Note that the accordion NEEDS <?php print $row ?> to be wrapped by an
 * element, or it will hide all fields on all rows under the first field.
 *
 * Also, if you use field grouping and use the headers of the groups as the
 * accordion headers, these NEED to be inside h3 tags exactly as below
 * (though you can add classes).
 *
 * The current div wraping each row gets two css classes, which should be
 * enough for most cases:
 *     "views-accordion-item"
 *      and a unique per row class like item-0
 */
?>
<link rel="stylesheet" href="//releases.flowplayer.org/6.0.5/skin/functional.css">
<script src="//releases.flowplayer.org/6.0.5/flowplayer.min.js"></script>
<script src="//releases.flowplayer.org/hlsjs/flowplayer.hlsjs.min.js"></script>
<?php if (!empty($title)): ?>
  <h3>
    <?php print $title; ?>
  </h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div class="<?php print $classes_array[$id]; ?>">
		<div data-live="true" data-ratio="0.5625" class="flowplayer fixed-controls">
			<video data-title="Live stream">
				<source type="application/x-mpegurl" src="<?php print $row; ?>">
		  </video>
		</div>
  </div>
<?php endforeach; ?>

