<?php
/**
 * @file
 * somv_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function somv_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bid_posting';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bid Posting';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Open Bids';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_bid_number' => 'field_bid_number',
    'title' => 'title',
    'field_release_date' => 'field_release_date',
    'field_bid_package_file' => 'field_bid_package_file',
  );
  $handler->display->display_options['style_options']['default'] = 'field_bid_number';
  $handler->display->display_options['style_options']['info'] = array(
    'field_bid_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_release_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bid_package_file' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  /* Field: Content: Bid Number */
  $handler->display->display_options['fields']['field_bid_number']['id'] = 'field_bid_number';
  $handler->display->display_options['fields']['field_bid_number']['table'] = 'field_data_field_bid_number';
  $handler->display->display_options['fields']['field_bid_number']['field'] = 'field_bid_number';
  $handler->display->display_options['fields']['field_bid_number']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_bid_number']['alter']['path'] = 'departments/finance/purchasing/bids/[field_bid_number]';
  $handler->display->display_options['fields']['field_bid_number']['alter']['replace_spaces'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Bid Notice */
  $handler->display->display_options['fields']['field_bid_notice']['id'] = 'field_bid_notice';
  $handler->display->display_options['fields']['field_bid_notice']['table'] = 'field_data_field_bid_notice';
  $handler->display->display_options['fields']['field_bid_notice']['field'] = 'field_bid_notice';
  $handler->display->display_options['fields']['field_bid_notice']['click_sort_column'] = 'fid';
  /* Field: Content: General Bid Opening Date */
  $handler->display->display_options['fields']['field_release_date']['id'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['fields']['field_release_date']['field'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Sub-Bid Opening Date */
  $handler->display->display_options['fields']['field_sub_bid_opening_date']['id'] = 'field_sub_bid_opening_date';
  $handler->display->display_options['fields']['field_sub_bid_opening_date']['table'] = 'field_data_field_sub_bid_opening_date';
  $handler->display->display_options['fields']['field_sub_bid_opening_date']['field'] = 'field_sub_bid_opening_date';
  $handler->display->display_options['fields']['field_sub_bid_opening_date']['label'] = 'Sub Opening Date';
  $handler->display->display_options['fields']['field_sub_bid_opening_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Bid Package File */
  $handler->display->display_options['fields']['field_bid_package_file']['id'] = 'field_bid_package_file';
  $handler->display->display_options['fields']['field_bid_package_file']['table'] = 'field_data_field_bid_package_file';
  $handler->display->display_options['fields']['field_bid_package_file']['field'] = 'field_bid_package_file';
  $handler->display->display_options['fields']['field_bid_package_file']['label'] = 'Bid Package';
  $handler->display->display_options['fields']['field_bid_package_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bid_package_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_bid_package_file']['multi_type'] = 'ul';
  /* Field: Content: Addendum */
  $handler->display->display_options['fields']['field_addendum']['id'] = 'field_addendum';
  $handler->display->display_options['fields']['field_addendum']['table'] = 'field_data_field_addendum';
  $handler->display->display_options['fields']['field_addendum']['field'] = 'field_addendum';
  $handler->display->display_options['fields']['field_addendum']['label'] = 'Addenda';
  $handler->display->display_options['fields']['field_addendum']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_addendum']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_addendum']['multi_type'] = 'ul';
  /* Field: Content: Bid Deposit */
  $handler->display->display_options['fields']['field_bid_surety']['id'] = 'field_bid_surety';
  $handler->display->display_options['fields']['field_bid_surety']['table'] = 'field_data_field_bid_surety';
  $handler->display->display_options['fields']['field_bid_surety']['field'] = 'field_bid_surety';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bid_posting' => 'bid_posting',
  );

  /* Display: Open Bids Block */
  $handler = $view->new_display('block', 'Open Bids Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Bid Number */
  $handler->display->display_options['fields']['field_bid_number']['id'] = 'field_bid_number';
  $handler->display->display_options['fields']['field_bid_number']['table'] = 'field_data_field_bid_number';
  $handler->display->display_options['fields']['field_bid_number']['field'] = 'field_bid_number';
  $handler->display->display_options['fields']['field_bid_number']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_bid_number']['alter']['path'] = 'departments/finance/purchasing/bids/[field_bid_number]';
  $handler->display->display_options['fields']['field_bid_number']['alter']['replace_spaces'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Bid Notice */
  $handler->display->display_options['fields']['field_bid_notice']['id'] = 'field_bid_notice';
  $handler->display->display_options['fields']['field_bid_notice']['table'] = 'field_data_field_bid_notice';
  $handler->display->display_options['fields']['field_bid_notice']['field'] = 'field_bid_notice';
  $handler->display->display_options['fields']['field_bid_notice']['click_sort_column'] = 'fid';
  /* Field: Content: General Bid Opening Date */
  $handler->display->display_options['fields']['field_release_date']['id'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['fields']['field_release_date']['field'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Sub-Bid Opening Date */
  $handler->display->display_options['fields']['field_sub_bid_opening_date']['id'] = 'field_sub_bid_opening_date';
  $handler->display->display_options['fields']['field_sub_bid_opening_date']['table'] = 'field_data_field_sub_bid_opening_date';
  $handler->display->display_options['fields']['field_sub_bid_opening_date']['field'] = 'field_sub_bid_opening_date';
  $handler->display->display_options['fields']['field_sub_bid_opening_date']['label'] = 'Sub Opening Date';
  $handler->display->display_options['fields']['field_sub_bid_opening_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Bid Package File */
  $handler->display->display_options['fields']['field_bid_package_file']['id'] = 'field_bid_package_file';
  $handler->display->display_options['fields']['field_bid_package_file']['table'] = 'field_data_field_bid_package_file';
  $handler->display->display_options['fields']['field_bid_package_file']['field'] = 'field_bid_package_file';
  $handler->display->display_options['fields']['field_bid_package_file']['label'] = 'Bid Package';
  $handler->display->display_options['fields']['field_bid_package_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bid_package_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bid_package_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_bid_package_file']['multi_type'] = 'ul';
  /* Field: Content: Addendum */
  $handler->display->display_options['fields']['field_addendum']['id'] = 'field_addendum';
  $handler->display->display_options['fields']['field_addendum']['table'] = 'field_data_field_addendum';
  $handler->display->display_options['fields']['field_addendum']['field'] = 'field_addendum';
  $handler->display->display_options['fields']['field_addendum']['label'] = 'Addenda';
  $handler->display->display_options['fields']['field_addendum']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_addendum']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_addendum']['multi_type'] = 'ul';
  /* Field: Content: Bid Deposit */
  $handler->display->display_options['fields']['field_bid_surety']['id'] = 'field_bid_surety';
  $handler->display->display_options['fields']['field_bid_surety']['table'] = 'field_data_field_bid_surety';
  $handler->display->display_options['fields']['field_bid_surety']['field'] = 'field_bid_surety';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bid_posting' => 'bid_posting',
  );
  /* Filter criterion: Content: Opening Date (field_opening_date) */
  $handler->display->display_options['filters']['field_opening_date_value']['id'] = 'field_opening_date_value';
  $handler->display->display_options['filters']['field_opening_date_value']['table'] = 'field_data_field_opening_date';
  $handler->display->display_options['filters']['field_opening_date_value']['field'] = 'field_opening_date_value';
  $handler->display->display_options['filters']['field_opening_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_opening_date_value']['default_date'] = 'now';
  $handler->display->display_options['block_caching'] = '5';

  /* Display: Closed Bids Block */
  $handler = $view->new_display('block', 'Closed Bids Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Closed Bids';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Bid Number */
  $handler->display->display_options['fields']['field_bid_number']['id'] = 'field_bid_number';
  $handler->display->display_options['fields']['field_bid_number']['table'] = 'field_data_field_bid_number';
  $handler->display->display_options['fields']['field_bid_number']['field'] = 'field_bid_number';
  $handler->display->display_options['fields']['field_bid_number']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_bid_number']['alter']['path'] = 'departments/finance/purchasing/bids/[field_bid_number]';
  $handler->display->display_options['fields']['field_bid_number']['alter']['replace_spaces'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Bid Notice */
  $handler->display->display_options['fields']['field_bid_notice']['id'] = 'field_bid_notice';
  $handler->display->display_options['fields']['field_bid_notice']['table'] = 'field_data_field_bid_notice';
  $handler->display->display_options['fields']['field_bid_notice']['field'] = 'field_bid_notice';
  $handler->display->display_options['fields']['field_bid_notice']['click_sort_column'] = 'fid';
  /* Field: Content: General Bid Opening Date */
  $handler->display->display_options['fields']['field_release_date']['id'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['fields']['field_release_date']['field'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Sub-Bid Opening Date */
  $handler->display->display_options['fields']['field_sub_bid_opening_date']['id'] = 'field_sub_bid_opening_date';
  $handler->display->display_options['fields']['field_sub_bid_opening_date']['table'] = 'field_data_field_sub_bid_opening_date';
  $handler->display->display_options['fields']['field_sub_bid_opening_date']['field'] = 'field_sub_bid_opening_date';
  $handler->display->display_options['fields']['field_sub_bid_opening_date']['label'] = 'Sub Opening Date';
  $handler->display->display_options['fields']['field_sub_bid_opening_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Bid Package File */
  $handler->display->display_options['fields']['field_bid_package_file']['id'] = 'field_bid_package_file';
  $handler->display->display_options['fields']['field_bid_package_file']['table'] = 'field_data_field_bid_package_file';
  $handler->display->display_options['fields']['field_bid_package_file']['field'] = 'field_bid_package_file';
  $handler->display->display_options['fields']['field_bid_package_file']['label'] = 'Bid Package';
  $handler->display->display_options['fields']['field_bid_package_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bid_package_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_bid_package_file']['multi_type'] = 'ul';
  /* Field: Content: Addendum */
  $handler->display->display_options['fields']['field_addendum']['id'] = 'field_addendum';
  $handler->display->display_options['fields']['field_addendum']['table'] = 'field_data_field_addendum';
  $handler->display->display_options['fields']['field_addendum']['field'] = 'field_addendum';
  $handler->display->display_options['fields']['field_addendum']['label'] = 'Addenda';
  $handler->display->display_options['fields']['field_addendum']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_addendum']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_addendum']['multi_type'] = 'ul';
  /* Field: Content: Bid Deposit */
  $handler->display->display_options['fields']['field_bid_surety']['id'] = 'field_bid_surety';
  $handler->display->display_options['fields']['field_bid_surety']['table'] = 'field_data_field_bid_surety';
  $handler->display->display_options['fields']['field_bid_surety']['field'] = 'field_bid_surety';
  /* Field: Content: Bid Results */
  $handler->display->display_options['fields']['field_bid_results']['id'] = 'field_bid_results';
  $handler->display->display_options['fields']['field_bid_results']['table'] = 'field_data_field_bid_results';
  $handler->display->display_options['fields']['field_bid_results']['field'] = 'field_bid_results';
  $handler->display->display_options['fields']['field_bid_results']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bid_results']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bid_posting' => 'bid_posting',
  );
  /* Filter criterion: Content: Opening Date (field_opening_date) */
  $handler->display->display_options['filters']['field_opening_date_value']['id'] = 'field_opening_date_value';
  $handler->display->display_options['filters']['field_opening_date_value']['table'] = 'field_data_field_opening_date';
  $handler->display->display_options['filters']['field_opening_date_value']['field'] = 'field_opening_date_value';
  $handler->display->display_options['filters']['field_opening_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_opening_date_value']['default_date'] = 'now';
  $handler->display->display_options['block_caching'] = '5';

  /* Display: Summary Open Bids Block */
  $handler = $view->new_display('block', 'Summary Open Bids Block', 'block_2');
  $handler->display->display_options['display_description'] = 'Limited listing of open bid posings';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Bid Number */
  $handler->display->display_options['fields']['field_bid_number']['id'] = 'field_bid_number';
  $handler->display->display_options['fields']['field_bid_number']['table'] = 'field_data_field_bid_number';
  $handler->display->display_options['fields']['field_bid_number']['field'] = 'field_bid_number';
  $handler->display->display_options['fields']['field_bid_number']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_bid_number']['alter']['path'] = 'finance/purchasing/bids/detail';
  $handler->display->display_options['fields']['field_bid_number']['alter']['replace_spaces'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Bid Title';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="hidden"></span>';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: General Bid Opening Date */
  $handler->display->display_options['fields']['field_release_date']['id'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['fields']['field_release_date']['field'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['alter']['text'] = '<span class="hidden"></span>';
  $handler->display->display_options['fields']['field_release_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Bid Package File */
  $handler->display->display_options['fields']['field_bid_package_file']['id'] = 'field_bid_package_file';
  $handler->display->display_options['fields']['field_bid_package_file']['table'] = 'field_data_field_bid_package_file';
  $handler->display->display_options['fields']['field_bid_package_file']['field'] = 'field_bid_package_file';
  $handler->display->display_options['fields']['field_bid_package_file']['label'] = 'Bid Package';
  $handler->display->display_options['fields']['field_bid_package_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bid_package_file']['alter']['text'] = 'Bid Package';
  $handler->display->display_options['fields']['field_bid_package_file']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_bid_package_file']['alter']['path'] = 'finance/purchasing/bids/detail';
  $handler->display->display_options['fields']['field_bid_package_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bid_package_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_bid_package_file']['settings'] = array(
    'text' => 'Bid Package [file:fid]',
  );
  $handler->display->display_options['fields']['field_bid_package_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_bid_package_file']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bid_posting' => 'bid_posting',
  );
  /* Filter criterion: Content: Opening Date (field_opening_date) */
  $handler->display->display_options['filters']['field_opening_date_value']['id'] = 'field_opening_date_value';
  $handler->display->display_options['filters']['field_opening_date_value']['table'] = 'field_data_field_opening_date';
  $handler->display->display_options['filters']['field_opening_date_value']['field'] = 'field_opening_date_value';
  $handler->display->display_options['filters']['field_opening_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_opening_date_value']['default_date'] = 'now';
  $handler->display->display_options['block_caching'] = '5';

  /* Display: Summary Closed Bids Block */
  $handler = $view->new_display('block', 'Summary Closed Bids Block', 'block_3');
  $handler->display->display_options['display_description'] = 'Limited listing of closed bid posings';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Bid Number */
  $handler->display->display_options['fields']['field_bid_number']['id'] = 'field_bid_number';
  $handler->display->display_options['fields']['field_bid_number']['table'] = 'field_data_field_bid_number';
  $handler->display->display_options['fields']['field_bid_number']['field'] = 'field_bid_number';
  $handler->display->display_options['fields']['field_bid_number']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_bid_number']['alter']['path'] = 'finance/purchasing/bids/detail';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Bid Title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: General Bid Opening Date */
  $handler->display->display_options['fields']['field_release_date']['id'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['fields']['field_release_date']['field'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['alter']['text'] = '<span class="hidden"></span>';
  $handler->display->display_options['fields']['field_release_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Bid Package File */
  $handler->display->display_options['fields']['field_bid_package_file']['id'] = 'field_bid_package_file';
  $handler->display->display_options['fields']['field_bid_package_file']['table'] = 'field_data_field_bid_package_file';
  $handler->display->display_options['fields']['field_bid_package_file']['field'] = 'field_bid_package_file';
  $handler->display->display_options['fields']['field_bid_package_file']['label'] = 'Bid Package';
  $handler->display->display_options['fields']['field_bid_package_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bid_package_file']['alter']['text'] = 'Bid Package';
  $handler->display->display_options['fields']['field_bid_package_file']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_bid_package_file']['alter']['path'] = 'finance/purchasing/bids/detail';
  $handler->display->display_options['fields']['field_bid_package_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bid_package_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_bid_package_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_bid_package_file']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bid_posting' => 'bid_posting',
  );
  /* Filter criterion: Content: Opening Date (field_opening_date) */
  $handler->display->display_options['filters']['field_opening_date_value']['id'] = 'field_opening_date_value';
  $handler->display->display_options['filters']['field_opening_date_value']['table'] = 'field_data_field_opening_date';
  $handler->display->display_options['filters']['field_opening_date_value']['field'] = 'field_opening_date_value';
  $handler->display->display_options['filters']['field_opening_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_opening_date_value']['default_date'] = 'now';
  $handler->display->display_options['block_caching'] = '5';
  $export['bid_posting'] = $view;

  $view = new view();
  $view->name = 'boards_commissions_authorities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Boards, Commissions & Authorities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Boards, Commissions & Authorities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_department',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'link-list--item';
  $handler->display->display_options['style_options']['class'] = 'link-list__items';
  $handler->display->display_options['style_options']['wrapper_class'] = 'link-list component has-more js-has-more';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'List Label';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h3>Boards, Commissions & Authorities</h3>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'cta-secondary';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department_1']['id'] = 'field_department_1';
  $handler->display->display_options['fields']['field_department_1']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department_1']['field'] = 'field_department';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organizational_unit' => 'organizational_unit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Org Unit Type (field_org_unit_type) */
  $handler->display->display_options['filters']['field_org_unit_type_value']['id'] = 'field_org_unit_type_value';
  $handler->display->display_options['filters']['field_org_unit_type_value']['table'] = 'field_data_field_org_unit_type';
  $handler->display->display_options['filters']['field_org_unit_type_value']['field'] = 'field_org_unit_type_value';
  $handler->display->display_options['filters']['field_org_unit_type_value']['value'] = array(
    'org_unit_type_board' => 'org_unit_type_board',
    'org_unit_type_commission' => 'org_unit_type_commission',
    'org_unit_type_authority' => 'org_unit_type_authority',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'link-list--item';
  $handler->display->display_options['style_options']['class'] = 'link-list__items';
  $handler->display->display_options['style_options']['wrapper_class'] = 'link-list component has-more js-has-more';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'cta-secondary';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['path'] = 'boards';

  /* Display: Divisions Block */
  $handler = $view->new_display('block', 'Divisions Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Divisions';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'related-links--item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'related-links--items no-js';
  $handler->display->display_options['style_options']['wrapper_class'] = 'related-links component';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_department_target_id']['id'] = 'field_department_target_id';
  $handler->display->display_options['relationships']['field_department_target_id']['table'] = 'field_data_field_department';
  $handler->display->display_options['relationships']['field_department_target_id']['field'] = 'field_department_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_department_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organizational_unit' => 'organizational_unit',
  );
  $export['boards_commissions_authorities'] = $view;

  $view = new view();
  $view->name = 'campaign_finance_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Campaign Finance Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Campaign Finance Reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Candidate Name */
  $handler->display->display_options['fields']['field_el_fin_rep_candidate_name']['id'] = 'field_el_fin_rep_candidate_name';
  $handler->display->display_options['fields']['field_el_fin_rep_candidate_name']['table'] = 'field_data_field_el_fin_rep_candidate_name';
  $handler->display->display_options['fields']['field_el_fin_rep_candidate_name']['field'] = 'field_el_fin_rep_candidate_name';
  /* Field: Content: Office */
  $handler->display->display_options['fields']['field_office']['id'] = 'field_office';
  $handler->display->display_options['fields']['field_office']['table'] = 'field_data_field_office';
  $handler->display->display_options['fields']['field_office']['field'] = 'field_office';
  /* Field: Content: Report Type */
  $handler->display->display_options['fields']['field_report_type']['id'] = 'field_report_type';
  $handler->display->display_options['fields']['field_report_type']['table'] = 'field_data_field_report_type';
  $handler->display->display_options['fields']['field_report_type']['field'] = 'field_report_type';
  /* Field: Content: Report File */
  $handler->display->display_options['fields']['field_report_file']['id'] = 'field_report_file';
  $handler->display->display_options['fields']['field_report_file']['table'] = 'field_data_field_report_file';
  $handler->display->display_options['fields']['field_report_file']['field'] = 'field_report_file';
  $handler->display->display_options['fields']['field_report_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_report_file']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'elections_finance_report' => 'elections_finance_report',
  );
  /* Filter criterion: Content: Candidate Name (field_el_fin_rep_candidate_name) */
  $handler->display->display_options['filters']['field_el_fin_rep_candidate_name_value']['id'] = 'field_el_fin_rep_candidate_name_value';
  $handler->display->display_options['filters']['field_el_fin_rep_candidate_name_value']['table'] = 'field_data_field_el_fin_rep_candidate_name';
  $handler->display->display_options['filters']['field_el_fin_rep_candidate_name_value']['field'] = 'field_el_fin_rep_candidate_name_value';
  $handler->display->display_options['filters']['field_el_fin_rep_candidate_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_el_fin_rep_candidate_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_el_fin_rep_candidate_name_value']['expose']['operator_id'] = 'field_el_fin_rep_candidate_name_value_op';
  $handler->display->display_options['filters']['field_el_fin_rep_candidate_name_value']['expose']['label'] = 'Candidate Name (contains)';
  $handler->display->display_options['filters']['field_el_fin_rep_candidate_name_value']['expose']['operator'] = 'field_el_fin_rep_candidate_name_value_op';
  $handler->display->display_options['filters']['field_el_fin_rep_candidate_name_value']['expose']['identifier'] = 'field_el_fin_rep_candidate_name_value';
  $handler->display->display_options['filters']['field_el_fin_rep_candidate_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'campaign-finance-reports';
  $export['campaign_finance_reports'] = $view;

  $view = new view();
  $view->name = 'city_hall_contact';
  $view->description = 'Used on Homepage & Contact Us pages';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'City Hall Contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'City Hall Contact';
  $handler->display->display_options['css_class'] = 'contact-us';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'contact-us-content';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_building_hours' => 'field_building_hours',
    'field_building_off_hours' => 'field_building_off_hours',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'is-open';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_building_hours']['id'] = 'field_building_hours';
  $handler->display->display_options['fields']['field_building_hours']['table'] = 'field_data_field_building_hours';
  $handler->display->display_options['fields']['field_building_hours']['field'] = 'field_building_hours';
  $handler->display->display_options['fields']['field_building_hours']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_building_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_hours']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_building_hours']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_building_hours']['group_columns'] = array(
    'bundle' => 'bundle',
  );
  $handler->display->display_options['fields']['field_building_hours']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_building_hours']['separator'] = '<br>';
  /* Field: Content: Off Hours */
  $handler->display->display_options['fields']['field_building_off_hours']['id'] = 'field_building_off_hours';
  $handler->display->display_options['fields']['field_building_off_hours']['table'] = 'field_data_field_building_off_hours';
  $handler->display->display_options['fields']['field_building_off_hours']['field'] = 'field_building_off_hours';
  $handler->display->display_options['fields']['field_building_off_hours']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_building_off_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_off_hours']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'building' => 'building',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'City Hall';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'is-open';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_building_hours']['id'] = 'field_building_hours';
  $handler->display->display_options['fields']['field_building_hours']['table'] = 'field_data_field_building_hours';
  $handler->display->display_options['fields']['field_building_hours']['field'] = 'field_building_hours';
  $handler->display->display_options['fields']['field_building_hours']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_building_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_hours']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_building_hours']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_building_hours']['group_columns'] = array(
    'bundle' => 'bundle',
  );
  $handler->display->display_options['fields']['field_building_hours']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_building_hours']['separator'] = '<br>';
  /* Field: Content: Off Hours */
  $handler->display->display_options['fields']['field_building_off_hours']['id'] = 'field_building_off_hours';
  $handler->display->display_options['fields']['field_building_off_hours']['table'] = 'field_data_field_building_off_hours';
  $handler->display->display_options['fields']['field_building_off_hours']['field'] = 'field_building_off_hours';
  $handler->display->display_options['fields']['field_building_off_hours']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_building_off_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_off_hours']['element_default_classes'] = FALSE;
  /* Field: Content: Building Location */
  $handler->display->display_options['fields']['field_building_location']['id'] = 'field_building_location';
  $handler->display->display_options['fields']['field_building_location']['table'] = 'field_data_field_building_location';
  $handler->display->display_options['fields']['field_building_location']['field'] = 'field_building_location';
  $handler->display->display_options['fields']['field_building_location']['label'] = '';
  $handler->display->display_options['fields']['field_building_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building_location']['element_label_colon'] = FALSE;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Field: Location: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province']['style'] = 'code';
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['label'] = '';
  $handler->display->display_options['fields']['street']['exclude'] = TRUE;
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'location';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  $handler->display->display_options['fields']['address']['label'] = '';
  $handler->display->display_options['fields']['address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['address']['alter']['text'] = '<p>[street]<br>
[city], [province] [postal_code]</p>';
  $handler->display->display_options['fields']['address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['address']['hide'] = array(
    'name' => 'name',
    'street' => 'street',
    'additional' => 'additional',
    'city' => 'city',
    'province' => 'province',
    'postal_code' => 'postal_code',
    'country' => 'country',
    'locpick' => 'locpick',
    'province_name' => 'province_name',
    'country_name' => 'country_name',
    'map_link' => 'map_link',
    'coords' => 'coords',
  );
  $handler->display->display_options['fields']['address']['exclude_cck'] = 0;
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Homepage City Hall Block */
  $handler = $view->new_display('block', 'Homepage City Hall Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_building_hours' => 'field_building_hours',
    'field_building_off_hours' => 'field_building_off_hours',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>.footer{margin-top:0px!important;}</style>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'is-open';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_building_hours']['id'] = 'field_building_hours';
  $handler->display->display_options['fields']['field_building_hours']['table'] = 'field_data_field_building_hours';
  $handler->display->display_options['fields']['field_building_hours']['field'] = 'field_building_hours';
  $handler->display->display_options['fields']['field_building_hours']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_building_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_hours']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_building_hours']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_building_hours']['group_columns'] = array(
    'bundle' => 'bundle',
  );
  $handler->display->display_options['fields']['field_building_hours']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_building_hours']['separator'] = '<br>';
  /* Field: Content: Off Hours */
  $handler->display->display_options['fields']['field_building_off_hours']['id'] = 'field_building_off_hours';
  $handler->display->display_options['fields']['field_building_off_hours']['table'] = 'field_data_field_building_off_hours';
  $handler->display->display_options['fields']['field_building_off_hours']['field'] = 'field_building_off_hours';
  $handler->display->display_options['fields']['field_building_off_hours']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_building_off_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_off_hours']['element_default_classes'] = FALSE;
  /* Field: Content: Building Location */
  $handler->display->display_options['fields']['field_building_location']['id'] = 'field_building_location';
  $handler->display->display_options['fields']['field_building_location']['table'] = 'field_data_field_building_location';
  $handler->display->display_options['fields']['field_building_location']['field'] = 'field_building_location';
  $handler->display->display_options['fields']['field_building_location']['label'] = '';
  $handler->display->display_options['fields']['field_building_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_location']['element_default_classes'] = FALSE;
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['label'] = '';
  $handler->display->display_options['fields']['street']['exclude'] = TRUE;
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province']['style'] = 'code';
  /* Field: Location: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'location';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  $handler->display->display_options['fields']['address']['label'] = '';
  $handler->display->display_options['fields']['address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['address']['alter']['text'] = '<p>[street]<br>
[city], [province] [postal_code]</p>';
  $handler->display->display_options['fields']['address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['address']['hide'] = array(
    'name' => 'name',
    'street' => 'street',
    'additional' => 'additional',
    'city' => 'city',
    'province' => 'province',
    'postal_code' => 'postal_code',
    'country' => 'country',
    'locpick' => 'locpick',
    'province_name' => 'province_name',
    'country_name' => 'country_name',
    'map_link' => 'map_link',
    'coords' => 'coords',
  );
  $handler->display->display_options['fields']['address']['exclude_cck'] = 0;
  $handler->display->display_options['block_caching'] = '8';
  $export['city_hall_contact'] = $view;

  $view = new view();
  $view->name = 'city_updates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'City Updates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'City Updates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>
  [title]
</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'news_article_date';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Submission Date */
  $handler->display->display_options['fields']['field_submission_date']['id'] = 'field_submission_date';
  $handler->display->display_options['fields']['field_submission_date']['table'] = 'field_data_field_submission_date';
  $handler->display->display_options['fields']['field_submission_date']['field'] = 'field_submission_date';
  $handler->display->display_options['fields']['field_submission_date']['label'] = '';
  $handler->display->display_options['fields']['field_submission_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_submission_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Submission Date (field_submission_date) */
  $handler->display->display_options['sorts']['field_submission_date_value']['id'] = 'field_submission_date_value';
  $handler->display->display_options['sorts']['field_submission_date_value']['table'] = 'field_data_field_submission_date';
  $handler->display->display_options['sorts']['field_submission_date_value']['field'] = 'field_submission_date_value';
  $handler->display->display_options['sorts']['field_submission_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'news';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'news.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'latest-news__item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'latest-news__items';
  $handler->display->display_options['style_options']['wrapper_class'] = 'component latest-news';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'View All City Updates';
  $handler->display->display_options['footer']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="cta-primary-wrapper">
	<a class="cta-primary" href="/news">View All City Updates</a>
</div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'latest-news--item-content';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Featured Block */
  $handler = $view->new_display('block', 'Featured Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'latest-news--item latest-news--item--featured';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'latest-news--items';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_news_featured_image']['id'] = 'field_news_featured_image';
  $handler->display->display_options['fields']['field_news_featured_image']['table'] = 'field_data_field_news_featured_image';
  $handler->display->display_options['fields']['field_news_featured_image']['field'] = 'field_news_featured_image';
  $handler->display->display_options['fields']['field_news_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_image']['element_class'] = 'media-gallery__image';
  $handler->display->display_options['fields']['field_news_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'latest-news--item-content';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'latest-news--item-content-wrapper';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '1';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Org Unit Highlights Block */
  $handler = $view->new_display('block', 'Org Unit Highlights Block', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Highlights';
  $handler->display->display_options['display_description'] = 'Displays highlights tagged with the associated Org Unit';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'Previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'View More Highlights';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'highlights--item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'highlights--items';
  $handler->display->display_options['style_options']['wrapper_class'] = 'highlights component has-more js-has-more';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_news_department_target_id']['id'] = 'field_news_department_target_id';
  $handler->display->display_options['relationships']['field_news_department_target_id']['table'] = 'field_data_field_news_department';
  $handler->display->display_options['relationships']['field_news_department_target_id']['field'] = 'field_news_department_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_news_featured_image']['id'] = 'field_news_featured_image';
  $handler->display->display_options['fields']['field_news_featured_image']['table'] = 'field_data_field_news_featured_image';
  $handler->display->display_options['fields']['field_news_featured_image']['field'] = 'field_news_featured_image';
  $handler->display->display_options['fields']['field_news_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_featured_image']['alter']['text'] = '<span class="highlights--image">[field_news_featured_image]</span>';
  $handler->display->display_options['fields']['field_news_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'cta-secondary';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'highlights--content';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Departments, Programs, and Initiatives (field_news_department) */
  $handler->display->display_options['arguments']['field_news_department_target_id']['id'] = 'field_news_department_target_id';
  $handler->display->display_options['arguments']['field_news_department_target_id']['table'] = 'field_data_field_news_department';
  $handler->display->display_options['arguments']['field_news_department_target_id']['field'] = 'field_news_department_target_id';
  $handler->display->display_options['arguments']['field_news_department_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_news_department_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_news_department_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_department_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_department_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_caching'] = '8';
  $export['city_updates'] = $view;

  $view = new view();
  $view->name = 'constables';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Constables';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'City Constables';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_official_email_address' => 'field_official_email_address',
    'field_official_email_address_1' => 'field_official_email_address_1',
    'field_official_phone_number' => 'field_official_phone_number',
    'field_official_website' => 'field_official_website',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_official_email_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_official_email_address_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_official_phone_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_official_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'City Constables Title';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>City Constables</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_official_email_address_1']['id'] = 'field_official_email_address_1';
  $handler->display->display_options['fields']['field_official_email_address_1']['table'] = 'field_data_field_official_email_address';
  $handler->display->display_options['fields']['field_official_email_address_1']['field'] = 'field_official_email_address';
  $handler->display->display_options['fields']['field_official_email_address_1']['alter']['make_link'] = TRUE;
  /* Field: Content: Phone Number */
  $handler->display->display_options['fields']['field_official_phone_number']['id'] = 'field_official_phone_number';
  $handler->display->display_options['fields']['field_official_phone_number']['table'] = 'field_data_field_official_phone_number';
  $handler->display->display_options['fields']['field_official_phone_number']['field'] = 'field_official_phone_number';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_official_website']['id'] = 'field_official_website';
  $handler->display->display_options['fields']['field_official_website']['table'] = 'field_data_field_official_website';
  $handler->display->display_options['fields']['field_official_website']['field'] = 'field_official_website';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'official' => 'official',
  );
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'official';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_official_email_address_1']['id'] = 'field_official_email_address_1';
  $handler->display->display_options['fields']['field_official_email_address_1']['table'] = 'field_data_field_official_email_address';
  $handler->display->display_options['fields']['field_official_email_address_1']['field'] = 'field_official_email_address';
  $handler->display->display_options['fields']['field_official_email_address_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_official_email_address_1']['alter']['text'] = '<a href="mailto:[field_official_email_address_1]">[field_official_email_address_1]</a>';
  /* Field: Content: Phone Number */
  $handler->display->display_options['fields']['field_official_phone_number']['id'] = 'field_official_phone_number';
  $handler->display->display_options['fields']['field_official_phone_number']['table'] = 'field_data_field_official_phone_number';
  $handler->display->display_options['fields']['field_official_phone_number']['field'] = 'field_official_phone_number';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_official_website']['id'] = 'field_official_website';
  $handler->display->display_options['fields']['field_official_website']['table'] = 'field_data_field_official_website';
  $handler->display->display_options['fields']['field_official_website']['field'] = 'field_official_website';
  $handler->display->display_options['fields']['field_official_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_official_website']['alter']['text'] = '<a href="http://[field_official_website]">[field_official_website]</a>';
  $handler->display->display_options['path'] = 'constables';
  $export['constables'] = $view;

  $view = new view();
  $view->name = 'departments_divisions_backup';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Departments & Divisions Backup';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Departments & Divisions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_department',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'link-list--item';
  $handler->display->display_options['style_options']['class'] = 'link-list__items';
  $handler->display->display_options['style_options']['wrapper_class'] = 'link-list component has-more js-has-more';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'cta-secondary';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department_1']['id'] = 'field_department_1';
  $handler->display->display_options['fields']['field_department_1']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department_1']['field'] = 'field_department';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organizational_unit' => 'organizational_unit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Org Unit Type (field_org_unit_type) */
  $handler->display->display_options['filters']['field_org_unit_type_value']['id'] = 'field_org_unit_type_value';
  $handler->display->display_options['filters']['field_org_unit_type_value']['table'] = 'field_data_field_org_unit_type';
  $handler->display->display_options['filters']['field_org_unit_type_value']['field'] = 'field_org_unit_type_value';
  $handler->display->display_options['filters']['field_org_unit_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_org_unit_type_value']['value'] = array(
    'org_unit_type_board' => 'org_unit_type_board',
    'org_unit_type_commission' => 'org_unit_type_commission',
    'org_unit_type_authority' => 'org_unit_type_authority',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_department',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'link-list--item';
  $handler->display->display_options['style_options']['class'] = 'link-list__items';
  $handler->display->display_options['style_options']['wrapper_class'] = 'link-list component has-more js-has-more';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'cta-secondary';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['path'] = 'departments-backup';

  /* Display: Divisions Block */
  $handler = $view->new_display('block', 'Divisions Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Divisions';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'related-links--item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'related-links--items no-js';
  $handler->display->display_options['style_options']['wrapper_class'] = 'related-links component';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_department_target_id']['id'] = 'field_department_target_id';
  $handler->display->display_options['relationships']['field_department_target_id']['table'] = 'field_data_field_department';
  $handler->display->display_options['relationships']['field_department_target_id']['field'] = 'field_department_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_department_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organizational_unit' => 'organizational_unit',
  );
  $export['departments_divisions_backup'] = $view;

  $view = new view();
  $view->name = 'departments_listing_ul';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Departments & Divisions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Departments & Divisions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_department',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'link-list--item';
  $handler->display->display_options['style_options']['class'] = 'link-list__items';
  $handler->display->display_options['style_options']['wrapper_class'] = 'link-list component has-more js-has-more';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Departments & Divisions HTML List';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Departments & Divisions</h2>
<div class="link-list component no-js">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/311">311</a></h3>
</div>
<div class="link-list component no-js">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/animal-control">Animal Control</a></h3>
</div>
<div class="link-list component no-js">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/mayor/capital-projects-and-planning">Capital Projects and Planning</a></h3>
</div>
<div class="link-list component no-js">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/city-clerk">City Clerk</a></h3>
   <ul class="link-list__items">
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/city-clerk/archives">Archives</a></h3>
      </li>
   </ul>
</div>
<div class="link-list component no-js">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/dpw">Communications</a></h3>
   <ul class="link-list__items">
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/communications/somerville-city-cable">City
            Cable</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/communications/social-media">Social Media</a>
         </h3>
      </li>
   </ul>
</div>
<div class="link-list component">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/311">Constituent
      Services</a>
   </h3>
   <ul class="link-list__items">
      <li class="link-list--item">
         <h3><a class="cta-secondary" href="/d311">311</a></h3>
      </li>
   </ul>
</div>
<div class="link-list component">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> Department of Public Works</h3>
   <ul class="link-list__items">
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/dpw/buildings-and-grounds">Buildings and Grounds</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/dpw/electrical-lights-and-lines">Electrical Lights and Lines</a></h3>
      </li>     
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/dpw/engineering">Engineering</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/dpw/sanitation">Sanitation</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/dpw/water-and-sewer">Water and Sewer</a></h3>
      </li>
   </ul>
</div>
<div class="link-list component">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/elections">Elections</a></h3>
</div>
<div class="link-list component">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/finance">Finance</a></h3>
   <ul class="link-list__items">
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/finance/assessing">Assessing</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/finance/auditing">Auditing</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/finance/purchasing">Purchasing</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/finance/treasurer-collector">Treasurer /
            Collector</a>
         </h3>
      </li>
   </ul>
</div>
<div class="link-list component">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/fire-department">Fire Department </a></h3>
   <ul class="link-list__items">
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/fire-department/somerville-auxiliary-fire-department">Somerville Auxiliary Fire Department</a>
         </h3>
      </li>

  </ul>
</div>
<div class="link-list component">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> Health and Human
      Services
   </h3>
   <ul class="link-list__items">
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/accessibility">Executive Office on Disability and Compliance</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/health-and-human-services/office-of-prevention">Office of Prevention</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/health-and-human-services/office-lgbtq-community-liaison">Office of the LGBTQ Community Liaison</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/health-and-human-services/office-of-somerville-commissions">Office of Somerville Commissions</a>
         </h3>
      </li>
     <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/health-and-human-services/public-health-nursing">Public
            Health Nursing</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/health-and-human-services/shape-up-somerville">Shape Up Somerville</a>
         </h3>
      </li>
  </ul>
</div>
<div class="link-list component">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/it">Information Technology (IT)</a></h3>
</div>
<div class="link-list component">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/isd/building-division">Inspectional Services Department
   (ISD)</a> </h3>
   <ul class="link-list__items">
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/isd/building-division">Building Division</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/isd/health-division">Health Division</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/isd/weights-and-measures">Weights and
            Measures</a>
         </h3>
      </li>
   </ul>
</div>
<div class="link-list component">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/law-department">Law Department</a></h3>
</div>
<div class="link-list component">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/libraries">Libraries</a></h3>
</div>
<div class="link-list component">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/mayor">Mayor\'s Office</a></h3>
   <ul class="link-list__items">
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "http://beta.somervillema.gov/departments/mayor/arts-council">Arts Council</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/mayor/council-on-aging">Council on Aging</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/mayor/council-on-aging">SomerPromise</a></h3>
      </li>
     <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/mayor/ysag">Young Somerville Advisory
            Group</a>
         </h3>
      </li>
   </ul>
</div>
<div class="link-list component">
  <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/dpw">Office of Strategic Planning and Community Development (OSPCD)</a></h3>
   <ul class="link-list__items">
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/ospcd/planning-and-zoning">Planning and Zoning</a>
         </h3>
      </li>
   </ul>
</div>
<div class="link-list component">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/office-of-sustainability-and-environment">Office of Sustainability and Environment</a></h3>
</div>
<div class="link-list component">
  <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/dpw">Personnel</a></h3>
   <ul class="link-list__items">
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/personnel/benefits">Benefits</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/personnel/workers-compensation">Workers\'
            Compensation</a>
         </h3>
      </li>
   </ul>
</div>
<div class="link-list component">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/planning-board">Planning Board</a></h3>
</div>
<div class="link-list component">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/recreation-and-youth">Recreation and
      Youth</a>
   </h3>
</div>
<div class="link-list component">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href=
      "http://beta.somervillema.gov/departments/school-department">School
      Department</a>
   </h3>
</div>
<div class="link-list component">
  <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/traffic-and-parking">Traffic and Parking</a></h3>
</div>
<div class="link-list component no-js">
   <h3 class=
      "link-list__group-title link-list__group-title--with-link cta-secondary"> <a href="/departments/veterans-services">Veterans\' Services</a></h3><a name="boards"></a>
</div><h2>Boards, Commissions &amp; Authorities</h2>
<div class="link-list component no-js">
   <ul class="link-list__items no-js">
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/arts-council-board">Arts Council Board</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/bicycle-committee">Bicycle Committee</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/board-of-aldermen">Board of Aldermen</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/board-of-assessors">Board of Assessors</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/commission-persons-disabilities">Commission for Persons with Disabilities</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/commission-on-energy-use-and-climate-change">Commission on Energy Use and Climate Change</a>
         </h3>
      </li>
     <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/community-preservation-committee">Community
            Preservation Committee</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/condominium-review-board">Condominium Review
            Board</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/conservation-commission">Conservation Commission</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/council-on-aging-board">Council on Aging
            Board</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/design-review-committee">Design Review
            Committee</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/election-commission">Election Commission</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/ethics-commission">Ethics Commission</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/fair-housing-commission">Fair Housing Commission</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/office-somerville-commissions/human-rights-commission">Human Rights Commission</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/licensing-commission"> Licensing Commission</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/office-somerville-commissions/multicultural-affairs-commission"> Multicultural Affairs Commission</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/municipal-compensation-advisory-board">Municipal
            Compensation Advisory Board</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/retirement">Retirement</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/recreation-commission">Recreation
            Commission</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/somerpromise-advisory-board">SomerPromise Advisory Board</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/school-committee">School Committee</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "departments/office-somerville-commissions/somerville-commission-for-women">Somerville Commission for Women</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/somerville-housing-authority">Somerville Housing
            Authority</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/somerville-redevelopment-authority">Somerville Redevelopment
            Authority</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/traffic-commission">Traffic Commission</a></h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/veterans-commission-monuments-memorials-and-dedications"> Veterans Commission on Monuments, Memorials and
            Dedications</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/young-somerville-advisory-group">Young Somerville
            Advisory Group</a>
         </h3>
      </li>
      <li class="link-list--item">
         <h3><a class="cta-secondary" href=
            "/departments/zoning-board-of-appeals">Zoning Board of
            Appeals</a>
         </h3>
      </li>
   </ul>
</div>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'cta-secondary';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department_1']['id'] = 'field_department_1';
  $handler->display->display_options['fields']['field_department_1']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department_1']['field'] = 'field_department';
  /* Field: Content: Sidebar Links */
  $handler->display->display_options['fields']['field_sidebar_links']['id'] = 'field_sidebar_links';
  $handler->display->display_options['fields']['field_sidebar_links']['table'] = 'field_data_field_sidebar_links';
  $handler->display->display_options['fields']['field_sidebar_links']['field'] = 'field_sidebar_links';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organizational_unit' => 'organizational_unit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Org Unit Type (field_org_unit_type) */
  $handler->display->display_options['filters']['field_org_unit_type_value']['id'] = 'field_org_unit_type_value';
  $handler->display->display_options['filters']['field_org_unit_type_value']['table'] = 'field_data_field_org_unit_type';
  $handler->display->display_options['filters']['field_org_unit_type_value']['field'] = 'field_org_unit_type_value';
  $handler->display->display_options['filters']['field_org_unit_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_org_unit_type_value']['value'] = array(
    'org_unit_type_department' => 'org_unit_type_department',
    'org_unit_type_division' => 'org_unit_type_division',
    'org_unit_type_board' => 'org_unit_type_board',
    'org_unit_type_commission' => 'org_unit_type_commission',
    'org_unit_type_authority' => 'org_unit_type_authority',
    'org_unit_type_other' => 'org_unit_type_other',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_department',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'link-list--item';
  $handler->display->display_options['style_options']['class'] = 'link-list__items';
  $handler->display->display_options['style_options']['wrapper_class'] = 'link-list component has-more js-has-more';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'cta-secondary';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['path'] = 'departments';

  /* Display: Divisions Block */
  $handler = $view->new_display('block', 'Divisions Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Divisions';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'related-links--item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'related-links--items no-js';
  $handler->display->display_options['style_options']['wrapper_class'] = 'related-links component';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_department_target_id']['id'] = 'field_department_target_id';
  $handler->display->display_options['relationships']['field_department_target_id']['table'] = 'field_data_field_department';
  $handler->display->display_options['relationships']['field_department_target_id']['field'] = 'field_department_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_department_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organizational_unit' => 'organizational_unit',
  );

  /* Display: Ord Unit Related Links Block */
  $handler = $view->new_display('block', 'Ord Unit Related Links Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Links';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'related-links--item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'related-links--items';
  $handler->display->display_options['style_options']['wrapper_class'] = 'related-links link-list component has-more js-has-more';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Sidebar Links */
  $handler->display->display_options['fields']['field_sidebar_links']['id'] = 'field_sidebar_links';
  $handler->display->display_options['fields']['field_sidebar_links']['table'] = 'field_data_field_sidebar_links';
  $handler->display->display_options['fields']['field_sidebar_links']['field'] = 'field_sidebar_links';
  $handler->display->display_options['fields']['field_sidebar_links']['label'] = '';
  $handler->display->display_options['fields']['field_sidebar_links']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sidebar_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidebar_links']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sidebar_links']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sidebar_links']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_sidebar_links']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_sidebar_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sidebar_links']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organizational_unit' => 'organizational_unit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $export['departments_listing_ul'] = $view;

  $view = new view();
  $view->name = 'document_library';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Document Library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Document Library';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_doc_file' => 'field_doc_file',
    'field_doc_department' => 'field_doc_department',
  );
  $handler->display->display_options['style_options']['default'] = 'field_doc_file';
  $handler->display->display_options['style_options']['info'] = array(
    'field_doc_file' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_department' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_file']['id'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['table'] = 'field_data_field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['field'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_doc_file']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['field_doc_file']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_doc_file']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_doc_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_doc_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doc_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_doc_file']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_doc_file]';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_doc_department']['id'] = 'field_doc_department';
  $handler->display->display_options['fields']['field_doc_department']['table'] = 'field_data_field_doc_department';
  $handler->display->display_options['fields']['field_doc_department']['field'] = 'field_doc_department';
  $handler->display->display_options['fields']['field_doc_department']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_doc_department']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Document Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_value']['id'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_value']['field'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['value'] = array(
    'Form' => 'Form',
    'Information' => 'Information',
  );
  $handler->display->display_options['filters']['field_document_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_document_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_value']['expose']['operator_id'] = 'field_document_type_value_op';
  $handler->display->display_options['filters']['field_document_type_value']['expose']['label'] = 'Document Type';
  $handler->display->display_options['filters']['field_document_type_value']['expose']['operator'] = 'field_document_type_value_op';
  $handler->display->display_options['filters']['field_document_type_value']['expose']['identifier'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Department (field_doc_department) */
  $handler->display->display_options['filters']['field_doc_department_target_id']['id'] = 'field_doc_department_target_id';
  $handler->display->display_options['filters']['field_doc_department_target_id']['table'] = 'field_data_field_doc_department';
  $handler->display->display_options['filters']['field_doc_department_target_id']['field'] = 'field_doc_department_target_id';
  $handler->display->display_options['filters']['field_doc_department_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_doc_department_target_id']['expose']['operator_id'] = 'field_doc_department_target_id_op';
  $handler->display->display_options['filters']['field_doc_department_target_id']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_doc_department_target_id']['expose']['operator'] = 'field_doc_department_target_id_op';
  $handler->display->display_options['filters']['field_doc_department_target_id']['expose']['identifier'] = 'field_doc_department_target_id';
  $handler->display->display_options['filters']['field_doc_department_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'documents';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Department (field_doc_department) */
  $handler->display->display_options['arguments']['field_doc_department_target_id']['id'] = 'field_doc_department_target_id';
  $handler->display->display_options['arguments']['field_doc_department_target_id']['table'] = 'field_data_field_doc_department';
  $handler->display->display_options['arguments']['field_doc_department_target_id']['field'] = 'field_doc_department_target_id';
  $handler->display->display_options['arguments']['field_doc_department_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_doc_department_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_doc_department_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_doc_department_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Document Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_value']['id'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_value']['field'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['value'] = array(
    'Form' => 'Form',
    'Information' => 'Information',
  );
  $handler->display->display_options['filters']['field_document_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_document_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_value']['expose']['operator_id'] = 'field_document_type_value_op';
  $handler->display->display_options['filters']['field_document_type_value']['expose']['label'] = 'Document Type';
  $handler->display->display_options['filters']['field_document_type_value']['expose']['operator'] = 'field_document_type_value_op';
  $handler->display->display_options['filters']['field_document_type_value']['expose']['identifier'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Form Name (contains)';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['path'] = 'documents/%';
  $export['document_library'] = $view;

  $view = new view();
  $view->name = 'dpw_job_postings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'DPW Job Postings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'DPW Job Postings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Job Postings Heading';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Current DPW Job Postings</h2>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['empty'] = 'Please check back for job postings as they become available. There are no active postings at this time.';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Posting Date */
  $handler->display->display_options['fields']['field_posting_date']['id'] = 'field_posting_date';
  $handler->display->display_options['fields']['field_posting_date']['table'] = 'field_data_field_posting_date';
  $handler->display->display_options['fields']['field_posting_date']['field'] = 'field_posting_date';
  $handler->display->display_options['fields']['field_posting_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'job_posting' => 'job_posting',
  );
  /* Filter criterion: Content: Posting Date - end date (field_posting_date:value2) */
  $handler->display->display_options['filters']['field_posting_date_value2']['id'] = 'field_posting_date_value2';
  $handler->display->display_options['filters']['field_posting_date_value2']['table'] = 'field_data_field_posting_date';
  $handler->display->display_options['filters']['field_posting_date_value2']['field'] = 'field_posting_date_value2';
  $handler->display->display_options['filters']['field_posting_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_posting_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Department (field_department) */
  $handler->display->display_options['filters']['field_department_target_id']['id'] = 'field_department_target_id';
  $handler->display->display_options['filters']['field_department_target_id']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_target_id']['field'] = 'field_department_target_id';
  $handler->display->display_options['filters']['field_department_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_department_target_id']['expose']['operator_id'] = 'field_department_target_id_op';
  $handler->display->display_options['filters']['field_department_target_id']['expose']['label'] = 'Department (field_department)';
  $handler->display->display_options['filters']['field_department_target_id']['expose']['operator'] = 'field_department_target_id_op';
  $handler->display->display_options['filters']['field_department_target_id']['expose']['identifier'] = 'field_department_target_id';
  $handler->display->display_options['filters']['field_department_target_id']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_department_target_id']['group_info']['label'] = 'Department (field_department)';
  $handler->display->display_options['filters']['field_department_target_id']['group_info']['identifier'] = 'field_department_target_id';
  $handler->display->display_options['filters']['field_department_target_id']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Department of Public Works',
      'operator' => '=',
      'value' => array(
        'value' => 'Department of Public Works (DPW)',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => '',
      'operator' => '=',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'dpwjobs';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'job-postings.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['dpw_job_postings'] = $view;

  $view = new view();
  $view->name = 'employee_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Employee Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Employee Directory';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '250';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_people_first_name' => 'field_people_first_name',
    'field_people_last_name' => 'field_people_last_name',
    'field_people_department' => 'field_people_department',
    'field_people_phone_number' => 'field_people_phone_number',
    'field_people_phone_extension' => 'field_people_phone_extension',
    'field_people_email' => 'field_people_email',
  );
  $handler->display->display_options['style_options']['default'] = 'field_people_first_name';
  $handler->display->display_options['style_options']['info'] = array(
    'field_people_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_department' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_phone_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_phone_extension' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_people_first_name']['id'] = 'field_people_first_name';
  $handler->display->display_options['fields']['field_people_first_name']['table'] = 'field_data_field_people_first_name';
  $handler->display->display_options['fields']['field_people_first_name']['field'] = 'field_people_first_name';
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_people_last_name']['id'] = 'field_people_last_name';
  $handler->display->display_options['fields']['field_people_last_name']['table'] = 'field_data_field_people_last_name';
  $handler->display->display_options['fields']['field_people_last_name']['field'] = 'field_people_last_name';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_people_department']['id'] = 'field_people_department';
  $handler->display->display_options['fields']['field_people_department']['table'] = 'field_data_field_people_department';
  $handler->display->display_options['fields']['field_people_department']['field'] = 'field_people_department';
  $handler->display->display_options['fields']['field_people_department']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_people_department']['delta_offset'] = '0';
  /* Field: Content: Phone Number */
  $handler->display->display_options['fields']['field_people_phone_number']['id'] = 'field_people_phone_number';
  $handler->display->display_options['fields']['field_people_phone_number']['table'] = 'field_data_field_people_phone_number';
  $handler->display->display_options['fields']['field_people_phone_number']['field'] = 'field_people_phone_number';
  /* Field: Content: Phone Extension */
  $handler->display->display_options['fields']['field_people_phone_extension']['id'] = 'field_people_phone_extension';
  $handler->display->display_options['fields']['field_people_phone_extension']['table'] = 'field_data_field_people_phone_extension';
  $handler->display->display_options['fields']['field_people_phone_extension']['field'] = 'field_people_phone_extension';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_people_email']['id'] = 'field_people_email';
  $handler->display->display_options['fields']['field_people_email']['table'] = 'field_data_field_people_email';
  $handler->display->display_options['fields']['field_people_email']['field'] = 'field_people_email';
  $handler->display->display_options['fields']['field_people_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_people_email']['alter']['text'] = 'Send Email';
  $handler->display->display_options['fields']['field_people_email']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_people_email']['alter']['path'] = 'mailto:[field_people_email]';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'people' => 'people',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: First Name (field_people_first_name) */
  $handler->display->display_options['filters']['field_people_first_name_value']['id'] = 'field_people_first_name_value';
  $handler->display->display_options['filters']['field_people_first_name_value']['table'] = 'field_data_field_people_first_name';
  $handler->display->display_options['filters']['field_people_first_name_value']['field'] = 'field_people_first_name_value';
  $handler->display->display_options['filters']['field_people_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_people_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_people_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_people_first_name_value']['expose']['operator_id'] = 'field_people_first_name_value_op';
  $handler->display->display_options['filters']['field_people_first_name_value']['expose']['label'] = 'First Name';
  $handler->display->display_options['filters']['field_people_first_name_value']['expose']['operator'] = 'field_people_first_name_value_op';
  $handler->display->display_options['filters']['field_people_first_name_value']['expose']['identifier'] = 'field_people_first_name_value';
  $handler->display->display_options['filters']['field_people_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_people_first_name_value']['group_info']['label'] = 'First Name (field_people_first_name)';
  $handler->display->display_options['filters']['field_people_first_name_value']['group_info']['identifier'] = 'field_people_first_name_value';
  $handler->display->display_options['filters']['field_people_first_name_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_people_first_name_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Last Name (field_people_last_name) */
  $handler->display->display_options['filters']['field_people_last_name_value']['id'] = 'field_people_last_name_value';
  $handler->display->display_options['filters']['field_people_last_name_value']['table'] = 'field_data_field_people_last_name';
  $handler->display->display_options['filters']['field_people_last_name_value']['field'] = 'field_people_last_name_value';
  $handler->display->display_options['filters']['field_people_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_people_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_people_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_people_last_name_value']['expose']['operator_id'] = 'field_people_last_name_value_op';
  $handler->display->display_options['filters']['field_people_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_people_last_name_value']['expose']['operator'] = 'field_people_last_name_value_op';
  $handler->display->display_options['filters']['field_people_last_name_value']['expose']['identifier'] = 'field_people_last_name_value';
  $handler->display->display_options['filters']['field_people_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'employee-directory';
  $export['employee_directory'] = $view;

  $view = new view();
  $view->name = 'event_documents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Event Documents';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No documents found for the selected event.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_doc_event_target_id']['id'] = 'field_event_doc_event_target_id';
  $handler->display->display_options['relationships']['field_event_doc_event_target_id']['table'] = 'field_data_field_event_doc_event';
  $handler->display->display_options['relationships']['field_event_doc_event_target_id']['field'] = 'field_event_doc_event_target_id';
  /* Relationship: Content: Document (field_event_doc_coll) */
  $handler->display->display_options['relationships']['field_event_doc_coll_value']['id'] = 'field_event_doc_coll_value';
  $handler->display->display_options['relationships']['field_event_doc_coll_value']['table'] = 'field_data_field_event_doc_coll';
  $handler->display->display_options['relationships']['field_event_doc_coll_value']['field'] = 'field_event_doc_coll_value';
  $handler->display->display_options['relationships']['field_event_doc_coll_value']['delta'] = '-1';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_doc_date']['id'] = 'field_event_doc_date';
  $handler->display->display_options['fields']['field_event_doc_date']['table'] = 'field_data_field_event_doc_date';
  $handler->display->display_options['fields']['field_event_doc_date']['field'] = 'field_event_doc_date';
  $handler->display->display_options['fields']['field_event_doc_date']['settings'] = array(
    'format_type' => 'event_date_full',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Event */
  $handler->display->display_options['fields']['field_event_doc_event']['id'] = 'field_event_doc_event';
  $handler->display->display_options['fields']['field_event_doc_event']['table'] = 'field_data_field_event_doc_event';
  $handler->display->display_options['fields']['field_event_doc_event']['field'] = 'field_event_doc_event';
  $handler->display->display_options['fields']['field_event_doc_event']['label'] = 'Meeting';
  $handler->display->display_options['fields']['field_event_doc_event']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field collection item: Type */
  $handler->display->display_options['fields']['field_event_doc_coll_type']['id'] = 'field_event_doc_coll_type';
  $handler->display->display_options['fields']['field_event_doc_coll_type']['table'] = 'field_data_field_event_doc_coll_type';
  $handler->display->display_options['fields']['field_event_doc_coll_type']['field'] = 'field_event_doc_coll_type';
  $handler->display->display_options['fields']['field_event_doc_coll_type']['relationship'] = 'field_event_doc_coll_value';
  $handler->display->display_options['fields']['field_event_doc_coll_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_doc_coll_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_doc_coll_type']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Document */
  $handler->display->display_options['fields']['field_event_doc_coll_doc']['id'] = 'field_event_doc_coll_doc';
  $handler->display->display_options['fields']['field_event_doc_coll_doc']['table'] = 'field_data_field_event_doc_coll_doc';
  $handler->display->display_options['fields']['field_event_doc_coll_doc']['field'] = 'field_event_doc_coll_doc';
  $handler->display->display_options['fields']['field_event_doc_coll_doc']['relationship'] = 'field_event_doc_coll_value';
  $handler->display->display_options['fields']['field_event_doc_coll_doc']['label'] = 'Event Documents';
  $handler->display->display_options['fields']['field_event_doc_coll_doc']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_doc_coll_doc']['alter']['text'] = '<span class="file"><img class="file-icon" alt="" title="application/pdf" src="/modules/file/icons/application-pdf.png"> <a href="[field_event_doc_coll_doc]">Download [field_event_doc_coll_type]</a></span>';
  $handler->display->display_options['fields']['field_event_doc_coll_doc']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_doc_coll_doc']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_event_doc_coll_doc']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Sort criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['relationship'] = 'field_event_doc_event_target_id';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event_doc' => 'event_doc',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_event_doc_event_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search Documents';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Departments, Programs, and Initiatives (field_event_department) */
  $handler->display->display_options['filters']['field_event_department_target_id']['id'] = 'field_event_department_target_id';
  $handler->display->display_options['filters']['field_event_department_target_id']['table'] = 'field_data_field_event_department';
  $handler->display->display_options['filters']['field_event_department_target_id']['field'] = 'field_event_department_target_id';
  $handler->display->display_options['filters']['field_event_department_target_id']['relationship'] = 'field_event_doc_event_target_id';
  $handler->display->display_options['filters']['field_event_department_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_department_target_id']['expose']['operator_id'] = 'field_event_department_target_id_op';
  $handler->display->display_options['filters']['field_event_department_target_id']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_event_department_target_id']['expose']['operator'] = 'field_event_department_target_id_op';
  $handler->display->display_options['filters']['field_event_department_target_id']['expose']['identifier'] = 'field_event_department_target_id';
  $handler->display->display_options['filters']['field_event_department_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'From Date';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value2']['expose']['operator_id'] = 'field_event_date_value2_op';
  $handler->display->display_options['filters']['field_event_date_value2']['expose']['label'] = 'To Date';
  $handler->display->display_options['filters']['field_event_date_value2']['expose']['operator'] = 'field_event_date_value2_op';
  $handler->display->display_options['filters']['field_event_date_value2']['expose']['identifier'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value2']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'field_event_doc_event_target_id';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_event_doc_date' => 'field_event_doc_date',
    'field_event_doc_event' => 'field_event_doc_event',
    'field_event_doc_coll_type' => 'field_event_doc_coll_type',
    'field_event_doc_coll_doc' => 'field_event_doc_coll_doc',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_event_doc_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_event_doc_event' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_event_doc_coll_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_event_doc_coll_doc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_enumerate_raw' => 'views_aggregator_enumerate_raw',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'event-documents';
  $export['event_documents'] = $view;

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Start Over';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'upcoming-events--article article-content';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Preview Image */
  $handler->display->display_options['fields']['field_event_preview_image']['id'] = 'field_event_preview_image';
  $handler->display->display_options['fields']['field_event_preview_image']['table'] = 'field_data_field_event_preview_image';
  $handler->display->display_options['fields']['field_event_preview_image']['field'] = 'field_event_preview_image';
  $handler->display->display_options['fields']['field_event_preview_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_preview_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_preview_image']['element_class'] = 'article-content--media';
  $handler->display->display_options['fields']['field_event_preview_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_preview_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_preview_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_preview_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'article-content--title cta-secondary';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'article-content--event-time';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'article-content--description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Select a Day';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value']['add_delta'] = 'yes';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'article-content';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Preview Image */
  $handler->display->display_options['fields']['field_event_preview_image']['id'] = 'field_event_preview_image';
  $handler->display->display_options['fields']['field_event_preview_image']['table'] = 'field_data_field_event_preview_image';
  $handler->display->display_options['fields']['field_event_preview_image']['field'] = 'field_event_preview_image';
  $handler->display->display_options['fields']['field_event_preview_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_preview_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_preview_image']['element_class'] = 'article-content--media';
  $handler->display->display_options['fields']['field_event_preview_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_preview_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_preview_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_preview_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'article-content--title cta-secondary';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'article-content--event-time';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'article-content--description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['path'] = 'events';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'events.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Homepage Featured Event Block */
  $handler = $view->new_display('block', 'Homepage Featured Event Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['display_description'] = 'Displays the first event with a featured image';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Is City Event */
  $handler->display->display_options['fields']['field_city_event']['id'] = 'field_city_event';
  $handler->display->display_options['fields']['field_city_event']['table'] = 'field_data_field_city_event';
  $handler->display->display_options['fields']['field_city_event']['field'] = 'field_city_event';
  $handler->display->display_options['fields']['field_city_event']['label'] = '';
  $handler->display->display_options['fields']['field_city_event']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_city_event']['alter']['text'] = '<div class="event-type">
	<svg class="event-type--icon">
		<use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="sites/all/themes/neato/somerville/img/svg-sprite.svg#badge"></use>
	</svg>
	<div class="event-type--icon-text-wrapper">
		<span class="event-type--icon-text">City Event</span>
	</div>
</div>';
  $handler->display->display_options['fields']['field_city_event']['element_label_colon'] = FALSE;
  /* Field: Content: Preview Image */
  $handler->display->display_options['fields']['field_event_preview_image']['id'] = 'field_event_preview_image';
  $handler->display->display_options['fields']['field_event_preview_image']['table'] = 'field_data_field_event_preview_image';
  $handler->display->display_options['fields']['field_event_preview_image']['field'] = 'field_event_preview_image';
  $handler->display->display_options['fields']['field_event_preview_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_preview_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_preview_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_preview_image']['element_class'] = 'article-content--media';
  $handler->display->display_options['fields']['field_event_preview_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_preview_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_preview_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_preview_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'article-content--date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short_month',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'short_date',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date_1']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Homepage Event Block */
  $handler = $view->new_display('block', 'Homepage Event Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['display_description'] = 'Displays the 2nd & 3rd upcoming event';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'View All Events Footer';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="cta-primary-wrapper">
	<a class="cta-primary" href="/events">View all Events</a>
</div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'article-content--title cta-secondary';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'article-content--date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short_month',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['text'] = '<div class="article-content--media"><div class="article-content--date "><div class="date-display"><span class="date-display--month">[field_event_date]</span><span class="date-display--day">[field_event_date_1]</span></div></div></div>';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'short_date',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_date_1']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '140',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Org Unit Block No Photos */
  $handler = $view->new_display('block', 'Org Unit Block No Photos', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['display_description'] = 'Org Unit sorted list of events with no preview photos';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'View All Events Footer';
  $handler->display->display_options['footer']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="cta-primary-wrapper">
	<a class="cta-primary" href="/events">View all Events</a>
</div>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_department_target_id']['id'] = 'field_event_department_target_id';
  $handler->display->display_options['relationships']['field_event_department_target_id']['table'] = 'field_data_field_event_department';
  $handler->display->display_options['relationships']['field_event_department_target_id']['field'] = 'field_event_department_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '<div class="article-content--date "><div class="date-display"><span class="date-display--month">[field_event_date]</span></div></div>';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short_month',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['text'] = '<div class="article-content--media"><div class="article-content--date "><div class="date-display"><span class="date-display--month">[field_event_date]</span><span class="date-display--day">[field_event_date_1]</span></div></div></div>';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'short_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_date_1']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '140',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Departments, Programs, and Initiatives (field_event_department) */
  $handler->display->display_options['arguments']['field_event_department_target_id']['id'] = 'field_event_department_target_id';
  $handler->display->display_options['arguments']['field_event_department_target_id']['table'] = 'field_data_field_event_department';
  $handler->display->display_options['arguments']['field_event_department_target_id']['field'] = 'field_event_department_target_id';
  $handler->display->display_options['arguments']['field_event_department_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_department_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_event_department_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_department_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_department_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Select a Day';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value']['add_delta'] = 'yes';
  $handler->display->display_options['block_caching'] = '5';

  /* Display: Events 3x */
  $handler = $view->new_display('block', 'Events 3x', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'upcoming-events--images';
  $handler->display->display_options['display_description'] = 'Row of 3 Upcoming Events';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'upcoming-events--article';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Is City Event */
  $handler->display->display_options['fields']['field_city_event']['id'] = 'field_city_event';
  $handler->display->display_options['fields']['field_city_event']['table'] = 'field_data_field_city_event';
  $handler->display->display_options['fields']['field_city_event']['field'] = 'field_city_event';
  $handler->display->display_options['fields']['field_city_event']['label'] = '';
  $handler->display->display_options['fields']['field_city_event']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_city_event']['alter']['text'] = '<div class="event-type">
	<svg class="event-type--icon">
		<use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="sites/all/themes/neato/somerville/img/svg-sprite.svg#badge"></use>
	</svg>
	<div class="event-type--icon-text-wrapper">
		<span class="event-type--icon-text">City Event</span>
	</div>
</div>';
  $handler->display->display_options['fields']['field_city_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city_event']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_city_event']['hide_empty'] = TRUE;
  /* Field: Content: Preview Image */
  $handler->display->display_options['fields']['field_event_preview_image']['id'] = 'field_event_preview_image';
  $handler->display->display_options['fields']['field_event_preview_image']['table'] = 'field_data_field_event_preview_image';
  $handler->display->display_options['fields']['field_event_preview_image']['field'] = 'field_event_preview_image';
  $handler->display->display_options['fields']['field_event_preview_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_preview_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_preview_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_preview_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_preview_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'article-content--event-time';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date_full',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '140',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Select a Day';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value']['add_delta'] = 'yes';
  $handler->display->display_options['block_caching'] = '5';
  $export['events'] = $view;

  $view = new view();
  $view->name = 'faq_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FAQ Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FAQs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'faq';
  $export['faq_listing'] = $view;

  $view = new view();
  $view->name = 'faqs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FAQs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FAQs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_service_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'link-list--item';
  $handler->display->display_options['style_options']['class'] = 'link-list__items';
  $handler->display->display_options['style_options']['wrapper_class'] = 'link-list component';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Coming Soon';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div align=center><h2>Check back soon for new Frequently Asked Questions.</h2></div>
<p>The City of Somerville is still collecting new FAQs for this site. In the meantime, you can get answers now by contacting <a href="tel:311">311</a> (or <a href="tel:617-666-3311>617-666-3311</a> from outside of the City.</p><p>If you have a question for a specific department or staff member, you can also find contact information on <a href="/departments">our department pages</a> and <a href="/staff-contact-directory">our employee directory</a>.</p><br><br><br>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );

  /* Display: FAQs */
  $handler = $view->new_display('page', 'FAQs', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_faq_department']['id'] = 'field_faq_department';
  $handler->display->display_options['fields']['field_faq_department']['table'] = 'field_data_field_faq_department';
  $handler->display->display_options['fields']['field_faq_department']['field'] = 'field_faq_department';
  $handler->display->display_options['fields']['field_faq_department']['label'] = '';
  $handler->display->display_options['fields']['field_faq_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faq_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_department']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_faq_department']['group_columns'] = array(
    'bundle' => 'bundle',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'cta-secondary';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Service Category */
  $handler->display->display_options['fields']['field_service_category']['id'] = 'field_service_category';
  $handler->display->display_options['fields']['field_service_category']['table'] = 'field_data_field_service_category';
  $handler->display->display_options['fields']['field_service_category']['field'] = 'field_service_category';
  $handler->display->display_options['fields']['field_service_category']['label'] = '';
  $handler->display->display_options['fields']['field_service_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_service_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_category']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_service_category']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'faq';

  /* Display: FAQs */
  $handler = $view->new_display('page', 'FAQs', 'page_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_faq_department']['id'] = 'field_faq_department';
  $handler->display->display_options['fields']['field_faq_department']['table'] = 'field_data_field_faq_department';
  $handler->display->display_options['fields']['field_faq_department']['field'] = 'field_faq_department';
  $handler->display->display_options['fields']['field_faq_department']['label'] = '';
  $handler->display->display_options['fields']['field_faq_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faq_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_department']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_faq_department']['group_columns'] = array(
    'bundle' => 'bundle',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'cta-secondary';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Service Category */
  $handler->display->display_options['fields']['field_service_category']['id'] = 'field_service_category';
  $handler->display->display_options['fields']['field_service_category']['table'] = 'field_data_field_service_category';
  $handler->display->display_options['fields']['field_service_category']['field'] = 'field_service_category';
  $handler->display->display_options['fields']['field_service_category']['label'] = '';
  $handler->display->display_options['fields']['field_service_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_service_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_category']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_service_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Department (field_faq_department) */
  $handler->display->display_options['arguments']['field_faq_department_target_id']['id'] = 'field_faq_department_target_id';
  $handler->display->display_options['arguments']['field_faq_department_target_id']['table'] = 'field_data_field_faq_department';
  $handler->display->display_options['arguments']['field_faq_department_target_id']['field'] = 'field_faq_department_target_id';
  $handler->display->display_options['arguments']['field_faq_department_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_faq_department_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_faq_department_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_faq_department_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'faq/%';
  $export['faqs'] = $view;

  $view = new view();
  $view->name = 'faqs_common_requests';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'FAQs Common Requests';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'key-services__items';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'link-list--item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'link-list__items';
  $handler->display->display_options['style_options']['wrapper_class'] = 'link-list componenet';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'H3 Title';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h3 class="link-list__group-title">
  <a href="#" class="link-list__group-title-text">Common FAQs</a>
</h3>';
  /* Field: Block: faq */
  $handler->display->display_options['fields']['field_faq_block_faq']['id'] = 'field_faq_block_faq';
  $handler->display->display_options['fields']['field_faq_block_faq']['table'] = 'field_data_field_faq_block_faq';
  $handler->display->display_options['fields']['field_faq_block_faq']['field'] = 'field_faq_block_faq';
  $handler->display->display_options['fields']['field_faq_block_faq']['label'] = '';
  $handler->display->display_options['fields']['field_faq_block_faq']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_faq_block_faq']['element_class'] = 'cta-secondary';
  $handler->display->display_options['fields']['field_faq_block_faq']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_block_faq']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_faq_block_faq']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_faq_block_faq']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_faq_block_faq']['delta_offset'] = '0';
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq_common_block' => 'faq_common_block',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['faqs_common_requests'] = $view;

  $view = new view();
  $view->name = 'form_library';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Form Library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Form Library';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_doc_file' => 'field_doc_file',
    'field_doc_department' => 'field_doc_department',
  );
  $handler->display->display_options['style_options']['default'] = 'field_doc_file';
  $handler->display->display_options['style_options']['info'] = array(
    'field_doc_file' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_department' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_file']['id'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['table'] = 'field_data_field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['field'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_doc_file']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['field_doc_file']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_doc_file']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_doc_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_doc_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doc_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_doc_file']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_doc_file]';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_doc_department']['id'] = 'field_doc_department';
  $handler->display->display_options['fields']['field_doc_department']['table'] = 'field_data_field_doc_department';
  $handler->display->display_options['fields']['field_doc_department']['field'] = 'field_doc_department';
  $handler->display->display_options['fields']['field_doc_department']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_doc_department']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Document Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_value']['id'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_value']['field'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['value'] = array(
    'Form' => 'Form',
  );
  $handler->display->display_options['filters']['field_document_type_value']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Form Name (contains)';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Department (field_doc_department) */
  $handler->display->display_options['filters']['field_doc_department_target_id']['id'] = 'field_doc_department_target_id';
  $handler->display->display_options['filters']['field_doc_department_target_id']['table'] = 'field_data_field_doc_department';
  $handler->display->display_options['filters']['field_doc_department_target_id']['field'] = 'field_doc_department_target_id';
  $handler->display->display_options['filters']['field_doc_department_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_doc_department_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_doc_department_target_id']['expose']['operator_id'] = 'field_doc_department_target_id_op';
  $handler->display->display_options['filters']['field_doc_department_target_id']['expose']['label'] = 'Department (contains)';
  $handler->display->display_options['filters']['field_doc_department_target_id']['expose']['operator'] = 'field_doc_department_target_id_op';
  $handler->display->display_options['filters']['field_doc_department_target_id']['expose']['identifier'] = 'field_doc_department_target_id';
  $handler->display->display_options['filters']['field_doc_department_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_doc_department_target_id']['group_info']['label'] = 'Department (field_doc_department)';
  $handler->display->display_options['filters']['field_doc_department_target_id']['group_info']['identifier'] = 'field_doc_department_target_id';
  $handler->display->display_options['filters']['field_doc_department_target_id']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_doc_department_target_id']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'forms';
  $export['form_library'] = $view;

  $view = new view();
  $view->name = 'gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'media-gallery--item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'media-gallery--items js-media-gallery-carousel';
  $handler->display->display_options['style_options']['wrapper_class'] = 'component media-gallery';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Photo & Video Stream Header';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h2 class="heading-decorated"><span class="heading-decorated__inner">Photo &amp; Video Stream</span></h2>';
  /* Field: Content: Media Item */
  $handler->display->display_options['fields']['field_gallery_media_item']['id'] = 'field_gallery_media_item';
  $handler->display->display_options['fields']['field_gallery_media_item']['table'] = 'field_data_field_gallery_media_item';
  $handler->display->display_options['fields']['field_gallery_media_item']['field'] = 'field_gallery_media_item';
  $handler->display->display_options['fields']['field_gallery_media_item']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_media_item']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_media_item']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_media_item']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_media_item']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_gallery_media_item']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_gallery_media_item']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_media_item']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_media_item']['multi_type'] = 'ul';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery' => 'gallery',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Homepage Gallery';

  /* Display: Homepage Block */
  $handler = $view->new_display('block', 'Homepage Block', 'block');
  $handler->display->display_options['block_caching'] = '8';
  $export['gallery'] = $view;

  $view = new view();
  $view->name = 'government_buildings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Government Buildings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Government Buildings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Building Location */
  $handler->display->display_options['fields']['field_building_location']['id'] = 'field_building_location';
  $handler->display->display_options['fields']['field_building_location']['table'] = 'field_data_field_building_location';
  $handler->display->display_options['fields']['field_building_location']['field'] = 'field_building_location';
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_building_hours']['id'] = 'field_building_hours';
  $handler->display->display_options['fields']['field_building_hours']['table'] = 'field_data_field_building_hours';
  $handler->display->display_options['fields']['field_building_hours']['field'] = 'field_building_hours';
  $handler->display->display_options['fields']['field_building_hours']['delta_offset'] = '0';
  /* Field: Content: Off Hours */
  $handler->display->display_options['fields']['field_building_off_hours']['id'] = 'field_building_off_hours';
  $handler->display->display_options['fields']['field_building_off_hours']['table'] = 'field_data_field_building_off_hours';
  $handler->display->display_options['fields']['field_building_off_hours']['field'] = 'field_building_off_hours';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'building' => 'building',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'government-buildings';
  $export['government_buildings'] = $view;

  $view = new view();
  $view->name = 'hud_plans_and_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hud Plans and Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'HUD Plans and Reports';
  $handler->display->display_options['css_class'] = 'views-widget';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_file']['id'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['table'] = 'field_data_field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['field'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_doc_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_doc_file']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_doc_file']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_doc_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doc_file']['type'] = 'file_url_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_doc_file]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: Content: Document Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_value']['id'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_value']['field'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['value'] = array(
    'Information' => 'Information',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'HUD Document Type';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Action Plan',
      'operator' => 'contains',
      'value' => 'Action Plan',
    ),
    2 => array(
      'title' => 'CAPER',
      'operator' => 'contains',
      'value' => 'CAPER',
    ),
    3 => array(
      'title' => 'Citizen Participation Plan',
      'operator' => 'contains',
      'value' => 'Citizen Participation Plan',
    ),
    4 => array(
      'title' => 'Consolidated',
      'operator' => 'contains',
      'value' => 'Consolidated',
    ),
    5 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['title_1']['group_info']['label'] = 'Year';
  $handler->display->display_options['filters']['title_1']['group_info']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['title_1']['group_info']['group_items'] = array(
    1 => array(
      'title' => '2017',
      'operator' => 'contains',
      'value' => '2017',
    ),
    2 => array(
      'title' => '2016',
      'operator' => 'contains',
      'value' => '2016',
    ),
    3 => array(
      'title' => '2015',
      'operator' => 'contains',
      'value' => '2015',
    ),
    4 => array(
      'title' => '2014',
      'operator' => 'contains',
      'value' => '2014',
    ),
    5 => array(
      'title' => '2013',
      'operator' => 'contains',
      'value' => '2013',
    ),
    6 => array(
      'title' => '2012',
      'operator' => 'contains',
      'value' => '2012',
    ),
    7 => array(
      'title' => '2011',
      'operator' => 'contains',
      'value' => '2011',
    ),
    8 => array(
      'title' => '2010',
      'operator' => 'contains',
      'value' => '2010',
    ),
    9 => array(
      'title' => '2009',
      'operator' => 'contains',
      'value' => '2009',
    ),
    10 => array(
      'title' => '2008',
      'operator' => 'contains',
      'value' => '2008',
    ),
    11 => array(
      'title' => '2007',
      'operator' => 'contains',
      'value' => '2007',
    ),
    12 => array(
      'title' => '2006',
      'operator' => 'contains',
      'value' => '2006',
    ),
    13 => array(
      'title' => '2005',
      'operator' => 'contains',
      'value' => '2005',
    ),
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'title';
  $handler->display->display_options['filters']['title_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_2']['value'] = 'HUD';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'departments/ospcd/economic-development/hud-plans-and-reports';
  $export['hud_plans_and_reports'] = $view;

  $view = new view();
  $view->name = 'information_documents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Information Guides';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Information Guides';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_doc_file' => 'field_doc_file',
    'field_doc_department' => 'field_doc_department',
  );
  $handler->display->display_options['style_options']['default'] = 'field_doc_file';
  $handler->display->display_options['style_options']['info'] = array(
    'field_doc_file' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_department' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_file']['id'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['table'] = 'field_data_field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['field'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_doc_file']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['field_doc_file']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_doc_file']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_doc_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_doc_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doc_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_doc_file']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_doc_file]';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_doc_department']['id'] = 'field_doc_department';
  $handler->display->display_options['fields']['field_doc_department']['table'] = 'field_data_field_doc_department';
  $handler->display->display_options['fields']['field_doc_department']['field'] = 'field_doc_department';
  $handler->display->display_options['fields']['field_doc_department']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_doc_department']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Document Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_value']['id'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_value']['field'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['value'] = array(
    'Information' => 'Information',
  );
  $handler->display->display_options['filters']['field_document_type_value']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Form Name (contains)';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Department (field_doc_department) */
  $handler->display->display_options['filters']['field_doc_department_target_id']['id'] = 'field_doc_department_target_id';
  $handler->display->display_options['filters']['field_doc_department_target_id']['table'] = 'field_data_field_doc_department';
  $handler->display->display_options['filters']['field_doc_department_target_id']['field'] = 'field_doc_department_target_id';
  $handler->display->display_options['filters']['field_doc_department_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_doc_department_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_doc_department_target_id']['expose']['operator_id'] = 'field_doc_department_target_id_op';
  $handler->display->display_options['filters']['field_doc_department_target_id']['expose']['label'] = 'Department (contains)';
  $handler->display->display_options['filters']['field_doc_department_target_id']['expose']['operator'] = 'field_doc_department_target_id_op';
  $handler->display->display_options['filters']['field_doc_department_target_id']['expose']['identifier'] = 'field_doc_department_target_id';
  $handler->display->display_options['filters']['field_doc_department_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_doc_department_target_id']['group_info']['label'] = 'Department (field_doc_department)';
  $handler->display->display_options['filters']['field_doc_department_target_id']['group_info']['identifier'] = 'field_doc_department_target_id';
  $handler->display->display_options['filters']['field_doc_department_target_id']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_doc_department_target_id']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'information';
  $export['information_documents'] = $view;

  $view = new view();
  $view->name = 'job_postings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Job Postings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Job Postings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Job Postings Heading';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Current Job Postings</h2>';
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'Job Postings Footer';
  $handler->display->display_options['footer']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h4>Employment Information</h4>
<p>&nbsp;</p>
<h5>Police Officers and Firefighters</h5>
<p>The City of Somerville fills vacant positions of Police Officers and Firefighters through the Massachusetts Human Resources Division, Civil Service Unit as required by the State of Massachusetts. For more information on Civil Service testing or to apply for a test, please go to <a href="http://www.mass.gov/anf/employment-equal-access-disability/civil-serv-info/">mass.gov/civilservice (or click here)</a>.</p>
<p>Police Officers and Firefighters are employed through the Massachusetts Human Resources Division, Civil Service Unit as needed. After the examination and certification of candidates by the Massachusetts Resources Division, which give preference to Veterans, the City of Somerville utilizes the Residency Preference system allowed by the Massachusetts law for new hires to police officer and firefighter positions.  Preference is given to candidates who reside in Somerville for one year prior to the date of the civil service examination. Veterans Preference is provided for appointment to Civil Service positions to veterans as per the Massachusetts Civil Service System.</p>
<h5>Lunch Attendants and Cafeteria Workers</h5>
<p>If you wish to apply for a Lunch Attendant or Cafeteria Worker position in Somerville, please follow the instructions below:</p>
<ul>
  <ul>
    <li>Go to <a href="http://www.schoolspring.com/jobs/?employer=16902">http://www.schoolspring.com/jobs/?employer=16902</a></li>
    <li>Click on the position you are applying for</li>
    <li>Click &quot;Apply for this job&quot;</li>
    <li>Select &quot;Sign up&quot; to create a new profile, follow prompts and answer questions completely</li>
    <li>Once your profile is complete click &quot;submit application&quot;</li>
  </ul>
</ul>
<p>Should you have any questions throughout the application process, please contact Human Resources at 617-629-5230. </p>
<h5>Crossing Guards</h5>
<p>Crossing Guards are employed as necessary.If you are interested in this position, please complete an application (<a href="http://www.somervillema.gov/sites/default/files/documents/employment-application-03-12.pdf">click here</a>) and return it to Somerville City Hall, 93 Highland Ave., Somerville, MA  02143. The application will be logged in and forwarded to the Police Department for review. You will be contacted if a personal interview is desired.</p>
';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['empty'] = 'Please check back for job postings as they become available. There are no active postings at this time.';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Posting Date */
  $handler->display->display_options['fields']['field_posting_date']['id'] = 'field_posting_date';
  $handler->display->display_options['fields']['field_posting_date']['table'] = 'field_data_field_posting_date';
  $handler->display->display_options['fields']['field_posting_date']['field'] = 'field_posting_date';
  $handler->display->display_options['fields']['field_posting_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'job_posting' => 'job_posting',
  );
  /* Filter criterion: Content: Posting Date - end date (field_posting_date:value2) */
  $handler->display->display_options['filters']['field_posting_date_value2']['id'] = 'field_posting_date_value2';
  $handler->display->display_options['filters']['field_posting_date_value2']['table'] = 'field_data_field_posting_date';
  $handler->display->display_options['filters']['field_posting_date_value2']['field'] = 'field_posting_date_value2';
  $handler->display->display_options['filters']['field_posting_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_posting_date_value2']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'jobs';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'job-postings.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Department (field_department) */
  $handler->display->display_options['arguments']['field_department_target_id']['id'] = 'field_department_target_id';
  $handler->display->display_options['arguments']['field_department_target_id']['table'] = 'field_data_field_department';
  $handler->display->display_options['arguments']['field_department_target_id']['field'] = 'field_department_target_id';
  $handler->display->display_options['arguments']['field_department_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_department_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_department_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_department_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'jobs/%';
  $export['job_postings'] = $view;

  $view = new view();
  $view->name = 'organizational_unit_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Organizational Unit Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Departments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organizational_unit' => 'organizational_unit',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'departments';
  $export['organizational_unit_listing'] = $view;

  $view = new view();
  $view->name = 'people_entity_references';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'People Entity References';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'official' => 'official',
  );

  /* Display: Entity Reference (Alderman) */
  $handler = $view->new_display('entityreference', 'Entity Reference (Alderman)', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'official' => 'official',
  );
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'official';

  /* Display: Entity Reference (School Committee Member) */
  $handler = $view->new_display('entityreference', 'Entity Reference (School Committee Member)', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'official' => 'official',
  );
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'official';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Entity Reference (State Senator) */
  $handler = $view->new_display('entityreference', 'Entity Reference (State Senator)', 'entityreference_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'official' => 'official',
  );
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'official';

  /* Display: Entity Reference (State Rep) */
  $handler = $view->new_display('entityreference', 'Entity Reference (State Rep)', 'entityreference_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'official' => 'official',
  );
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'official';
  $export['people_entity_references'] = $view;

  $view = new view();
  $view->name = 'programs_initiatives';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Programs & Initiatives';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Programs & Initiatives';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_program_department',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'link-list--item';
  $handler->display->display_options['style_options']['class'] = 'link-list__items';
  $handler->display->display_options['style_options']['wrapper_class'] = 'link-list component';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_program_department']['id'] = 'field_program_department';
  $handler->display->display_options['fields']['field_program_department']['table'] = 'field_data_field_program_department';
  $handler->display->display_options['fields']['field_program_department']['field'] = 'field_program_department';
  $handler->display->display_options['fields']['field_program_department']['label'] = '';
  $handler->display->display_options['fields']['field_program_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_department']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_program_department']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'programs_initiatives' => 'programs_initiatives',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3 class="cta-secondary">[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_program_department']['id'] = 'field_program_department';
  $handler->display->display_options['fields']['field_program_department']['table'] = 'field_data_field_program_department';
  $handler->display->display_options['fields']['field_program_department']['field'] = 'field_program_department';
  $handler->display->display_options['fields']['field_program_department']['label'] = '';
  $handler->display->display_options['fields']['field_program_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_department']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_program_department']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_program_department']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'departments/programs';

  /* Display: Homepage Block */
  $handler = $view->new_display('block', 'Homepage Block', 'block_1');
  $handler->display->display_options['display_description'] = '2 Featured Programs & Initiatives';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'programs--article article-content';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'View All Footer';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="cta-primary-wrapper">
  <a class="cta-primary" href="/departments/programs">View All City Program &amp; Initiatives</a>
</div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Preview Image */
  $handler->display->display_options['fields']['field_program_preview_image']['id'] = 'field_program_preview_image';
  $handler->display->display_options['fields']['field_program_preview_image']['table'] = 'field_data_field_program_preview_image';
  $handler->display->display_options['fields']['field_program_preview_image']['field'] = 'field_program_preview_image';
  $handler->display->display_options['fields']['field_program_preview_image']['label'] = '';
  $handler->display->display_options['fields']['field_program_preview_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_program_preview_image']['element_class'] = 'article-content--media';
  $handler->display->display_options['fields']['field_program_preview_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_preview_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_program_preview_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_program_preview_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'article-content--title cta-secondary';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Preview Description */
  $handler->display->display_options['fields']['field_prog_preview_description']['id'] = 'field_prog_preview_description';
  $handler->display->display_options['fields']['field_prog_preview_description']['table'] = 'field_data_field_prog_preview_description';
  $handler->display->display_options['fields']['field_prog_preview_description']['field'] = 'field_prog_preview_description';
  $handler->display->display_options['fields']['field_prog_preview_description']['label'] = '';
  $handler->display->display_options['fields']['field_prog_preview_description']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_prog_preview_description']['element_class'] = 'article-content--description';
  $handler->display->display_options['fields']['field_prog_preview_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prog_preview_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'programs_initiatives' => 'programs_initiatives',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: 3 Block */
  $handler = $view->new_display('block', '3 Block', 'block_2');
  $handler->display->display_options['display_description'] = '3 Newest Programs & Initiatives';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'programs--article article-content';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'View All Footer';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="cta-primary-wrapper">
  <a class="cta-primary" href="/departments/programs">View All City Program &amp; Initiatives</a>
</div>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_program_department_target_id']['id'] = 'field_program_department_target_id';
  $handler->display->display_options['relationships']['field_program_department_target_id']['table'] = 'field_data_field_program_department';
  $handler->display->display_options['relationships']['field_program_department_target_id']['field'] = 'field_program_department_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Preview Image */
  $handler->display->display_options['fields']['field_program_preview_image']['id'] = 'field_program_preview_image';
  $handler->display->display_options['fields']['field_program_preview_image']['table'] = 'field_data_field_program_preview_image';
  $handler->display->display_options['fields']['field_program_preview_image']['field'] = 'field_program_preview_image';
  $handler->display->display_options['fields']['field_program_preview_image']['label'] = '';
  $handler->display->display_options['fields']['field_program_preview_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_program_preview_image']['element_class'] = 'article-content--media';
  $handler->display->display_options['fields']['field_program_preview_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_preview_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_program_preview_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_program_preview_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'article-content--title cta-secondary';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Preview Description */
  $handler->display->display_options['fields']['field_prog_preview_description']['id'] = 'field_prog_preview_description';
  $handler->display->display_options['fields']['field_prog_preview_description']['table'] = 'field_data_field_prog_preview_description';
  $handler->display->display_options['fields']['field_prog_preview_description']['field'] = 'field_prog_preview_description';
  $handler->display->display_options['fields']['field_prog_preview_description']['label'] = '';
  $handler->display->display_options['fields']['field_prog_preview_description']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_prog_preview_description']['element_class'] = 'article-content--description';
  $handler->display->display_options['fields']['field_prog_preview_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prog_preview_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Department (field_program_department) */
  $handler->display->display_options['arguments']['field_program_department_target_id']['id'] = 'field_program_department_target_id';
  $handler->display->display_options['arguments']['field_program_department_target_id']['table'] = 'field_data_field_program_department';
  $handler->display->display_options['arguments']['field_program_department_target_id']['field'] = 'field_program_department_target_id';
  $handler->display->display_options['arguments']['field_program_department_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_program_department_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_program_department_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_program_department_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_program_department_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'programs_initiatives' => 'programs_initiatives',
  );
  $handler->display->display_options['block_caching'] = '4';
  $export['programs_initiatives'] = $view;

  $view = new view();
  $view->name = 'reports_and_decisions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Reports and Decisions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reports and Decisions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_street_name' => 'field_street_name',
    'field_street_number' => 'field_street_number',
    'field_case_number' => 'field_case_number',
    'field_submission_date' => 'field_submission_date',
    'field_report_type' => 'field_report_type',
    'field_decision_file' => 'field_decision_file',
    'field_attachments' => 'field_attachments',
  );
  $handler->display->display_options['style_options']['default'] = 'field_street_name';
  $handler->display->display_options['style_options']['info'] = array(
    'field_street_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_street_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_submission_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_report_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_decision_file' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_attachments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Reports and Decisions';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Reports and Decisions</h2>';
  /* Field: Content: Street Name */
  $handler->display->display_options['fields']['field_street_name']['id'] = 'field_street_name';
  $handler->display->display_options['fields']['field_street_name']['table'] = 'field_data_field_street_name';
  $handler->display->display_options['fields']['field_street_name']['field'] = 'field_street_name';
  $handler->display->display_options['fields']['field_street_name']['label'] = 'Street';
  /* Field: Content: Street Number */
  $handler->display->display_options['fields']['field_street_number']['id'] = 'field_street_number';
  $handler->display->display_options['fields']['field_street_number']['table'] = 'field_data_field_street_number';
  $handler->display->display_options['fields']['field_street_number']['field'] = 'field_street_number';
  $handler->display->display_options['fields']['field_street_number']['label'] = 'Number';
  /* Field: Content: Case Number */
  $handler->display->display_options['fields']['field_case_number']['id'] = 'field_case_number';
  $handler->display->display_options['fields']['field_case_number']['table'] = 'field_data_field_case_number';
  $handler->display->display_options['fields']['field_case_number']['field'] = 'field_case_number';
  /* Field: Content: Submission Date */
  $handler->display->display_options['fields']['field_submission_date']['id'] = 'field_submission_date';
  $handler->display->display_options['fields']['field_submission_date']['table'] = 'field_data_field_submission_date';
  $handler->display->display_options['fields']['field_submission_date']['field'] = 'field_submission_date';
  $handler->display->display_options['fields']['field_submission_date']['label'] = 'First Hearing Date';
  $handler->display->display_options['fields']['field_submission_date']['settings'] = array(
    'format_type' => 'month_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Report Type */
  $handler->display->display_options['fields']['field_report_type']['id'] = 'field_report_type';
  $handler->display->display_options['fields']['field_report_type']['table'] = 'field_data_field_report_type';
  $handler->display->display_options['fields']['field_report_type']['field'] = 'field_report_type';
  $handler->display->display_options['fields']['field_report_type']['label'] = 'Reports';
  /* Field: Content: Decision File */
  $handler->display->display_options['fields']['field_decision_file']['id'] = 'field_decision_file';
  $handler->display->display_options['fields']['field_decision_file']['table'] = 'field_data_field_decision_file';
  $handler->display->display_options['fields']['field_decision_file']['field'] = 'field_decision_file';
  $handler->display->display_options['fields']['field_decision_file']['label'] = 'Decisions';
  $handler->display->display_options['fields']['field_decision_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_decision_file']['delta_offset'] = '0';
  /* Field: Content: Other File */
  $handler->display->display_options['fields']['field_attachments']['id'] = 'field_attachments';
  $handler->display->display_options['fields']['field_attachments']['table'] = 'field_data_field_attachments';
  $handler->display->display_options['fields']['field_attachments']['field'] = 'field_attachments';
  $handler->display->display_options['fields']['field_attachments']['label'] = 'Other';
  $handler->display->display_options['fields']['field_attachments']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attachments']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reports_and_decisions' => 'reports_and_decisions',
  );
  /* Filter criterion: Content: Street Name (field_street_name) */
  $handler->display->display_options['filters']['field_street_name_value']['id'] = 'field_street_name_value';
  $handler->display->display_options['filters']['field_street_name_value']['table'] = 'field_data_field_street_name';
  $handler->display->display_options['filters']['field_street_name_value']['field'] = 'field_street_name_value';
  $handler->display->display_options['filters']['field_street_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_street_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_street_name_value']['expose']['operator_id'] = 'field_street_name_value_op';
  $handler->display->display_options['filters']['field_street_name_value']['expose']['label'] = 'Street Name (contains)';
  $handler->display->display_options['filters']['field_street_name_value']['expose']['operator'] = 'field_street_name_value_op';
  $handler->display->display_options['filters']['field_street_name_value']['expose']['identifier'] = 'field_street_name_value';
  $handler->display->display_options['filters']['field_street_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Case Number (field_case_number) */
  $handler->display->display_options['filters']['field_case_number_value']['id'] = 'field_case_number_value';
  $handler->display->display_options['filters']['field_case_number_value']['table'] = 'field_data_field_case_number';
  $handler->display->display_options['filters']['field_case_number_value']['field'] = 'field_case_number_value';
  $handler->display->display_options['filters']['field_case_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_case_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_case_number_value']['expose']['operator_id'] = 'field_case_number_value_op';
  $handler->display->display_options['filters']['field_case_number_value']['expose']['label'] = 'Case Number';
  $handler->display->display_options['filters']['field_case_number_value']['expose']['operator'] = 'field_case_number_value_op';
  $handler->display->display_options['filters']['field_case_number_value']['expose']['identifier'] = 'field_case_number_value';
  $handler->display->display_options['filters']['field_case_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'departments/planning-board/reports-and-decisions';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'reports-and-decisions.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['reports_and_decisions'] = $view;

  $view = new view();
  $view->name = 'resident_address';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resident Address';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resident Address';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Precinct (field_resident_precinct) */
  $handler->display->display_options['relationships']['field_resident_precinct_tid']['id'] = 'field_resident_precinct_tid';
  $handler->display->display_options['relationships']['field_resident_precinct_tid']['table'] = 'field_data_field_resident_precinct';
  $handler->display->display_options['relationships']['field_resident_precinct_tid']['field'] = 'field_resident_precinct_tid';
  /* Relationship: Taxonomy term: Content using Precinct */
  $handler->display->display_options['relationships']['reverse_field_official_precinct_node']['id'] = 'reverse_field_official_precinct_node';
  $handler->display->display_options['relationships']['reverse_field_official_precinct_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_official_precinct_node']['field'] = 'reverse_field_official_precinct_node';
  $handler->display->display_options['relationships']['reverse_field_official_precinct_node']['relationship'] = 'field_resident_precinct_tid';
  /* Relationship: Content: Type (field_type) */
  $handler->display->display_options['relationships']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['relationships']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['relationships']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['relationships']['field_type_tid']['relationship'] = 'reverse_field_official_precinct_node';
  /* Relationship: Taxonomy term: Content using Type */
  $handler->display->display_options['relationships']['reverse_field_type_node']['id'] = 'reverse_field_type_node';
  $handler->display->display_options['relationships']['reverse_field_type_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_type_node']['field'] = 'reverse_field_type_node';
  $handler->display->display_options['relationships']['reverse_field_type_node']['relationship'] = 'field_type_tid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Street Number */
  $handler->display->display_options['fields']['field_resident_street_number']['id'] = 'field_resident_street_number';
  $handler->display->display_options['fields']['field_resident_street_number']['table'] = 'field_data_field_resident_street_number';
  $handler->display->display_options['fields']['field_resident_street_number']['field'] = 'field_resident_street_number';
  $handler->display->display_options['fields']['field_resident_street_number']['label'] = '';
  $handler->display->display_options['fields']['field_resident_street_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resident_street_number']['element_label_colon'] = FALSE;
  /* Field: Content: Street Name */
  $handler->display->display_options['fields']['field_resident_street_name']['id'] = 'field_resident_street_name';
  $handler->display->display_options['fields']['field_resident_street_name']['table'] = 'field_data_field_resident_street_name';
  $handler->display->display_options['fields']['field_resident_street_name']['field'] = 'field_resident_street_name';
  $handler->display->display_options['fields']['field_resident_street_name']['label'] = '';
  $handler->display->display_options['fields']['field_resident_street_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resident_street_name']['element_label_colon'] = FALSE;
  /* Field: Content: Street Suffix */
  $handler->display->display_options['fields']['field_resident_street_suffix']['id'] = 'field_resident_street_suffix';
  $handler->display->display_options['fields']['field_resident_street_suffix']['table'] = 'field_data_field_resident_street_suffix';
  $handler->display->display_options['fields']['field_resident_street_suffix']['field'] = 'field_resident_street_suffix';
  $handler->display->display_options['fields']['field_resident_street_suffix']['label'] = 'Address';
  $handler->display->display_options['fields']['field_resident_street_suffix']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resident_street_suffix']['alter']['text'] = '[field_resident_street_number] [field_resident_street_name] [field_resident_street_suffix]';
  /* Field: Taxonomy term: Ward */
  $handler->display->display_options['fields']['field_precinct_ward']['id'] = 'field_precinct_ward';
  $handler->display->display_options['fields']['field_precinct_ward']['table'] = 'field_data_field_precinct_ward';
  $handler->display->display_options['fields']['field_precinct_ward']['field'] = 'field_precinct_ward';
  $handler->display->display_options['fields']['field_precinct_ward']['relationship'] = 'field_resident_precinct_tid';
  /* Field: Taxonomy term: Precinct Number */
  $handler->display->display_options['fields']['field_precinct_number']['id'] = 'field_precinct_number';
  $handler->display->display_options['fields']['field_precinct_number']['table'] = 'field_data_field_precinct_number';
  $handler->display->display_options['fields']['field_precinct_number']['field'] = 'field_precinct_number';
  $handler->display->display_options['fields']['field_precinct_number']['relationship'] = 'field_resident_precinct_tid';
  $handler->display->display_options['fields']['field_precinct_number']['label'] = 'Precinct No.';
  /* Field: Taxonomy term: Trash Pickup Day */
  $handler->display->display_options['fields']['field_trash_pickup_day']['id'] = 'field_trash_pickup_day';
  $handler->display->display_options['fields']['field_trash_pickup_day']['table'] = 'field_data_field_trash_pickup_day';
  $handler->display->display_options['fields']['field_trash_pickup_day']['field'] = 'field_trash_pickup_day';
  $handler->display->display_options['fields']['field_trash_pickup_day']['relationship'] = 'field_resident_precinct_tid';
  $handler->display->display_options['fields']['field_trash_pickup_day']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_trash_pickup_day']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Trash Pickup Day';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="/wizard">View Schedule / Reminders</a>';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = '.views-field views-field-nothing';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Street Sweeping Day';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/sweeping">View Schedule / Reminders</a>';
  /* Field: Taxonomy term: Alderman */
  $handler->display->display_options['fields']['field_alderman']['id'] = 'field_alderman';
  $handler->display->display_options['fields']['field_alderman']['table'] = 'field_data_field_alderman';
  $handler->display->display_options['fields']['field_alderman']['field'] = 'field_alderman';
  $handler->display->display_options['fields']['field_alderman']['relationship'] = 'field_resident_precinct_tid';
  $handler->display->display_options['fields']['field_alderman']['settings'] = array(
    'link' => 0,
  );
  /* Field: Taxonomy term: School Committee Member */
  $handler->display->display_options['fields']['field_school_committee_member']['id'] = 'field_school_committee_member';
  $handler->display->display_options['fields']['field_school_committee_member']['table'] = 'field_data_field_school_committee_member';
  $handler->display->display_options['fields']['field_school_committee_member']['field'] = 'field_school_committee_member';
  $handler->display->display_options['fields']['field_school_committee_member']['relationship'] = 'field_resident_precinct_tid';
  $handler->display->display_options['fields']['field_school_committee_member']['settings'] = array(
    'link' => 0,
  );
  /* Field: Taxonomy term: State Senator */
  $handler->display->display_options['fields']['field_state_senator']['id'] = 'field_state_senator';
  $handler->display->display_options['fields']['field_state_senator']['table'] = 'field_data_field_state_senator';
  $handler->display->display_options['fields']['field_state_senator']['field'] = 'field_state_senator';
  $handler->display->display_options['fields']['field_state_senator']['relationship'] = 'field_resident_precinct_tid';
  $handler->display->display_options['fields']['field_state_senator']['settings'] = array(
    'link' => 0,
  );
  /* Field: Taxonomy term: State Representative */
  $handler->display->display_options['fields']['field_state_representative']['id'] = 'field_state_representative';
  $handler->display->display_options['fields']['field_state_representative']['table'] = 'field_data_field_state_representative';
  $handler->display->display_options['fields']['field_state_representative']['field'] = 'field_state_representative';
  $handler->display->display_options['fields']['field_state_representative']['relationship'] = 'field_resident_precinct_tid';
  $handler->display->display_options['fields']['field_state_representative']['settings'] = array(
    'link' => 0,
  );
  /* Field: Taxonomy term: Polling Place */
  $handler->display->display_options['fields']['field_precinct_polling_place']['id'] = 'field_precinct_polling_place';
  $handler->display->display_options['fields']['field_precinct_polling_place']['table'] = 'field_data_field_precinct_polling_place';
  $handler->display->display_options['fields']['field_precinct_polling_place']['field'] = 'field_precinct_polling_place';
  $handler->display->display_options['fields']['field_precinct_polling_place']['relationship'] = 'field_resident_precinct_tid';
  $handler->display->display_options['fields']['field_precinct_polling_place']['label'] = '';
  $handler->display->display_options['fields']['field_precinct_polling_place']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_precinct_polling_place']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Polling Address */
  $handler->display->display_options['fields']['field_precinct_polling_address']['id'] = 'field_precinct_polling_address';
  $handler->display->display_options['fields']['field_precinct_polling_address']['table'] = 'field_data_field_precinct_polling_address';
  $handler->display->display_options['fields']['field_precinct_polling_address']['field'] = 'field_precinct_polling_address';
  $handler->display->display_options['fields']['field_precinct_polling_address']['relationship'] = 'field_resident_precinct_tid';
  $handler->display->display_options['fields']['field_precinct_polling_address']['label'] = 'Polling Place';
  $handler->display->display_options['fields']['field_precinct_polling_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_precinct_polling_address']['alter']['text'] = '[field_precinct_polling_place], [field_precinct_polling_address]';
  $handler->display->display_options['fields']['field_precinct_polling_address']['type'] = 'text_plain';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resident_address' => 'resident_address',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Street Number (field_resident_street_number) */
  $handler->display->display_options['filters']['field_resident_street_number_value']['id'] = 'field_resident_street_number_value';
  $handler->display->display_options['filters']['field_resident_street_number_value']['table'] = 'field_data_field_resident_street_number';
  $handler->display->display_options['filters']['field_resident_street_number_value']['field'] = 'field_resident_street_number_value';
  $handler->display->display_options['filters']['field_resident_street_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_resident_street_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_resident_street_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resident_street_number_value']['expose']['operator_id'] = 'field_resident_street_number_value_op';
  $handler->display->display_options['filters']['field_resident_street_number_value']['expose']['label'] = 'Street #';
  $handler->display->display_options['filters']['field_resident_street_number_value']['expose']['operator'] = 'field_resident_street_number_value_op';
  $handler->display->display_options['filters']['field_resident_street_number_value']['expose']['identifier'] = 'field_resident_street_number_value';
  $handler->display->display_options['filters']['field_resident_street_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Street Name (field_resident_street_name) */
  $handler->display->display_options['filters']['field_resident_street_name_value']['id'] = 'field_resident_street_name_value';
  $handler->display->display_options['filters']['field_resident_street_name_value']['table'] = 'field_data_field_resident_street_name';
  $handler->display->display_options['filters']['field_resident_street_name_value']['field'] = 'field_resident_street_name_value';
  $handler->display->display_options['filters']['field_resident_street_name_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_resident_street_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_resident_street_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resident_street_name_value']['expose']['operator_id'] = 'field_resident_street_name_value_op';
  $handler->display->display_options['filters']['field_resident_street_name_value']['expose']['label'] = 'Street Name';
  $handler->display->display_options['filters']['field_resident_street_name_value']['expose']['operator'] = 'field_resident_street_name_value_op';
  $handler->display->display_options['filters']['field_resident_street_name_value']['expose']['identifier'] = 'field_resident_street_name_value';
  $handler->display->display_options['filters']['field_resident_street_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Street Suffix (field_resident_street_suffix) */
  $handler->display->display_options['filters']['field_resident_street_suffix_value']['id'] = 'field_resident_street_suffix_value';
  $handler->display->display_options['filters']['field_resident_street_suffix_value']['table'] = 'field_data_field_resident_street_suffix';
  $handler->display->display_options['filters']['field_resident_street_suffix_value']['field'] = 'field_resident_street_suffix_value';
  $handler->display->display_options['filters']['field_resident_street_suffix_value']['group'] = 1;
  $handler->display->display_options['filters']['field_resident_street_suffix_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resident_street_suffix_value']['expose']['operator_id'] = 'field_resident_street_suffix_value_op';
  $handler->display->display_options['filters']['field_resident_street_suffix_value']['expose']['label'] = 'Suffix';
  $handler->display->display_options['filters']['field_resident_street_suffix_value']['expose']['operator'] = 'field_resident_street_suffix_value_op';
  $handler->display->display_options['filters']['field_resident_street_suffix_value']['expose']['identifier'] = 'field_resident_street_suffix_value';
  $handler->display->display_options['filters']['field_resident_street_suffix_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_resident_street_number_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_resident_street_name_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_resident_street_suffix_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['path'] = 'resident-address-lookup/search';
  $export['resident_address'] = $view;

  $view = new view();
  $view->name = 'service_category';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Category';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Services By Topic';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_service_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'link-list--item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'link-list__items';
  $handler->display->display_options['style_options']['wrapper_class'] = 'link-list component';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Service Category */
  $handler->display->display_options['fields']['field_service_category']['id'] = 'field_service_category';
  $handler->display->display_options['fields']['field_service_category']['table'] = 'field_data_field_service_category';
  $handler->display->display_options['fields']['field_service_category']['field'] = 'field_service_category';
  $handler->display->display_options['fields']['field_service_category']['label'] = '';
  $handler->display->display_options['fields']['field_service_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_service_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_category']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_service_category']['delta_limit'] = 'all';
  /* Field: Content: Services Label */
  $handler->display->display_options['fields']['field_services_label']['id'] = 'field_services_label';
  $handler->display->display_options['fields']['field_services_label']['table'] = 'field_data_field_services_label';
  $handler->display->display_options['fields']['field_services_label']['field'] = 'field_services_label';
  $handler->display->display_options['fields']['field_services_label']['label'] = '';
  $handler->display->display_options['fields']['field_services_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_services_label']['alter']['text'] = '<h3>
  <a class="cta-secondary" href="[path]">[field_services_label]</a>
</h3>';
  $handler->display->display_options['fields']['field_services_label']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_services_label']['alter']['link_class'] = 'cta-secondary';
  $handler->display->display_options['fields']['field_services_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_services_label']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_services_label']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_services_label']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_services_label']['multi_type'] = 'ul';
  /* Sort criterion: Content: Service Category (field_service_category) */
  $handler->display->display_options['sorts']['field_service_category_target_id']['id'] = 'field_service_category_target_id';
  $handler->display->display_options['sorts']['field_service_category_target_id']['table'] = 'field_data_field_service_category';
  $handler->display->display_options['sorts']['field_service_category_target_id']['field'] = 'field_service_category_target_id';
  $handler->display->display_options['sorts']['field_service_category_target_id']['order'] = 'DESC';
  /* Sort criterion: Content: Services Label (field_services_label) */
  $handler->display->display_options['sorts']['field_services_label_value']['id'] = 'field_services_label_value';
  $handler->display->display_options['sorts']['field_services_label_value']['table'] = 'field_data_field_services_label';
  $handler->display->display_options['sorts']['field_services_label_value']['field'] = 'field_services_label_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
    'faq' => 'faq',
    'organizational_unit' => 'organizational_unit',
    'programs_initiatives' => 'programs_initiatives',
  );
  /* Filter criterion: Content: Services Label (field_services_label) */
  $handler->display->display_options['filters']['field_services_label_value']['id'] = 'field_services_label_value';
  $handler->display->display_options['filters']['field_services_label_value']['table'] = 'field_data_field_services_label';
  $handler->display->display_options['filters']['field_services_label_value']['field'] = 'field_services_label_value';
  $handler->display->display_options['filters']['field_services_label_value']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'services-by-topic';
  $export['service_category'] = $view;

  $view = new view();
  $view->name = 'services_a_z';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Services A-Z';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Services A-Z';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'link-list--item';
  $handler->display->display_options['style_options']['class'] = 'link-list__items no-js';
  $handler->display->display_options['style_options']['wrapper_class'] = 'link-list component';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'A-Z Listing Header';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Glossary Letters';
  $handler->display->display_options['header']['area']['content'] = '<style>
   a {
	   color:#0d7cb7;
	   }
   glossaryChar {
	   font-size: 1.2em;
       }
</style>
<h4 align="center">Pick a letter:</h4><div align="center"><glossaryChar><a href="/services-a-z/a">A</a> |  <a href="/services-a-z/b">B</a> |  <a href="/services-a-z/c">C</a> | <a href="/services-a-z/d">D</a> | <a href="/services-a-z/e">E</a> | <a href="/services-a-z/f">F</a> | <a href="/services-a-z/g">G</a> | <a href="/services-a-z/h">H</a> | <a href="/services-a-z/i">I</a> | <a href="/services-a-z/j">J</a> | <a href="/services-a-z/k">K</a> | <a href="/services-a-z/l">L</a> | <a href="/services-a-z/m">M</a> | <a href="/services-a-z/n">N</a> | <a href="/services-a-z/o">O</a> | <a href="/services-a-z/p">P</a> | <a href="/services-a-z/q">Q</a> | <a href="/services-a-z/r">R</a> | <a href="/services-a-z/s">S</a> | <a href="/services-a-z/t">T</a> | <a href="/services-a-z/u">U</a> | <a href="/services-a-z/v">V</a> | <a href="/services-a-z/w">W</a> | <a href="/services-a-z/x">X</a> | <a href="/services-a-z/y">Y</a> | <a href="/services-a-z/y">Z</a> | <a href="/services-a-z">View All</a></glossaryChar></div><br><br>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Glossary Letters';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<style>
   a {
	   color:#0d7cb7;
	   }
   glossaryChar {
	   font-size: 1.2em;
       }
</style>
<h4 align="center">Pick a letter:</h4><div align="center"><glossaryChar><a href="/services-a-z/a">A</a> |  <a href="/services-a-z/b">B</a> |  <a href="/services-a-z/c">C</a> | <a href="/services-a-z/d">D</a> | <a href="/services-a-z/e">E</a> | <a href="/services-a-z/f">F</a> | <a href="/services-a-z/g">G</a> | <a href="/services-a-z/h">H</a> | <a href="/services-a-z/i">I</a> | <a href="/services-a-z/j">J</a> | <a href="/services-a-z/k">K</a> | <a href="/services-a-z/l">L</a> | <a href="/services-a-z/m">M</a> | <a href="/services-a-z/n">N</a> | <a href="/services-a-z/o">O</a> | <a href="/services-a-z/p">P</a> | <a href="/services-a-z/q">Q</a> | <a href="/services-a-z/r">R</a> | <a href="/services-a-z/s">S</a> | <a href="t">T</a> | <a href="u">U</a> | <a href="/services-a-z/v">V</a> | <a href="/services-a-z/w">W</a> | <a href="x">X</a> | <a href="/services-a-z/y">Y</a> | <a href="/services-a-z/y">Z</a> | <a href="/services-a-z">View All</a></glossaryChar></div><br><br><br><br>
<div align="center"><h2>Sorry, no services match that letter. Want to pick again?</h2></div>
<br>
<br>
<br>
<br>
<br>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Services Label */
  $handler->display->display_options['fields']['field_services_label']['id'] = 'field_services_label';
  $handler->display->display_options['fields']['field_services_label']['table'] = 'field_data_field_services_label';
  $handler->display->display_options['fields']['field_services_label']['field'] = 'field_services_label';
  $handler->display->display_options['fields']['field_services_label']['label'] = '';
  $handler->display->display_options['fields']['field_services_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_services_label']['alter']['text'] = '<h3>
  <a class="cta-secondary" href="[path]">[field_services_label]</a>
</h3>';
  $handler->display->display_options['fields']['field_services_label']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_services_label']['alter']['link_class'] = 'cta-secondary';
  $handler->display->display_options['fields']['field_services_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_services_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_services_label']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_services_label']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_services_label']['delta_offset'] = '0';
  /* Sort criterion: Content: Services Label (field_services_label) */
  $handler->display->display_options['sorts']['field_services_label_value']['id'] = 'field_services_label_value';
  $handler->display->display_options['sorts']['field_services_label_value']['table'] = 'field_data_field_services_label';
  $handler->display->display_options['sorts']['field_services_label_value']['field'] = 'field_services_label_value';
  /* Contextual filter: Content: Services Label (field_services_label) */
  $handler->display->display_options['arguments']['field_services_label_value_1']['id'] = 'field_services_label_value_1';
  $handler->display->display_options['arguments']['field_services_label_value_1']['table'] = 'field_data_field_services_label';
  $handler->display->display_options['arguments']['field_services_label_value_1']['field'] = 'field_services_label_value';
  $handler->display->display_options['arguments']['field_services_label_value_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_services_label_value_1']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['field_services_label_value_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_services_label_value_1']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_services_label_value_1']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['field_services_label_value_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_services_label_value_1']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['field_services_label_value_1']['summary_options']['separator'] = '|';
  $handler->display->display_options['arguments']['field_services_label_value_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_services_label_value_1']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_services_label_value_1']['limit'] = '1';
  $handler->display->display_options['arguments']['field_services_label_value_1']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_services_label_value_1']['path_case'] = 'lower';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organizational_unit' => 'organizational_unit',
  );
  /* Filter criterion: Content: Services Label (field_services_label) */
  $handler->display->display_options['filters']['field_services_label_value']['id'] = 'field_services_label_value';
  $handler->display->display_options['filters']['field_services_label_value']['table'] = 'field_data_field_services_label';
  $handler->display->display_options['filters']['field_services_label_value']['field'] = 'field_services_label_value';
  $handler->display->display_options['filters']['field_services_label_value']['value'] = 'a';

  /* Display: Services A-Z */
  $handler = $view->new_display('page', 'Services A-Z', 'services_a_z');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Services Label (field_services_label) */
  $handler->display->display_options['filters']['field_services_label_value']['id'] = 'field_services_label_value';
  $handler->display->display_options['filters']['field_services_label_value']['table'] = 'field_data_field_services_label';
  $handler->display->display_options['filters']['field_services_label_value']['field'] = 'field_services_label_value';
  $handler->display->display_options['filters']['field_services_label_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'services-a-z';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $export['services_a_z'] = $view;

  $view = new view();
  $view->name = 'services_common_requests';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'Services Common Requests';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'key-services__items';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'link-list--item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'link-list__items';
  $handler->display->display_options['style_options']['wrapper_class'] = 'link-list component';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'H3 Title';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h3 class="link-list__group-title">
  <a href="#" class="link-list__group-title-text">Common Requests</a>
</h3>';
  /* Field: Block: Services */
  $handler->display->display_options['fields']['field_block_common_services']['id'] = 'field_block_common_services';
  $handler->display->display_options['fields']['field_block_common_services']['table'] = 'field_data_field_block_common_services';
  $handler->display->display_options['fields']['field_block_common_services']['field'] = 'field_block_common_services';
  $handler->display->display_options['fields']['field_block_common_services']['label'] = '';
  $handler->display->display_options['fields']['field_block_common_services']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_block_common_services']['element_class'] = 'cta-secondary';
  $handler->display->display_options['fields']['field_block_common_services']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_block_common_services']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_block_common_services']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_block_common_services']['delta_offset'] = '0';
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'services_common_requests_block' => 'services_common_requests_block',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_caching'] = '8';
  $export['services_common_requests'] = $view;

  $view = new view();
  $view->name = 'services_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Services List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Services By Department';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'link-list--item';
  $handler->display->display_options['style_options']['class'] = 'link-list__items';
  $handler->display->display_options['style_options']['wrapper_class'] = 'link-list component';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Services Label */
  $handler->display->display_options['fields']['field_services_label']['id'] = 'field_services_label';
  $handler->display->display_options['fields']['field_services_label']['table'] = 'field_data_field_services_label';
  $handler->display->display_options['fields']['field_services_label']['field'] = 'field_services_label';
  $handler->display->display_options['fields']['field_services_label']['label'] = '';
  $handler->display->display_options['fields']['field_services_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_services_label']['alter']['text'] = '<h3>
  <a class="cta-secondary" href="[path]">[field_services_label]</a>
</h3>';
  $handler->display->display_options['fields']['field_services_label']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_services_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_services_label']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_services_label']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_services_label']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_services_label']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Services Label (field_services_label) */
  $handler->display->display_options['sorts']['field_services_label_value']['id'] = 'field_services_label_value';
  $handler->display->display_options['sorts']['field_services_label_value']['table'] = 'field_data_field_services_label';
  $handler->display->display_options['sorts']['field_services_label_value']['field'] = 'field_services_label_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organizational_unit' => 'organizational_unit',
  );
  /* Filter criterion: Content: Services Label (field_services_label) */
  $handler->display->display_options['filters']['field_services_label_value']['id'] = 'field_services_label_value';
  $handler->display->display_options['filters']['field_services_label_value']['table'] = 'field_data_field_services_label';
  $handler->display->display_options['filters']['field_services_label_value']['field'] = 'field_services_label_value';
  $handler->display->display_options['filters']['field_services_label_value']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'services';
  $export['services_list'] = $view;

  $view = new view();
  $view->name = 'sitefinder';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sitefinder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sitefinder';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: District */
  $handler->display->display_options['fields']['field_district']['id'] = 'field_district';
  $handler->display->display_options['fields']['field_district']['table'] = 'field_data_field_district';
  $handler->display->display_options['fields']['field_district']['field'] = 'field_district';
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  /* Field: Content: Space Type */
  $handler->display->display_options['fields']['field_space_type']['id'] = 'field_space_type';
  $handler->display->display_options['fields']['field_space_type']['table'] = 'field_data_field_space_type';
  $handler->display->display_options['fields']['field_space_type']['field'] = 'field_space_type';
  $handler->display->display_options['fields']['field_space_type']['delta_offset'] = '0';
  /* Field: Content: Agent URL */
  $handler->display->display_options['fields']['field_agent_url']['id'] = 'field_agent_url';
  $handler->display->display_options['fields']['field_agent_url']['table'] = 'field_data_field_agent_url';
  $handler->display->display_options['fields']['field_agent_url']['field'] = 'field_agent_url';
  $handler->display->display_options['fields']['field_agent_url']['label'] = 'Agent';
  $handler->display->display_options['fields']['field_agent_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_agent_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_agent_url']['alter']['text'] = 'Agent';
  $handler->display->display_options['fields']['field_agent_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_agent_url']['alter']['path'] = '[field_agent_url]';
  $handler->display->display_options['fields']['field_agent_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_agent_url']['element_label_colon'] = FALSE;
  /* Field: Content: Listing URL */
  $handler->display->display_options['fields']['field_listing_url']['id'] = 'field_listing_url';
  $handler->display->display_options['fields']['field_listing_url']['table'] = 'field_data_field_listing_url';
  $handler->display->display_options['fields']['field_listing_url']['field'] = 'field_listing_url';
  $handler->display->display_options['fields']['field_listing_url']['label'] = 'Listing';
  $handler->display->display_options['fields']['field_listing_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_listing_url']['alter']['text'] = 'View/Agent';
  $handler->display->display_options['fields']['field_listing_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_listing_url']['alter']['path'] = '[field_listing_url]';
  $handler->display->display_options['fields']['field_listing_url']['alter']['absolute'] = TRUE;
  /* Field: Content: Rate */
  $handler->display->display_options['fields']['field_rate']['id'] = 'field_rate';
  $handler->display->display_options['fields']['field_rate']['table'] = 'field_data_field_rate';
  $handler->display->display_options['fields']['field_rate']['field'] = 'field_rate';
  $handler->display->display_options['fields']['field_rate']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Square Feet */
  $handler->display->display_options['fields']['field_square_feet']['id'] = 'field_square_feet';
  $handler->display->display_options['fields']['field_square_feet']['table'] = 'field_data_field_square_feet';
  $handler->display->display_options['fields']['field_square_feet']['field'] = 'field_square_feet';
  $handler->display->display_options['fields']['field_square_feet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_square_feet']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Rate (field_rate) */
  $handler->display->display_options['sorts']['field_rate_value']['id'] = 'field_rate_value';
  $handler->display->display_options['sorts']['field_rate_value']['table'] = 'field_data_field_rate';
  $handler->display->display_options['sorts']['field_rate_value']['field'] = 'field_rate_value';
  $handler->display->display_options['sorts']['field_rate_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_rate_value']['expose']['label'] = 'Rate';
  /* Sort criterion: Content: Square Feet (field_square_feet) */
  $handler->display->display_options['sorts']['field_square_feet_value']['id'] = 'field_square_feet_value';
  $handler->display->display_options['sorts']['field_square_feet_value']['table'] = 'field_data_field_square_feet';
  $handler->display->display_options['sorts']['field_square_feet_value']['field'] = 'field_square_feet_value';
  $handler->display->display_options['sorts']['field_square_feet_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_square_feet_value']['expose']['label'] = 'Square Feet';
  /* Filter criterion: Content: District (field_district) */
  $handler->display->display_options['filters']['field_district_value']['id'] = 'field_district_value';
  $handler->display->display_options['filters']['field_district_value']['table'] = 'field_data_field_district';
  $handler->display->display_options['filters']['field_district_value']['field'] = 'field_district_value';
  $handler->display->display_options['filters']['field_district_value']['value'] = array(
    'all' => 'all',
    'Assembly Sq' => 'Assembly Sq',
    'Ball Sq' => 'Ball Sq',
    'Boynton Yards' => 'Boynton Yards',
    'Central Broadway' => 'Central Broadway',
    'Davis Sq' => 'Davis Sq',
    'Duck Village' => 'Duck Village',
    'East Somerville' => 'East Somerville',
    'Gilman Square' => 'Gilman Square',
    'Inner Belt' => 'Inner Belt',
    'Magoun Sq' => 'Magoun Sq',
    'Mystic Valley' => 'Mystic Valley',
    'Porter Sq' => 'Porter Sq',
    'Powder House Sq' => 'Powder House Sq',
    'Somerville Ave' => 'Somerville Ave',
    'Teele Sq' => 'Teele Sq',
    'Twin City' => 'Twin City',
    'Union Sq' => 'Union Sq',
  );
  $handler->display->display_options['filters']['field_district_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_district_value']['expose']['operator_id'] = 'field_district_value_op';
  $handler->display->display_options['filters']['field_district_value']['expose']['label'] = 'District';
  $handler->display->display_options['filters']['field_district_value']['expose']['operator'] = 'field_district_value_op';
  $handler->display->display_options['filters']['field_district_value']['expose']['identifier'] = 'field_district_value';
  $handler->display->display_options['filters']['field_district_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_district_value']['group_info']['label'] = 'District (field_district)';
  $handler->display->display_options['filters']['field_district_value']['group_info']['identifier'] = 'field_district_value';
  $handler->display->display_options['filters']['field_district_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_district_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commercial_real_estate' => 'commercial_real_estate',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Space Type (field_space_type) */
  $handler->display->display_options['filters']['field_space_type_value']['id'] = 'field_space_type_value';
  $handler->display->display_options['filters']['field_space_type_value']['table'] = 'field_data_field_space_type';
  $handler->display->display_options['filters']['field_space_type_value']['field'] = 'field_space_type_value';
  $handler->display->display_options['filters']['field_space_type_value']['value'] = array(
    'all' => 'all',
    'Flex Space' => 'Flex Space',
    'Free Standing Building' => 'Free Standing Building',
    'Neighborhood Center' => 'Neighborhood Center',
    'Office Building' => 'Office Building',
    'Office-R&D' => 'Office-R&D',
    'Restaurant' => 'Restaurant',
    'Retail(Other)' => 'Retail(Other)',
    'Street Retail' => 'Street Retail',
    'Strip Center' => 'Strip Center',
    'Warehouse' => 'Warehouse',
    'Other' => 'Other',
  );
  $handler->display->display_options['filters']['field_space_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_space_type_value']['expose']['operator_id'] = 'field_space_type_value_op';
  $handler->display->display_options['filters']['field_space_type_value']['expose']['label'] = 'Space Type';
  $handler->display->display_options['filters']['field_space_type_value']['expose']['operator'] = 'field_space_type_value_op';
  $handler->display->display_options['filters']['field_space_type_value']['expose']['identifier'] = 'field_space_type_value';
  $handler->display->display_options['filters']['field_space_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sitefinder';
  $export['sitefinder'] = $view;

  $view = new view();
  $view->name = 'street_sweeping_section';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Street Sweeping Section';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Street Sweeping Section';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_sweeping_street_name_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_sweeping_street_suffix_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Street Name */
  $handler->display->display_options['fields']['field_sweeping_street_name']['id'] = 'field_sweeping_street_name';
  $handler->display->display_options['fields']['field_sweeping_street_name']['table'] = 'field_data_field_sweeping_street_name';
  $handler->display->display_options['fields']['field_sweeping_street_name']['field'] = 'field_sweeping_street_name';
  /* Field: Content: Street Suffix */
  $handler->display->display_options['fields']['field_sweeping_street_suffix']['id'] = 'field_sweeping_street_suffix';
  $handler->display->display_options['fields']['field_sweeping_street_suffix']['table'] = 'field_data_field_sweeping_street_suffix';
  $handler->display->display_options['fields']['field_sweeping_street_suffix']['field'] = 'field_sweeping_street_suffix';
  /* Field: Content: Side */
  $handler->display->display_options['fields']['field_sweeping_side']['id'] = 'field_sweeping_side';
  $handler->display->display_options['fields']['field_sweeping_side']['table'] = 'field_data_field_sweeping_side';
  $handler->display->display_options['fields']['field_sweeping_side']['field'] = 'field_sweeping_side';
  /* Field: Content: Sweeping Day */
  $handler->display->display_options['fields']['field_sweeping_day']['id'] = 'field_sweeping_day';
  $handler->display->display_options['fields']['field_sweeping_day']['table'] = 'field_data_field_sweeping_day';
  $handler->display->display_options['fields']['field_sweeping_day']['field'] = 'field_sweeping_day';
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_sweeping_hours']['id'] = 'field_sweeping_hours';
  $handler->display->display_options['fields']['field_sweeping_hours']['table'] = 'field_data_field_sweeping_hours';
  $handler->display->display_options['fields']['field_sweeping_hours']['field'] = 'field_sweeping_hours';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'street_sweeping_section' => 'street_sweeping_section',
  );
  /* Filter criterion: Content: Street Name (field_sweeping_street_name) */
  $handler->display->display_options['filters']['field_sweeping_street_name_value']['id'] = 'field_sweeping_street_name_value';
  $handler->display->display_options['filters']['field_sweeping_street_name_value']['table'] = 'field_data_field_sweeping_street_name';
  $handler->display->display_options['filters']['field_sweeping_street_name_value']['field'] = 'field_sweeping_street_name_value';
  $handler->display->display_options['filters']['field_sweeping_street_name_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_sweeping_street_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sweeping_street_name_value']['expose']['operator_id'] = 'field_sweeping_street_name_value_op';
  $handler->display->display_options['filters']['field_sweeping_street_name_value']['expose']['label'] = 'Street Name';
  $handler->display->display_options['filters']['field_sweeping_street_name_value']['expose']['operator'] = 'field_sweeping_street_name_value_op';
  $handler->display->display_options['filters']['field_sweeping_street_name_value']['expose']['identifier'] = 'field_sweeping_street_name_value';
  $handler->display->display_options['filters']['field_sweeping_street_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Street Suffix (field_sweeping_street_suffix) */
  $handler->display->display_options['filters']['field_sweeping_street_suffix_value']['id'] = 'field_sweeping_street_suffix_value';
  $handler->display->display_options['filters']['field_sweeping_street_suffix_value']['table'] = 'field_data_field_sweeping_street_suffix';
  $handler->display->display_options['filters']['field_sweeping_street_suffix_value']['field'] = 'field_sweeping_street_suffix_value';
  $handler->display->display_options['filters']['field_sweeping_street_suffix_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sweeping_street_suffix_value']['expose']['operator_id'] = 'field_sweeping_street_suffix_value_op';
  $handler->display->display_options['filters']['field_sweeping_street_suffix_value']['expose']['label'] = 'Street Suffix';
  $handler->display->display_options['filters']['field_sweeping_street_suffix_value']['expose']['operator'] = 'field_sweeping_street_suffix_value_op';
  $handler->display->display_options['filters']['field_sweeping_street_suffix_value']['expose']['identifier'] = 'field_sweeping_street_suffix_value';
  $handler->display->display_options['filters']['field_sweeping_street_suffix_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'street-sweeping';
  $export['street_sweeping_section'] = $view;

  $view = new view();
  $view->name = 'trash_pickup_section';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Trash Pickup Section';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_trash_street_name_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_trash_street_suffix_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Street Name */
  $handler->display->display_options['fields']['field_trash_street_name']['id'] = 'field_trash_street_name';
  $handler->display->display_options['fields']['field_trash_street_name']['table'] = 'field_data_field_trash_street_name';
  $handler->display->display_options['fields']['field_trash_street_name']['field'] = 'field_trash_street_name';
  /* Field: Content: Street Suffix */
  $handler->display->display_options['fields']['field_trash_street_suffix']['id'] = 'field_trash_street_suffix';
  $handler->display->display_options['fields']['field_trash_street_suffix']['table'] = 'field_data_field_trash_street_suffix';
  $handler->display->display_options['fields']['field_trash_street_suffix']['field'] = 'field_trash_street_suffix';
  /* Field: Content: Side */
  $handler->display->display_options['fields']['field_trash_side']['id'] = 'field_trash_side';
  $handler->display->display_options['fields']['field_trash_side']['table'] = 'field_data_field_trash_side';
  $handler->display->display_options['fields']['field_trash_side']['field'] = 'field_trash_side';
  /* Field: Content: Pickup Day */
  $handler->display->display_options['fields']['field_trash_day']['id'] = 'field_trash_day';
  $handler->display->display_options['fields']['field_trash_day']['table'] = 'field_data_field_trash_day';
  $handler->display->display_options['fields']['field_trash_day']['field'] = 'field_trash_day';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'trash_pickup_section' => 'trash_pickup_section',
  );
  /* Filter criterion: Content: Street Name (field_trash_street_name) */
  $handler->display->display_options['filters']['field_trash_street_name_value']['id'] = 'field_trash_street_name_value';
  $handler->display->display_options['filters']['field_trash_street_name_value']['table'] = 'field_data_field_trash_street_name';
  $handler->display->display_options['filters']['field_trash_street_name_value']['field'] = 'field_trash_street_name_value';
  $handler->display->display_options['filters']['field_trash_street_name_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_trash_street_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_trash_street_name_value']['expose']['operator_id'] = 'field_trash_street_name_value_op';
  $handler->display->display_options['filters']['field_trash_street_name_value']['expose']['label'] = 'Street Name';
  $handler->display->display_options['filters']['field_trash_street_name_value']['expose']['operator'] = 'field_trash_street_name_value_op';
  $handler->display->display_options['filters']['field_trash_street_name_value']['expose']['identifier'] = 'field_trash_street_name_value';
  $handler->display->display_options['filters']['field_trash_street_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_trash_street_name_value']['group_info']['label'] = 'Street Name (field_trash_street_name)';
  $handler->display->display_options['filters']['field_trash_street_name_value']['group_info']['identifier'] = 'field_trash_street_name_value';
  $handler->display->display_options['filters']['field_trash_street_name_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_trash_street_name_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Street Suffix (field_trash_street_suffix) */
  $handler->display->display_options['filters']['field_trash_street_suffix_value']['id'] = 'field_trash_street_suffix_value';
  $handler->display->display_options['filters']['field_trash_street_suffix_value']['table'] = 'field_data_field_trash_street_suffix';
  $handler->display->display_options['filters']['field_trash_street_suffix_value']['field'] = 'field_trash_street_suffix_value';
  $handler->display->display_options['filters']['field_trash_street_suffix_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_trash_street_suffix_value']['expose']['operator_id'] = 'field_trash_street_suffix_value_op';
  $handler->display->display_options['filters']['field_trash_street_suffix_value']['expose']['label'] = 'Street Suffix';
  $handler->display->display_options['filters']['field_trash_street_suffix_value']['expose']['operator'] = 'field_trash_street_suffix_value_op';
  $handler->display->display_options['filters']['field_trash_street_suffix_value']['expose']['identifier'] = 'field_trash_street_suffix_value';
  $handler->display->display_options['filters']['field_trash_street_suffix_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'trash-pickup';
  $export['trash_pickup_section'] = $view;

  return $export;
}
