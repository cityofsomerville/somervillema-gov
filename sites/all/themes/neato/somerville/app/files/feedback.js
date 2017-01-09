define(function() {
  return function (window, document, $, undefined){
    'use strict';
    var debug = false;

    function toggleFeedback() {
      var $page = $('.page');

      $page.find('.js-leave-feedback-link').click(function(){
        $page.find(this).parent().toggleClass('is-visible');
      });
    }

    function init() {
      if (debug) {
        console.log('Hello from the feedback.js init()');
      }
      toggleFeedback();
    }

    return {
      init: init
    };
  }(window,document,jQuery);
});
