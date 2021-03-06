<?php
/**
 * @file
 * enw_frontpage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function enw_frontpage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'desktop_frontpage';
  $context->description = '';
  $context->tag = 'desktop';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        2 => 2,
        3 => 3,
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slider-block' => array(
          'module' => 'views',
          'delta' => 'slider-block',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-latest_news-block' => array(
          'module' => 'views',
          'delta' => 'latest_news-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'fb_likebox-0' => array(
          'module' => 'fb_likebox',
          'delta' => '0',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'visitors-0' => array(
          'module' => 'visitors',
          'delta' => '0',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('desktop');
  $export['desktop_frontpage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mobile_frontpage';
  $context->description = '';
  $context->tag = 'mobile';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slider-compact_block' => array(
          'module' => 'views',
          'delta' => 'slider-compact_block',
          'region' => 'header',
          'weight' => '-10',
        ),
        'enw_mobile-enw_mobile_dashboard' => array(
          'module' => 'enw_mobile',
          'delta' => 'enw_mobile_dashboard',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('mobile');
  $export['mobile_frontpage'] = $context;

  return $export;
}
