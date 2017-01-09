<?php
/**
 * @file
 * nt_gss_search_filter.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nt_gss_search_filter_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search-results';
  $context->description = 'Search Results Page';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/gss/*' => 'search/gss/*',
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nt_gss-nt_gss_filter_content_type' => array(
          'module' => 'nt_gss',
          'delta' => 'nt_gss_filter_content_type',
          'region' => 'sidebar_left_25',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Search Results Page');
  t('page');
  $export['search-results'] = $context;

  return $export;
}
