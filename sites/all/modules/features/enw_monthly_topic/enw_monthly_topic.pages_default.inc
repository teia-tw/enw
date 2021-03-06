<?php
/**
 * @file
 * enw_monthly_topic.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function enw_monthly_topic_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Panel: 環境節日',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'monthly-topics',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'monthly_topic' => 'monthly_topic',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '7e5cf5d9-4c0c-4202-bd60-fcfaf1624275';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f1fed27d-3d48-4388-b148-155c09ce164d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'monthly_topic-pane';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'mobile_detect_ctools',
          'settings' => array(
            'type' => 'isMobile',
          ),
          'context' => array(),
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f1fed27d-3d48-4388-b148-155c09ce164d';
    $display->content['new-f1fed27d-3d48-4388-b148-155c09ce164d'] = $pane;
    $display->panels['middle'][0] = 'new-f1fed27d-3d48-4388-b148-155c09ce164d';
    $pane = new stdClass();
    $pane->pid = 'new-9920cf61-25d3-4f79-96b6-4799d5af81c2';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'monthly_topic-thin_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9920cf61-25d3-4f79-96b6-4799d5af81c2';
    $display->content['new-9920cf61-25d3-4f79-96b6-4799d5af81c2'] = $pane;
    $display->panels['middle'][1] = 'new-9920cf61-25d3-4f79-96b6-4799d5af81c2';
    $pane = new stdClass();
    $pane->pid = 'new-1125cac8-2fa0-4022-a68c-1cee32fad0a7';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'mobile_detect_ctools',
          'settings' => array(
            'type' => 'isMobile',
          ),
          'context' => array(),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1125cac8-2fa0-4022-a68c-1cee32fad0a7';
    $display->content['new-1125cac8-2fa0-4022-a68c-1cee32fad0a7'] = $pane;
    $display->panels['middle'][2] = 'new-1125cac8-2fa0-4022-a68c-1cee32fad0a7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1125cac8-2fa0-4022-a68c-1cee32fad0a7';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function enw_monthly_topic_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'monthly_topics';
  $page->task = 'page';
  $page->admin_title = '環境節日';
  $page->admin_description = '「環境節日」專頁。';
  $page->path = 'monthly-topics';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => '環境節日',
    'name' => 'menu-secondary-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_monthly_topics_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'monthly_topics';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'monthly-topics',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '環境節日';
  $display->uuid = '21110130-5280-4237-95be-86cc465796d1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dd270d79-fd9e-418b-9ef0-61dc81b1c64f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'monthly_topic-pane';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'mobile_detect_ctools',
          'settings' => array(
            'type' => 'isMobile',
          ),
          'context' => array(),
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dd270d79-fd9e-418b-9ef0-61dc81b1c64f';
    $display->content['new-dd270d79-fd9e-418b-9ef0-61dc81b1c64f'] = $pane;
    $display->panels['middle'][0] = 'new-dd270d79-fd9e-418b-9ef0-61dc81b1c64f';
    $pane = new stdClass();
    $pane->pid = 'new-15301f9f-f30f-4a6e-90fe-3b1c027bbaa8';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'monthly_topic-thin_pane';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'mobile_detect_ctools',
          'settings' => array(
            'type' => 'isMobile',
          ),
          'context' => array(),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '15301f9f-f30f-4a6e-90fe-3b1c027bbaa8';
    $display->content['new-15301f9f-f30f-4a6e-90fe-3b1c027bbaa8'] = $pane;
    $display->panels['middle'][1] = 'new-15301f9f-f30f-4a6e-90fe-3b1c027bbaa8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['monthly_topics'] = $page;

  return $pages;

}
