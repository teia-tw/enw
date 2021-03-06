<?php
/**
 * @file
 * enw_mobile.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function enw_mobile_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mobile_copyright';
  $context->description = '版權宣告';
  $context->tag = 'mobile';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-14' => array(
          'module' => 'block',
          'delta' => '14',
          'region' => 'footer',
          'weight' => '36',
        ),
        'enw_footer-desktop-footer-copyright-text' => array(
          'module' => 'enw_footer',
          'delta' => 'desktop-footer-copyright-text',
          'region' => 'footer',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('mobile');
  t('版權宣告');
  $export['mobile_copyright'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mobile_menu';
  $context->description = '選單';
  $context->tag = 'mobile';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'enw_mobile-enw_mobile_menu_button' => array(
          'module' => 'enw_mobile',
          'delta' => 'enw_mobile_menu_button',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'enw_mobile-mobile-main-menu' => array(
          'module' => 'menu_block',
          'delta' => 'enw_mobile-mobile-main-menu',
          'region' => 'mobile_menu',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('mobile');
  t('選單');
  $export['mobile_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mobile_node';
  $context->description = '手機版文章瀏覽功能';
  $context->tag = 'mobile';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'node' => array(
      'values' => array(
        'article' => 'article',
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'linebutton-linebutton' => array(
          'module' => 'linebutton',
          'delta' => 'linebutton',
          'region' => 'content',
          'weight' => '-37',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('mobile');
  t('手機版文章瀏覽功能');
  $export['mobile_node'] = $context;

  return $export;
}
