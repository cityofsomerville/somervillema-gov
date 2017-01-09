(function($, Drupal, undefined) {
    function checkboxListener() {
        if ($("#load-content-type-checkboxes-form #edit-gss-filter-sites-options-block--2").val() != $('.form-item-gss-filter-sites-options-block').find('option:eq(0)').val()) {
            $('.form-item-gss-filter-content-type-options-block').find('input[type="checkbox"]').prop('checked', false);
            $('.form-item-gss-filter-department-options-block').find('input[type="checkbox"]').prop('checked', false);
            $('#block-nt-gss-nt-gss-filter-content-type .form-item-gss-filter-content-type-options-block, #block-nt-gss-nt-gss-filter-content-type .form-item-gss-filter-department-options-block').hide();
        } else {
            // $('.form-item-gss-filter-content-type-options-block').find('input[type="checkbox"]').prop('checked', false);
            // $('.form-item-gss-filter-department-options-block').find('input[type="checkbox"]').prop('checked', false);
            $('#block-nt-gss-nt-gss-filter-content-type .form-item-gss-filter-content-type-options-block, #block-nt-gss-nt-gss-filter-content-type .form-item-gss-filter-department-options-block').show();
        }
        $('.form-reset').on('click', function() {

            $('.form-item-gss-filter-content-type-options-block').find('input[type="checkbox"]').prop('checked', false);
            $('.form-item-gss-filter-department-options-block').find('input[type="checkbox"]').prop('checked', false);
            $('.form-item-gss-filter-pdf-options-block').find('input[type="checkbox"]').prop('checked', false);
            $('.form-item-gss-filter-sites-options-block').find('option:eq(0)').prop('selected', true);
            $('#search-form').submit();

            return false;
        });
        $('input[name="gss_filter_search_field"]').val($("#search-form input[type='text']").val());
        $("#search-form input[type='text']").bind("change paste keyup", function() {
            $('input[name="gss_filter_search_field"]').val($(this).val()).change();
        });
        $("#load-content-type-checkboxes-form input[type='checkbox']").once("check-listener", function() {

            $(this).change(function() {

                name = $(this).attr('id');

                name = name.slice(0, -3);

                input = $('#search-form').find('#' + name);

                if ($(this).prop('checked') == true) {
                    $(input).prop('checked', true);
                } else {
                    $(input).prop('checked', false);
                }

            });
            var $eventSelect = $("#load-content-type-checkboxes-form #edit-gss-filter-sites-options-block--2");


            $("#load-content-type-checkboxes-form #edit-gss-filter-sites-options-block--2").once("select-listener", function() {
                $(this).on('change', function() {
                    name = $(this).attr('id');
                    name = name.slice(0, -3);

                    input = $('#search-form').find('#' + name);
                    $(input).val($(this).val()).change();
                    if ($(this).val() != $('.form-item-gss-filter-sites-options-block').find('option:eq(0)').val()) {
                        $('.form-item-gss-filter-content-type-options-block').find('input[type="checkbox"]').prop('checked', false);
                        $('.form-item-gss-filter-department-options-block').find('input[type="checkbox"]').prop('checked', false);
                        $('#block-nt-gss-nt-gss-filter-content-type .form-item-gss-filter-content-type-options-block, #block-nt-gss-nt-gss-filter-content-type .form-item-gss-filter-department-options-block').slideUp();
                    } else {
                        $('.form-item-gss-filter-content-type-options-block').find('input[type="checkbox"]').prop('checked', false);
                        $('.form-item-gss-filter-department-options-block').find('input[type="checkbox"]').prop('checked', false);
                        $('#block-nt-gss-nt-gss-filter-content-type .form-item-gss-filter-content-type-options-block, #block-nt-gss-nt-gss-filter-content-type .form-item-gss-filter-department-options-block').slideDown();
                    }
                });


            });
        });

        $('.block-nt-gss .block-title').on('click', function() {
            if ($(window).width() < 831) {
                $(this).toggleClass('rotateEm');
                $('#load-content-type-checkboxes-form').slideToggle();
            }
        });
    }
    Drupal.behaviors.nt_gss_filter = {
        attach: function(context, settings) {
            checkboxListener();


        }
    }
}(jQuery, Drupal));
