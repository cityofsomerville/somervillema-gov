define(function() {
  return function (window, document, $, undefined) {
    'use strict';

    var mediaGalleryClass = 'js-media-gallery-carousel',
      mediumBreakpoint,
      narrowView = true,
      hasCarousel = false,
      carousels = new Array();

    function initSlider($el){
      console.log('in initSlider', $el.hasClass('use-carousel'));
      var slider;
      console.log('window.innerWidth < mediumBreakpoint', window.innerWidth < mediumBreakpoint);
      console.log(window.innerWidth, mediumBreakpoint);
      // if the browser is narrow 
      if(window.innerWidth < mediumBreakpoint || $el.hasClass('use-carousel') && !hasCarousel){
        // create the slider
        slider = createSlider($el);
        hasCarousel = true;
      } else {
        // otherwise record the browser is wide
        narrowView = false;
      }
      $( window ).resize(function() {
        // if we cross into the narrow view
        if(!narrowView && window.innerWidth < mediumBreakpoint && !hasCarousel){
          // create the slider
          slider = createSlider($el);
          // otherwise record the browser is narrow
          narrowView = true;
          hasCarousel = true;
        } 
        // if we cross into the wide view
        if(narrowView && window.innerWidth >= mediumBreakpoint && !$el.hasClass('use-carousel')){
          // destroy the slider
          slider.destroySlider();
          // otherwise record the browser is wide
          narrowView = false;
        }

      });

      //$el.data('carousel-index',carousels.length);
      //carousels.push(temp);
    }
    function createSlider($el) {
      return $el.bxSlider({
          pager: false,
          slideMargin: 40,
          slideWidth: 900,
          //maxSlides:3
        })
        .removeClass('hidden');
    }
    function destorySlider(index) {
      carousels[index].destorySlider();
    }

    function init() {
      console.log('init media gallery');
      //wait for the DOM to be ready
      $(function(){
        // set the medium break point value
        mediumBreakpoint = $('.breakpoint-m-min').width();
        console.log('mediumBreakpoint', mediumBreakpoint);
        // for each media gallery on the page
        $('.' + mediaGalleryClass).each(function(){
          initSlider($(this));
        });
      });
    }

    return {
      init:init
    };

  }(window, document, jQuery);
});
