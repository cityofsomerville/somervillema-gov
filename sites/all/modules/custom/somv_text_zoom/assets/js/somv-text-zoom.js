(function($) {
  this.sizeObj = {
    small: 'text-zoom-small',
    medium: 'text-zoom-medium',
    large: 'text-zoom-large'
  };
  var self = this;
  $(document).ready(function() {
    $html = $('html');
    $items = $html.find('.text-resizer__item');
    $.each($items, function(itemKey, item) {
      $item = $(item);
      $item.on('click', function(e) {
        var size = e.target.dataset.size;
        if (!$html.find(e.target).hasClass('is-active')) {
          removeZoomClasses($html);
          removeIsActive($items);
          $html.addClass(sizeObj[size]);
          $html.find(e.target).toggleClass('is-active');
        }
      });
    });
  });
  function removeZoomClasses($el) {
    $.each(sizeObj, function(k, size) {
      $el.removeClass(size);
    });
  }
  function removeIsActive(items) {
    $.each(items, function(key, item) {
      $(item).removeClass('is-active');
    });
  }
})(jQuery);