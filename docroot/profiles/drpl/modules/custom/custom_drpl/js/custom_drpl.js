/**
 * @file
 * Defines the behavior of the paragraphs toggle.
 */
(function ($) {
  $( document ).ready(function() {
    var pathname = window.location.pathname;
    var links = $('a[href="' + pathname + '"]').click(function(event) {
      event.preventDefault();
    });
  });
})(jQuery);





