<?php
/**
 * @file   twocol-15-85-stacked.tpl.php
 * @author António P. P. Almeida <appa@perusio.net>
 * @date   Tue Dec 18 09:15:00 2012
 *
 * @brief  Template for the one column top area panels layout.
 *
 *
 */
?>
<div class="panel-display panel-one-column-top-area clear-block" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel line">
    <div class="panel-panel unit panel-col-hundred col-top">
      <div class="inside">
        <?php print $content['top']; ?>
      </div>
    </div>
    <div class="panel-panel unit panel-col-hundred firstUnit col-content">
      <div class="inside">
        <?php print $content['content']; ?>
      </div>
    </div>
  </div>
</div>

