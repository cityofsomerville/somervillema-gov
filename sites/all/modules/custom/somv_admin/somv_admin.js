(function($) {
    $(document).ready(function() {
      var $el = $('.node-official-form');
      var field = '.field-name-field-';
      var selector = field + 'official-ward,'+
        field + 'official-address-1,'+
        field + 'official-city,'+
        field + 'official-state,'+
        field + 'official-zip-code,'+
        field + 'official-committees,'+
        field + 'official-photo,'+
        field + 'photo-label,'+
        field + 'official-ward-map';
      var aldermanPositionSelector = field + 'official-alderman-position';
      var schoolPositionSelector = field + 'official-school-position';
      var opts = {
        sel : selector,
        ald : aldermanPositionSelector,
        sch : schoolPositionSelector
      };

      hideAll($el, opts);
      
      // When selecting a Type, show the appropriate fields
      $el.find('#edit-field-type-und').change(function(data) {
        var selected = $(this).find("option:selected").text();

        if (selected === 'Alderman' || selected === 'School Committee Member' || selected === 'Mayor') {
          if (selected === 'Alderman' || 'Mayor') {
            $el.find(schoolPositionSelector).hide();
            $el.find(aldermanPositionSelector).show();
          }
          if (selected === 'School Committee Member') {
            $el.find(aldermanPositionSelector).hide();
            $el.find(schoolPositionSelector).show();
          }
          $el.find(selector).show();
        } else {
          hideAll($el, opts);
        }
      });
    })
    function hideAll($el, opts) {
      $el.find(opts.sel + ',' + opts.ald + ',' + opts.sch).hide();
    }
  })(jQuery);