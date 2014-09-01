<?php
/**
 * @file
 * enw_footer.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function enw_footer_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-banner'] = array(
    'cache' => -1,
    'css_class' => 'banner-block',
    'custom' => '0',
    'machine_name' => 'banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'video-main
month_topic/*
month_topic
monthly-topics
monthly-topics/*
video-list
video-list/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'theme721' => array(
        'region' => 'footer',
        'status' => '1',
        'theme' => 'theme721',
        'weight' => '-35',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  return $export;
}