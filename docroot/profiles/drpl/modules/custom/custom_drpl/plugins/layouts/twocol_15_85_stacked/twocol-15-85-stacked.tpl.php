<?php
/**
 * @file   twocol-15-85-stacked.tpl.php
 * @author António P. P. Almeida <appa@perusio.net>
 * @date   Tue Dec 18 09:15:00 2012
 *
 * @brief  Template for the 15/85 panels layout.
 *
 *
 */
?>
<div class="panel-display panel-twocol-15-85-stacked clear-block" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel line">
    <div class="panel-panel unit panel-col-hundred col-top">
      <div class="inside">
        <?php print $content['top']; ?>
      </div>
    </div>
    <div class="panel-panel unit col-md-3 col-xs-12 firstUnit col-left"> <!-- Class override col-sm: panel-col-fifteen -->
      <div class="inside">
        <?php print $content['left']; ?>
      </div>
    </div>
    <div class="panel-panel col-md-9 col-xs-12 lastUnit col-content col-right"> <!-- Class override col-sm: panel-col-eightyfive -->
      <div class="inside">
        <div class="panel-panel panel-col-hundred">
          <?php print $content['right_top']; ?>
          <?php print $content['right']; ?>
          <?php print $content['right_bottom_left']; ?>
          <?php print $content['right_bottom_right']; ?>
        </div>
        <!--
        <div class="panel-panel panel-col-hundred">
            <?php //print $content['right_top']; ?>
        </div>
        <div class="panel-panel panel-col-hundred">
            <div class="panel-panel panel-col-hundred">
              <?php //print $content['right']; ?>
            </div>
            <div class="panel-panel panel-col-hundred">
              <div class="panel-panel unit panel-col-fifty">
                <?php //print $content['right_bottom_left']; ?>
              </div>
              <div class="panel-panel lastUnit panel-col-fifty">
                <?php //print $content['right_bottom_right']; ?>
              </div>
            </div>
        </div>-->
      </div>
    </div>
  </div>
</div>

