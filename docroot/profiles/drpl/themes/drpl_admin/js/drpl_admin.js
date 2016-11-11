(function ($) {
  Drupal.behaviors.formtweaks = {
    attach: function (context, settings) {
      $('a.eve_paragraph_collapsible').once('add-collapsibles', function(){
        MakeCollapsibleParagraphs('collapse in');
      });
    }

  }

  function MakeCollapsibleParagraphs(classes) {
    $('a.eve_paragraph_collapsible').each(function() {
      $collapsibleLink = $(this);
      $id = $collapsibleLink.attr('aria-controls');

      if ($collapsibleLink.next().is('div.field-group-htabs-wrapper')) {
        // Horizontal Tabs Group.
        $collapsibleDiv = $collapsibleLink.next('div.field-group-htabs-wrapper');
      }
      else if ($collapsibleLink.next().is('div.form-wrapper')) {
        // Default fields wrapper.
        $collapsibleDiv = $collapsibleLink.next('div.form-wrapper');
      }

      $collapsibleDiv.attr('id', $id);
      $collapsibleDiv.addClass(classes);
    });
  }

})(jQuery);
