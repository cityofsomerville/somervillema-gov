!function($,t,e){function o(){$("#load-content-type-checkboxes-form #edit-gss-filter-sites-options-block--2").val()!=$(".form-item-gss-filter-sites-options-block").find("option:eq(0)").val()?($(".form-item-gss-filter-content-type-options-block").find('input[type="checkbox"]').prop("checked",!1),$(".form-item-gss-filter-department-options-block").find('input[type="checkbox"]').prop("checked",!1),$("#block-nt-gss-nt-gss-filter-content-type .form-item-gss-filter-content-type-options-block, #block-nt-gss-nt-gss-filter-content-type .form-item-gss-filter-department-options-block").hide()):$("#block-nt-gss-nt-gss-filter-content-type .form-item-gss-filter-content-type-options-block, #block-nt-gss-nt-gss-filter-content-type .form-item-gss-filter-department-options-block").show(),$(".form-reset").on("click",function(){return $(".form-item-gss-filter-content-type-options-block").find('input[type="checkbox"]').prop("checked",!1),$(".form-item-gss-filter-department-options-block").find('input[type="checkbox"]').prop("checked",!1),$(".form-item-gss-filter-pdf-options-block").find('input[type="checkbox"]').prop("checked",!1),$(".form-item-gss-filter-sites-options-block").find("option:eq(0)").prop("selected",!0),$("#search-form").submit(),!1}),$('input[name="gss_filter_search_field"]').val($("#search-form input[type='text']").val()),$("#search-form input[type='text']").bind("change paste keyup",function(){$('input[name="gss_filter_search_field"]').val($(this).val()).change()}),$("#load-content-type-checkboxes-form input[type='checkbox']").once("check-listener",function(){$(this).change(function(){name=$(this).attr("id"),name=name.slice(0,-3),input=$("#search-form").find("#"+name),1==$(this).prop("checked")?$(input).prop("checked",!0):$(input).prop("checked",!1)});var t=$("#load-content-type-checkboxes-form #edit-gss-filter-sites-options-block--2");$("#load-content-type-checkboxes-form #edit-gss-filter-sites-options-block--2").once("select-listener",function(){$(this).on("change",function(){name=$(this).attr("id"),name=name.slice(0,-3),input=$("#search-form").find("#"+name),$(input).val($(this).val()).change(),$(this).val()!=$(".form-item-gss-filter-sites-options-block").find("option:eq(0)").val()?($(".form-item-gss-filter-content-type-options-block").find('input[type="checkbox"]').prop("checked",!1),$(".form-item-gss-filter-department-options-block").find('input[type="checkbox"]').prop("checked",!1),$("#block-nt-gss-nt-gss-filter-content-type .form-item-gss-filter-content-type-options-block, #block-nt-gss-nt-gss-filter-content-type .form-item-gss-filter-department-options-block").slideUp()):($(".form-item-gss-filter-content-type-options-block").find('input[type="checkbox"]').prop("checked",!1),$(".form-item-gss-filter-department-options-block").find('input[type="checkbox"]').prop("checked",!1),$("#block-nt-gss-nt-gss-filter-content-type .form-item-gss-filter-content-type-options-block, #block-nt-gss-nt-gss-filter-content-type .form-item-gss-filter-department-options-block").slideDown())})})})}t.behaviors.nt_gss_filter={attach:function(t,e){o()}}}(jQuery,Drupal);