
//# sourceMappingURL=maps/scripts.js.map

jQuery(document).ready( function($) {
  
/*
  jQuery('select.form-select').not('#edit-gss-filter-sites-options-block--2, #edit-gss-filter-sites-options-block, .not-front #edit-gss-filter-sites-options-block--3').select2({
    
  });
*/
if (Function('/*@cc_on return document.documentMode===10@*/')()){
    $('html').removeClass('flexbox').addClass('no-flexbox');
}

  
  
  $('.anchor').click(function(){
    $('html, body').animate({
        scrollTop: $( $.attr(this, 'href') ).offset().top
    }, 500);
    return false;
  });

if (window.innerWidth <= 690) {
    $('.google-translate').appendTo('.global-nav__item-wrapper .share-tools-container');
}

$(window).on('resize', function(){
  if (window.innerWidth <= 690) {
    $('.google-translate').appendTo('.global-nav__item-wrapper .share-tools-container');
  } else {
    $('.google-translate').appendTo('.share-tools-wrapper');
  }
});

function changeGoogleStyles() {
    if(($goog = $('.goog-te-menu-frame').contents().find('body')).length) {
        var stylesHtml = '<style>'+
            '.goog-te-menu2 {'+
                'max-width:500px !important;'+
                'overflow:scroll !important;'+
                'box-sizing:border-box !important;'+
                'height:auto !important;'+
            '}'+
        '</style>';
        $goog.prepend(stylesHtml);
    } else {
        setTimeout(changeGoogleStyles, 50);
    }
}
    changeGoogleStyles();

});