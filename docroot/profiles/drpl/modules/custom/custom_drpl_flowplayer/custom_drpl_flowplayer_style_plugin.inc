<?php
/**
 * @file
 * Provide an flowplayer style plugin for Views. This file is autoloaded by views.
 */

/**
 * Implements views_plugin_style().
 */
class custom_drpl_flowplayer_style_plugin extends views_plugin_style {
  /**
   * Set default options.
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['autoplay'] = array('default' => 0);
    return $options;
  }
   /**
   * {@inheritdoc}
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['autoplay'] = array(
      '#type' => 'checkbox',
      '#title' => t('Autoplay video'),
      '#default_value' => $this->options['autoplay'],
    );
  }
  /**
   * pre_render() necesary to prevent markup mayhem.
   */
  public function pre_render($result) {
  }

  /**
   * Render the display in this style.
   */
  public function render() {
    $output = '';
    $view_settings['autoplay'] = $this->options['autoplay'];
    $output = parent::render();
    return $output;
  }
}
