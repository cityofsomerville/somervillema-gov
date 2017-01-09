(function ($) {

/**
 * Auto-hide summary textarea if empty and show hide and unhide links.
 */
Drupal.behaviors.somvTextareaSummary = {
  attach: function (context, settings) {

    var init = $('.field-type-text-with-summary div.text-format-wrapper > fieldset.filter-wrapper input').val();
    $('.text-summary-wrapper select', $(this).closest('.text-format-wrapper')).val(init);

    $('.field-type-text-with-summary div.text-format-wrapper > fieldset.filter-wrapper select').change(function() {
       var value = $(this).val();
       $('.text-summary-wrapper select', $(this).closest('.text-format-wrapper')).val(value);
    });

    $('.text-summary', context).once('text-summary', function () {
      var $widget = $(this).closest('div.field-type-text-with-summary');
      var $summaries = $widget.find('div.text-summary-wrapper');

      $summaries.once('text-summary-wrapper').each(function(index) {
        var $summary = $(this);
        var $summaryLabel = $summary.find('label:first');
        var $full = $widget.find('.text-full').eq(index).closest('.form-item');
        var $fullLabel = $full.find('label:first');

        // Create a placeholder label when the field cardinality is
        // unlimited or greater than 1.
        if ($fullLabel.length == 0) {
          $fullLabel = $('<label></label>').prependTo($full);
        }

        // Setup the edit/hide summary link.
        var $link = $('<span class="field-edit-link">(<a class="link-edit-summary" href="#"><span class="link-edit-summary-text">' + Drupal.t('Hide summary') + '</span><span class="link-edit-summary-text" style="display:none;">' + Drupal.t('Edit summary') + '</span></a>)</span>').appendTo($summaryLabel);

        $link.on('click',
          function(e) {
            e.preventDefault();
            
            $summary.find('.cke_1', '.wysiwyg-toggle-wrapper', '.description').toggle();
            $summary.find('.description').toggle();
            $summary.find('.wysiwyg-toggle-wrapper').toggle();
            $summary.find('.form-textarea-wrapper').toggle();
            $summary.find('.link-edit-summary-text').toggle();
          }
        );
        return;
      });
    });
  }
};

})(jQuery);