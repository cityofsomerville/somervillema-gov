define(function() {
  return function (window, document, $, undefined) {
    'use strict';

    var debug = false;

    function addClickHandler(el) {
      // Only attach the click handlers to lists with more than 6 items
      if ($(el).children('ul.link-list__items').children().length <= 6 ) {
        return false;
      }
      return true;
    }

    function showHideMore() {
      var classes = {
        parent    : "js-has-more",
        trigger   : "js-has-more--trigger",
        showAll   : "show-all",
        isExpanded: "is-expanded",
        fadeIn    : "fade-in"
      };

      if(debug) {
        console.log("The 'showHideMore()' function has been called.");
        console.log($('.' + classes.parent));
      }

      var $wrapper = $('.' + classes.parent);

      $wrapper.each(function() {
        if (addClickHandler(this)) {
          var $container = $(this);
          $container.find('.' + classes.trigger).click(function(event) {
            event.preventDefault();

            if ($container.hasClass(classes.isExpanded)) {
              // 'more' is already showing, so fade out and hide
              $container.toggleClass(classes.fadeIn);
              $container.toggleClass(classes.isExpanded);

              setTimeout(function() {
                // Wait for the fade (css), then hide the items
                $container.toggleClass(classes.showAll);
              }, 300);
            } else {
              // time to show more things!
              $container.toggleClass(classes.showAll);
              $container.toggleClass(classes.isExpanded);

              setTimeout(function() {
                $container.toggleClass(classes.fadeIn);
              }, 100);
            }
          });
        }
      });
    }

    function init() {
      // Call whatever you want to run at page load, here
      if(debug) {
        console.log('Greetings, from show-hide.js!');
      }
      showHideMore();
    }

    return {
      init: init
    };
  }(window,document,jQuery);
});
