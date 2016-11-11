/**
 * @file
 * Defines the behavior of the paragraphs toggle.
 */
(function ($) {
// Preset for toggle buttons.
Drupal.behaviors.DRPLParagraphsTabsToggle = {
  attach: function (context) {
    $(".btn-toggle-less").hide();
    $(".btn-toggle-more").click(function(){
      $(this).parent().parent().parent().children('.collapse').slideToggle('slow', 'swing');
      $(this).fadeOut();
      $(this).parent().children('.btn-toggle-less').fadeIn();
      });
    $(".btn-toggle-less").click(function(){
      $(this).parent().parent().parent().children('.collapse').slideToggle('slow', 'swing');
      $(this).fadeOut();
      $(this).parent().children('.btn-toggle-more').fadeIn();
      });
  }
}
})(jQuery);
