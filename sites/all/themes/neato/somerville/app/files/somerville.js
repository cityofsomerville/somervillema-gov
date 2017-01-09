var Somerville = Somerville || {};

define([
  './feedback',
  './google-map',
  './media-gallery',
  './show-hide',
  './sidebar-nav'
  ], function(feedback, googleMap, mediaGallery, showHide, sidebarNav) {
  Somerville.Main = function(window, document, $, undefined) {
    "use strict";

    function initAccordions(){
      $('.js-accordion-module').each(function(){
        var $el = $(this);
        // Add click event to the controls
        // if it is the contact side bar
        $el.find('.js-accordion-link').click(function(e){
          e.preventDefault();
          // toggle the expanded state
          $el.toggleClass('is-expanded').find('.js-accordion-content').stop(true,true).slideToggle();
        });
      });
    }
    if (window.innerWidth <= 830) {
        $('.contact-sb').addClass('is-expanded').children('.js-accordion-content').hide();

    }

    function init() {
      feedback.init();
      showHide.init();
      sidebarNav.init()
      googleMap.init();
      mediaGallery.init();
      initAccordions();
    }

    return {
      init:init
    };
  }(window, document, jQuery);
  return Somerville;
});
