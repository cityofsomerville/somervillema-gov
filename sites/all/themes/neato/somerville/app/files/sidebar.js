(function ($) {
  $(document).ready(function () {
    $body = $('body');
    // Due to limitations of the Context module, we can't load a block into two
    // regions. So, we clone the blocks here.
    if ($body.find('.node-type-organizational-unit') || $body.find('.node-type-programs-initiatives')) {
      var social = $body.find('.block-bean-somerville-social-stream').first().clone();
      var flinks = $body.find('.block-bean-filtered-links');
      var cross = $body.find('.field-name-field-org-unit-cross-promotion').clone();
      var resources = $body.find('.block-views-departments-listing-ul-block-2');
      var divisions = $body.find('.block-views-departments-listing-ul-block-1');
      var divisionsClone = divisions.first().clone();
      var related = $body.find('.sidebar-mobile .related-links.additional-resources');

      if (!flinks.find('.empty').length) {
        var flinksClone = flinks.first().clone();
      } else {
        flinks.css('display','none');
      }

      if (!resources.find('.empty').length) {
        var resourcesClone = resources.first().clone();
        resourcesClone.find('.resources-links').css('display', 'block');
      } else {
        resources.css('display','none');
      }

      if (related.length) {
        var relatedClone = related.clone();
        relatedClone.appendTo('.page_bottom_100.sidebar-mobile').show();
      }

      if (!flinks.find('.empty').length) {
        flinksClone.appendTo('.page_bottom_100.sidebar-mobile')
          .addClass('related-links')
          .css('margin-bottom', '20px');
        flinksClone.find('.fa').hide();
        flinksClone.show();
      }

      divisionsClone.find('.related-links').css('display', 'block');
      divisionsClone.appendTo('.page_bottom_100.sidebar-mobile').css('display', 'block');

      if (!resources.find('.empty').length) {
        resourcesClone.appendTo('.page_bottom_100.sidebar-mobile').css('display', 'block');
      }

      social.appendTo('.page_bottom_100.sidebar-mobile');
      cross.prependTo('.content_below_75.sidebar-mobile');
    }
  });
})(jQuery);
