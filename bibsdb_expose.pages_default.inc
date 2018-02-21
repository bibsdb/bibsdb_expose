<?php
/**
 * @file
 * bibsdb_expose.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function bibsdb_expose_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__bibsdb-groups';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Bibsdb Groups',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_group' => 'ding_group',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
    'name' => 'bibsdb-groups',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4d5ebb9a-6744-4fab-b173-28619324b293';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-668dfc7d-4d91-4dff-ad05-ae9da59a4d43';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_news-ding_news_groups_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-medium',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '668dfc7d-4d91-4dff-ad05-ae9da59a4d43';
    $display->content['new-668dfc7d-4d91-4dff-ad05-ae9da59a4d43'] = $pane;
    $display->panels['attachment_1_1'][0] = 'new-668dfc7d-4d91-4dff-ad05-ae9da59a4d43';
    $pane = new stdClass();
    $pane->pid = 'new-16b351db-3b74-4083-b3a0-73d50605d5a8';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bibsdb_wall_title_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'bibsdb_wall_title_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall-title',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '16b351db-3b74-4083-b3a0-73d50605d5a8';
    $display->content['new-16b351db-3b74-4083-b3a0-73d50605d5a8'] = $pane;
    $display->panels['attachment_1_1'][1] = 'new-16b351db-3b74-4083-b3a0-73d50605d5a8';
    $pane = new stdClass();
    $pane->pid = 'new-035bb878-6be9-4aa4-8234-afd117e2129f';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '180',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '035bb878-6be9-4aa4-8234-afd117e2129f';
    $display->content['new-035bb878-6be9-4aa4-8234-afd117e2129f'] = $pane;
    $display->panels['attachment_1_1'][2] = 'new-035bb878-6be9-4aa4-8234-afd117e2129f';
    $pane = new stdClass();
    $pane->pid = 'new-74976e76-36aa-44a2-9ff1-17cd4544c4c7';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bibsdb_wall_title_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'bibsdb_wall_title_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '74976e76-36aa-44a2-9ff1-17cd4544c4c7';
    $display->content['new-74976e76-36aa-44a2-9ff1-17cd4544c4c7'] = $pane;
    $display->panels['attachment_1_1'][3] = 'new-74976e76-36aa-44a2-9ff1-17cd4544c4c7';
    $pane = new stdClass();
    $pane->pid = 'new-27bd89aa-8e37-4019-901f-552ba92c694e';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '181',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '27bd89aa-8e37-4019-901f-552ba92c694e';
    $display->content['new-27bd89aa-8e37-4019-901f-552ba92c694e'] = $pane;
    $display->panels['attachment_1_1'][4] = 'new-27bd89aa-8e37-4019-901f-552ba92c694e';
    $pane = new stdClass();
    $pane->pid = 'new-6d2a8481-df9f-448e-bddf-62788d459322';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bibsdb_wall_title_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'bibsdb_wall_title_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall-title',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '6d2a8481-df9f-448e-bddf-62788d459322';
    $display->content['new-6d2a8481-df9f-448e-bddf-62788d459322'] = $pane;
    $display->panels['attachment_1_1'][5] = 'new-6d2a8481-df9f-448e-bddf-62788d459322';
    $pane = new stdClass();
    $pane->pid = 'new-13a9db6c-7fa3-4e15-aa4a-1ab24d04e951';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '182',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '13a9db6c-7fa3-4e15-aa4a-1ab24d04e951';
    $display->content['new-13a9db6c-7fa3-4e15-aa4a-1ab24d04e951'] = $pane;
    $display->panels['attachment_1_1'][6] = 'new-13a9db6c-7fa3-4e15-aa4a-1ab24d04e951';
    $pane = new stdClass();
    $pane->pid = 'new-578f65c1-73ee-48c2-b837-c6b9a5b36430';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bibsdb_wall_title_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'bibsdb_wall_title_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall-title',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '578f65c1-73ee-48c2-b837-c6b9a5b36430';
    $display->content['new-578f65c1-73ee-48c2-b837-c6b9a5b36430'] = $pane;
    $display->panels['attachment_1_1'][7] = 'new-578f65c1-73ee-48c2-b837-c6b9a5b36430';
    $pane = new stdClass();
    $pane->pid = 'new-c2cabb54-9438-4641-ada2-130c5d5f0076';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '183',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'c2cabb54-9438-4641-ada2-130c5d5f0076';
    $display->content['new-c2cabb54-9438-4641-ada2-130c5d5f0076'] = $pane;
    $display->panels['attachment_1_1'][8] = 'new-c2cabb54-9438-4641-ada2-130c5d5f0076';
    $pane = new stdClass();
    $pane->pid = 'new-cfaca346-fc7f-41e6-a917-d4c6cce3947f';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bibsdb_wall_title_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'bibsdb_wall_title_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall-title',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'cfaca346-fc7f-41e6-a917-d4c6cce3947f';
    $display->content['new-cfaca346-fc7f-41e6-a917-d4c6cce3947f'] = $pane;
    $display->panels['attachment_1_1'][9] = 'new-cfaca346-fc7f-41e6-a917-d4c6cce3947f';
    $pane = new stdClass();
    $pane->pid = 'new-be08bab6-e7a2-4ddf-8572-d134835e25a8';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '184',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'be08bab6-e7a2-4ddf-8572-d134835e25a8';
    $display->content['new-be08bab6-e7a2-4ddf-8572-d134835e25a8'] = $pane;
    $display->panels['attachment_1_1'][10] = 'new-be08bab6-e7a2-4ddf-8572-d134835e25a8';
    $pane = new stdClass();
    $pane->pid = 'new-3bc42ce7-ca5f-4e5c-9176-2bcbaecc961a';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_event-ding_event_groups_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-group-events',
    );
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '3bc42ce7-ca5f-4e5c-9176-2bcbaecc961a';
    $display->content['new-3bc42ce7-ca5f-4e5c-9176-2bcbaecc961a'] = $pane;
    $display->panels['attachment_1_1'][11] = 'new-3bc42ce7-ca5f-4e5c-9176-2bcbaecc961a';
    $pane = new stdClass();
    $pane->pid = 'new-fff67ee4-207e-421d-9fd6-ad12b8078621';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fff67ee4-207e-421d-9fd6-ad12b8078621';
    $display->content['new-fff67ee4-207e-421d-9fd6-ad12b8078621'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-fff67ee4-207e-421d-9fd6-ad12b8078621';
    $pane = new stdClass();
    $pane->pid = 'new-c9969c72-cf63-49ed-b371-61bb19780890';
    $pane->panel = 'left_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'ding_campaign_image_style' => 'medium',
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'empty',
        2 => 'empty',
        3 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c9969c72-cf63-49ed-b371-61bb19780890';
    $display->content['new-c9969c72-cf63-49ed-b371-61bb19780890'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-c9969c72-cf63-49ed-b371-61bb19780890';
    $pane = new stdClass();
    $pane->pid = 'new-461e8a45-91a4-49de-88b5-24000aad0c33';
    $pane->panel = 'main_content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '461e8a45-91a4-49de-88b5-24000aad0c33';
    $display->content['new-461e8a45-91a4-49de-88b5-24000aad0c33'] = $pane;
    $display->panels['main_content'][0] = 'new-461e8a45-91a4-49de-88b5-24000aad0c33';
    $pane = new stdClass();
    $pane->pid = 'new-6d468b2d-03ac-4ecd-818d-a058e00dc750';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bibsdb_wall_title_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'bibsdb_wall_title_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall-title',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6d468b2d-03ac-4ecd-818d-a058e00dc750';
    $display->content['new-6d468b2d-03ac-4ecd-818d-a058e00dc750'] = $pane;
    $display->panels['main_content'][1] = 'new-6d468b2d-03ac-4ecd-818d-a058e00dc750';
    $pane = new stdClass();
    $pane->pid = 'new-5d3c5c36-59f2-4fe2-ae7d-a8e79f030da1';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '179',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5d3c5c36-59f2-4fe2-ae7d-a8e79f030da1';
    $display->content['new-5d3c5c36-59f2-4fe2-ae7d-a8e79f030da1'] = $pane;
    $display->panels['main_content'][2] = 'new-5d3c5c36-59f2-4fe2-ae7d-a8e79f030da1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__bibsdb-groups'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__bibsdb-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Bibsdb Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Multiple terms from node',
        'keyword' => 'terms',
        'name' => 'terms_from_node',
        'context' => 'argument_entity_id:node_1',
        'vid' => array(
          3 => '3',
          4 => '4',
          1 => '1',
          2 => '2',
        ),
        'concatenator' => ',',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'bibsdb-page',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e4576eaa-237b-4dbb-917b-aba5bff3d8a3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cc5c609c-5ad8-4a91-abf2-3b9befd8f376';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'ding_campaign_style' => 'ding_campaign_full_width',
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'argument_entity_id:node_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc5c609c-5ad8-4a91-abf2-3b9befd8f376';
    $display->content['new-cc5c609c-5ad8-4a91-abf2-3b9befd8f376'] = $pane;
    $display->panels['attachment_1_1'][0] = 'new-cc5c609c-5ad8-4a91-abf2-3b9befd8f376';
    $pane = new stdClass();
    $pane->pid = 'new-7d600a9c-d723-45a7-bd21-59af1a691ca4';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_materials';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'ding_carousel',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-small no-gradient',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7d600a9c-d723-45a7-bd21-59af1a691ca4';
    $display->content['new-7d600a9c-d723-45a7-bd21-59af1a691ca4'] = $pane;
    $display->panels['attachment_1_1'][1] = 'new-7d600a9c-d723-45a7-bd21-59af1a691ca4';
    $pane = new stdClass();
    $pane->pid = 'new-c857a1ef-6bb2-4f95-94ae-d176d79a7265';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c857a1ef-6bb2-4f95-94ae-d176d79a7265';
    $display->content['new-c857a1ef-6bb2-4f95-94ae-d176d79a7265'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-c857a1ef-6bb2-4f95-94ae-d176d79a7265';
    $pane = new stdClass();
    $pane->pid = 'new-a5810ddf-717b-4560-a63a-1ec30c14060a';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-4';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a5810ddf-717b-4560-a63a-1ec30c14060a';
    $display->content['new-a5810ddf-717b-4560-a63a-1ec30c14060a'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-a5810ddf-717b-4560-a63a-1ec30c14060a';
    $pane = new stdClass();
    $pane->pid = 'new-b2afcfd3-6561-4a08-9b5d-f493ac9c3938';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b2afcfd3-6561-4a08-9b5d-f493ac9c3938';
    $display->content['new-b2afcfd3-6561-4a08-9b5d-f493ac9c3938'] = $pane;
    $display->panels['left_sidebar'][2] = 'new-b2afcfd3-6561-4a08-9b5d-f493ac9c3938';
    $pane = new stdClass();
    $pane->pid = 'new-0c1b010b-aad2-4a5e-badd-f2fe5334a80c';
    $pane->panel = 'left_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = '0c1b010b-aad2-4a5e-badd-f2fe5334a80c';
    $display->content['new-0c1b010b-aad2-4a5e-badd-f2fe5334a80c'] = $pane;
    $display->panels['left_sidebar'][3] = 'new-0c1b010b-aad2-4a5e-badd-f2fe5334a80c';
    $pane = new stdClass();
    $pane->pid = 'new-0d732c8e-6a2e-4993-ba6f-7cb2025bada6';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $pane->uuid = '0d732c8e-6a2e-4993-ba6f-7cb2025bada6';
    $display->content['new-0d732c8e-6a2e-4993-ba6f-7cb2025bada6'] = $pane;
    $display->panels['left_sidebar'][4] = 'new-0d732c8e-6a2e-4993-ba6f-7cb2025bada6';
    $pane = new stdClass();
    $pane->pid = 'new-33f78b6a-3147-455f-b437-70261fe3426c';
    $pane->panel = 'main_content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '33f78b6a-3147-455f-b437-70261fe3426c';
    $display->content['new-33f78b6a-3147-455f-b437-70261fe3426c'] = $pane;
    $display->panels['main_content'][0] = 'new-33f78b6a-3147-455f-b437-70261fe3426c';
    $pane = new stdClass();
    $pane->pid = 'new-d8c14951-b490-45f8-954e-9002e156e2bc';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bibsdb_wall_title_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'bibsdb_wall_title_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall-title',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd8c14951-b490-45f8-954e-9002e156e2bc';
    $display->content['new-d8c14951-b490-45f8-954e-9002e156e2bc'] = $pane;
    $display->panels['main_content'][1] = 'new-d8c14951-b490-45f8-954e-9002e156e2bc';
    $pane = new stdClass();
    $pane->pid = 'new-2a0c0da9-ab8b-4691-8b94-573ca039f34d';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '185',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2a0c0da9-ab8b-4691-8b94-573ca039f34d';
    $display->content['new-2a0c0da9-ab8b-4691-8b94-573ca039f34d'] = $pane;
    $display->panels['main_content'][2] = 'new-2a0c0da9-ab8b-4691-8b94-573ca039f34d';
    $pane = new stdClass();
    $pane->pid = 'new-8f23b651-8dd8-4f0a-8016-acce68b9aeeb';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bibsdb_wall_title_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'bibsdb_wall_title_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall-title',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8f23b651-8dd8-4f0a-8016-acce68b9aeeb';
    $display->content['new-8f23b651-8dd8-4f0a-8016-acce68b9aeeb'] = $pane;
    $display->panels['main_content'][3] = 'new-8f23b651-8dd8-4f0a-8016-acce68b9aeeb';
    $pane = new stdClass();
    $pane->pid = 'new-8b668c6e-15cb-4df9-8b7b-123c263afba0';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '186',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8b668c6e-15cb-4df9-8b7b-123c263afba0';
    $display->content['new-8b668c6e-15cb-4df9-8b7b-123c263afba0'] = $pane;
    $display->panels['main_content'][4] = 'new-8b668c6e-15cb-4df9-8b7b-123c263afba0';
    $pane = new stdClass();
    $pane->pid = 'new-59d161df-c9af-438e-890e-5ce80bf5016a';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bibsdb_wall_title_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'bibsdb_wall_title_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall-title',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '59d161df-c9af-438e-890e-5ce80bf5016a';
    $display->content['new-59d161df-c9af-438e-890e-5ce80bf5016a'] = $pane;
    $display->panels['main_content'][5] = 'new-59d161df-c9af-438e-890e-5ce80bf5016a';
    $pane = new stdClass();
    $pane->pid = 'new-032e474f-2b34-4dfd-a2a3-555de509d074';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '187',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '032e474f-2b34-4dfd-a2a3-555de509d074';
    $display->content['new-032e474f-2b34-4dfd-a2a3-555de509d074'] = $pane;
    $display->panels['main_content'][6] = 'new-032e474f-2b34-4dfd-a2a3-555de509d074';
    $pane = new stdClass();
    $pane->pid = 'new-46955cd9-2475-4f19-b9aa-439834050a62';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bibsdb_wall_title_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'bibsdb_wall_title_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall-title',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '46955cd9-2475-4f19-b9aa-439834050a62';
    $display->content['new-46955cd9-2475-4f19-b9aa-439834050a62'] = $pane;
    $display->panels['main_content'][7] = 'new-46955cd9-2475-4f19-b9aa-439834050a62';
    $pane = new stdClass();
    $pane->pid = 'new-5c2ce0d4-6cd6-4cf4-81f2-b0924af8c865';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '188',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '5c2ce0d4-6cd6-4cf4-81f2-b0924af8c865';
    $display->content['new-5c2ce0d4-6cd6-4cf4-81f2-b0924af8c865'] = $pane;
    $display->panels['main_content'][8] = 'new-5c2ce0d4-6cd6-4cf4-81f2-b0924af8c865';
    $pane = new stdClass();
    $pane->pid = 'new-9a3bc14f-030c-43a5-9f5e-8e1405462b1d';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bibsdb_wall_title_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'bibsdb_wall_title_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall-title',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '9a3bc14f-030c-43a5-9f5e-8e1405462b1d';
    $display->content['new-9a3bc14f-030c-43a5-9f5e-8e1405462b1d'] = $pane;
    $display->panels['main_content'][9] = 'new-9a3bc14f-030c-43a5-9f5e-8e1405462b1d';
    $pane = new stdClass();
    $pane->pid = 'new-23be3875-8982-4136-bd82-bfa0a42d6959';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '189',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '23be3875-8982-4136-bd82-bfa0a42d6959';
    $display->content['new-23be3875-8982-4136-bd82-bfa0a42d6959'] = $pane;
    $display->panels['main_content'][10] = 'new-23be3875-8982-4136-bd82-bfa0a42d6959';
    $pane = new stdClass();
    $pane->pid = 'new-03856e77-8c0e-4ad4-83d1-07cf7a56d912';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bibsdb_wall_title_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'bibsdb_wall_title_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall-title',
    );
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '03856e77-8c0e-4ad4-83d1-07cf7a56d912';
    $display->content['new-03856e77-8c0e-4ad4-83d1-07cf7a56d912'] = $pane;
    $display->panels['main_content'][11] = 'new-03856e77-8c0e-4ad4-83d1-07cf7a56d912';
    $pane = new stdClass();
    $pane->pid = 'new-abc59ae9-0f23-489d-9678-87fcbeb6adbc';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '190',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = 'abc59ae9-0f23-489d-9678-87fcbeb6adbc';
    $display->content['new-abc59ae9-0f23-489d-9678-87fcbeb6adbc'] = $pane;
    $display->panels['main_content'][12] = 'new-abc59ae9-0f23-489d-9678-87fcbeb6adbc';
    $pane = new stdClass();
    $pane->pid = 'new-eda863cd-30ef-48de-b920-166dd93341b5';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bibsdb_page_body_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = 'eda863cd-30ef-48de-b920-166dd93341b5';
    $display->content['new-eda863cd-30ef-48de-b920-166dd93341b5'] = $pane;
    $display->panels['main_content'][13] = 'new-eda863cd-30ef-48de-b920-166dd93341b5';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-33f78b6a-3147-455f-b437-70261fe3426c';
  $handler->conf['display'] = $display;
  $export['node_view__bibsdb-page'] = $handler;

  return $export;
}
