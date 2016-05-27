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
  $handler->weight = -9;
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
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->pid = 'new-668dfc7d-4d91-4dff-ad05-ae9da59a4d43';
    $pane->panel = 'main_content';
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
      'css_class' => 'ding-group-news',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '668dfc7d-4d91-4dff-ad05-ae9da59a4d43';
    $display->content['new-668dfc7d-4d91-4dff-ad05-ae9da59a4d43'] = $pane;
    $display->panels['main_content'][1] = 'new-668dfc7d-4d91-4dff-ad05-ae9da59a4d43';
    $pane = new stdClass();
    $pane->pid = 'new-3bc42ce7-ca5f-4e5c-9176-2bcbaecc961a';
    $pane->panel = 'main_content';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3bc42ce7-ca5f-4e5c-9176-2bcbaecc961a';
    $display->content['new-3bc42ce7-ca5f-4e5c-9176-2bcbaecc961a'] = $pane;
    $display->panels['main_content'][2] = 'new-3bc42ce7-ca5f-4e5c-9176-2bcbaecc961a';
    $pane = new stdClass();
    $pane->pid = 'new-5a45a2be-48d5-4b4f-bb4d-26af2e630826';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '206',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall wall0',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5a45a2be-48d5-4b4f-bb4d-26af2e630826';
    $display->content['new-5a45a2be-48d5-4b4f-bb4d-26af2e630826'] = $pane;
    $display->panels['main_content'][3] = 'new-5a45a2be-48d5-4b4f-bb4d-26af2e630826';
    $pane = new stdClass();
    $pane->pid = 'new-5c76b05e-de14-4bc0-8ba4-4bad3cc3f7cf';
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
      'css_class' => 'wall left',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5c76b05e-de14-4bc0-8ba4-4bad3cc3f7cf';
    $display->content['new-5c76b05e-de14-4bc0-8ba4-4bad3cc3f7cf'] = $pane;
    $display->panels['main_content'][4] = 'new-5c76b05e-de14-4bc0-8ba4-4bad3cc3f7cf';
    $pane = new stdClass();
    $pane->pid = 'new-3a5104c7-f48e-42af-9c8a-4408581cacb3';
    $pane->panel = 'main_content';
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
      'css_class' => 'wall right',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '3a5104c7-f48e-42af-9c8a-4408581cacb3';
    $display->content['new-3a5104c7-f48e-42af-9c8a-4408581cacb3'] = $pane;
    $display->panels['main_content'][5] = 'new-3a5104c7-f48e-42af-9c8a-4408581cacb3';
    $pane = new stdClass();
    $pane->pid = 'new-5944ec5a-12fa-4f74-8691-1001a461f6b5';
    $pane->panel = 'main_content';
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
      'css_class' => 'wall left',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '5944ec5a-12fa-4f74-8691-1001a461f6b5';
    $display->content['new-5944ec5a-12fa-4f74-8691-1001a461f6b5'] = $pane;
    $display->panels['main_content'][6] = 'new-5944ec5a-12fa-4f74-8691-1001a461f6b5';
    $pane = new stdClass();
    $pane->pid = 'new-d7d4afc2-d36b-4c6d-8a67-95c4d8b137b3';
    $pane->panel = 'main_content';
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
      'css_class' => 'wall right',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'd7d4afc2-d36b-4c6d-8a67-95c4d8b137b3';
    $display->content['new-d7d4afc2-d36b-4c6d-8a67-95c4d8b137b3'] = $pane;
    $display->panels['main_content'][7] = 'new-d7d4afc2-d36b-4c6d-8a67-95c4d8b137b3';
    $pane = new stdClass();
    $pane->pid = 'new-9da8c982-2b61-4be1-b5bb-401562641afc';
    $pane->panel = 'main_content';
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
      'css_class' => 'wall left',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '9da8c982-2b61-4be1-b5bb-401562641afc';
    $display->content['new-9da8c982-2b61-4be1-b5bb-401562641afc'] = $pane;
    $display->panels['main_content'][8] = 'new-9da8c982-2b61-4be1-b5bb-401562641afc';
    $pane = new stdClass();
    $pane->pid = 'new-cb201141-acf0-469a-94c6-1c428d578833';
    $pane->panel = 'main_content';
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
      'css_class' => 'wall right',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'cb201141-acf0-469a-94c6-1c428d578833';
    $display->content['new-cb201141-acf0-469a-94c6-1c428d578833'] = $pane;
    $display->panels['main_content'][9] = 'new-cb201141-acf0-469a-94c6-1c428d578833';
    $pane = new stdClass();
    $pane->pid = 'new-2baddbf8-9bd1-4880-bdde-15c3fd4f43ea';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '208',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall left',
    );
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '2baddbf8-9bd1-4880-bdde-15c3fd4f43ea';
    $display->content['new-2baddbf8-9bd1-4880-bdde-15c3fd4f43ea'] = $pane;
    $display->panels['main_content'][10] = 'new-2baddbf8-9bd1-4880-bdde-15c3fd4f43ea';
    $pane = new stdClass();
    $pane->pid = 'new-ebad9484-bc8d-4e0d-94d1-0bd60af45182';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '209',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall right',
    );
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'ebad9484-bc8d-4e0d-94d1-0bd60af45182';
    $display->content['new-ebad9484-bc8d-4e0d-94d1-0bd60af45182'] = $pane;
    $display->panels['main_content'][11] = 'new-ebad9484-bc8d-4e0d-94d1-0bd60af45182';
    $pane = new stdClass();
    $pane->pid = 'new-d63cc6fb-32a0-456d-814d-632b62970e31';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '210',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall left',
    );
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = 'd63cc6fb-32a0-456d-814d-632b62970e31';
    $display->content['new-d63cc6fb-32a0-456d-814d-632b62970e31'] = $pane;
    $display->panels['main_content'][12] = 'new-d63cc6fb-32a0-456d-814d-632b62970e31';
    $pane = new stdClass();
    $pane->pid = 'new-71213a9d-c4ab-49bb-9199-8e7382c7a2c5';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '211',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall right',
    );
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '71213a9d-c4ab-49bb-9199-8e7382c7a2c5';
    $display->content['new-71213a9d-c4ab-49bb-9199-8e7382c7a2c5'] = $pane;
    $display->panels['main_content'][13] = 'new-71213a9d-c4ab-49bb-9199-8e7382c7a2c5';
    $pane = new stdClass();
    $pane->pid = 'new-d5904202-39f4-4199-b720-df25f5665fd2';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '212',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall left',
    );
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = 'd5904202-39f4-4199-b720-df25f5665fd2';
    $display->content['new-d5904202-39f4-4199-b720-df25f5665fd2'] = $pane;
    $display->panels['main_content'][14] = 'new-d5904202-39f4-4199-b720-df25f5665fd2';
    $pane = new stdClass();
    $pane->pid = 'new-57c1ec27-adb3-4679-b4a9-828aa4c2b2a9';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '228',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall right',
    );
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = '57c1ec27-adb3-4679-b4a9-828aa4c2b2a9';
    $display->content['new-57c1ec27-adb3-4679-b4a9-828aa4c2b2a9'] = $pane;
    $display->panels['main_content'][15] = 'new-57c1ec27-adb3-4679-b4a9-828aa4c2b2a9';
    $pane = new stdClass();
    $pane->pid = 'new-b97b23d9-d007-4be9-9236-b42ec6616c45';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '229',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall left',
    );
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = 'b97b23d9-d007-4be9-9236-b42ec6616c45';
    $display->content['new-b97b23d9-d007-4be9-9236-b42ec6616c45'] = $pane;
    $display->panels['main_content'][16] = 'new-b97b23d9-d007-4be9-9236-b42ec6616c45';
    $pane = new stdClass();
    $pane->pid = 'new-6b86aad1-2447-4aeb-8748-1f712834b635';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '230',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall right',
    );
    $pane->extras = array();
    $pane->position = 17;
    $pane->locks = array();
    $pane->uuid = '6b86aad1-2447-4aeb-8748-1f712834b635';
    $display->content['new-6b86aad1-2447-4aeb-8748-1f712834b635'] = $pane;
    $display->panels['main_content'][17] = 'new-6b86aad1-2447-4aeb-8748-1f712834b635';
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
  $handler->weight = 28;
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
    $pane->pid = 'new-2a48a1c6-99fd-4404-a80c-bacf970378bc';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '199',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall wall0',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2a48a1c6-99fd-4404-a80c-bacf970378bc';
    $display->content['new-2a48a1c6-99fd-4404-a80c-bacf970378bc'] = $pane;
    $display->panels['main_content'][1] = 'new-2a48a1c6-99fd-4404-a80c-bacf970378bc';
    $pane = new stdClass();
    $pane->pid = 'new-a306f5ac-ebc1-4c6a-82b2-77552c6666b4';
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
      'css_class' => 'wall left',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a306f5ac-ebc1-4c6a-82b2-77552c6666b4';
    $display->content['new-a306f5ac-ebc1-4c6a-82b2-77552c6666b4'] = $pane;
    $display->panels['main_content'][2] = 'new-a306f5ac-ebc1-4c6a-82b2-77552c6666b4';
    $pane = new stdClass();
    $pane->pid = 'new-3ab3d3c1-e8a8-4c80-980c-7172ae380d7b';
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
      'css_class' => 'wall right',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3ab3d3c1-e8a8-4c80-980c-7172ae380d7b';
    $display->content['new-3ab3d3c1-e8a8-4c80-980c-7172ae380d7b'] = $pane;
    $display->panels['main_content'][3] = 'new-3ab3d3c1-e8a8-4c80-980c-7172ae380d7b';
    $pane = new stdClass();
    $pane->pid = 'new-fef4076b-159f-44f0-8c35-d2c31ecdf47b';
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
      'css_class' => 'wall left',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'fef4076b-159f-44f0-8c35-d2c31ecdf47b';
    $display->content['new-fef4076b-159f-44f0-8c35-d2c31ecdf47b'] = $pane;
    $display->panels['main_content'][4] = 'new-fef4076b-159f-44f0-8c35-d2c31ecdf47b';
    $pane = new stdClass();
    $pane->pid = 'new-2169468b-2ec5-45ff-9963-645da7ccbdc1';
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
      'css_class' => 'wall right',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '2169468b-2ec5-45ff-9963-645da7ccbdc1';
    $display->content['new-2169468b-2ec5-45ff-9963-645da7ccbdc1'] = $pane;
    $display->panels['main_content'][5] = 'new-2169468b-2ec5-45ff-9963-645da7ccbdc1';
    $pane = new stdClass();
    $pane->pid = 'new-393f6a41-9296-498f-9542-7a7e94361e89';
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
      'css_class' => 'wall left',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '393f6a41-9296-498f-9542-7a7e94361e89';
    $display->content['new-393f6a41-9296-498f-9542-7a7e94361e89'] = $pane;
    $display->panels['main_content'][6] = 'new-393f6a41-9296-498f-9542-7a7e94361e89';
    $pane = new stdClass();
    $pane->pid = 'new-0c23accc-fd15-45a6-8496-a72981328862';
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
      'css_class' => 'wall right',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '0c23accc-fd15-45a6-8496-a72981328862';
    $display->content['new-0c23accc-fd15-45a6-8496-a72981328862'] = $pane;
    $display->panels['main_content'][7] = 'new-0c23accc-fd15-45a6-8496-a72981328862';
    $pane = new stdClass();
    $pane->pid = 'new-691272ea-e651-470c-ae8a-6d83416f402b';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '200',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall left',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '691272ea-e651-470c-ae8a-6d83416f402b';
    $display->content['new-691272ea-e651-470c-ae8a-6d83416f402b'] = $pane;
    $display->panels['main_content'][8] = 'new-691272ea-e651-470c-ae8a-6d83416f402b';
    $pane = new stdClass();
    $pane->pid = 'new-cdb721fe-b178-4f02-9321-dba254edc412';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '201',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall right',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'cdb721fe-b178-4f02-9321-dba254edc412';
    $display->content['new-cdb721fe-b178-4f02-9321-dba254edc412'] = $pane;
    $display->panels['main_content'][9] = 'new-cdb721fe-b178-4f02-9321-dba254edc412';
    $pane = new stdClass();
    $pane->pid = 'new-13a88ff1-a1a4-40fd-821a-03afdac7c5a8';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '202',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall left',
    );
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '13a88ff1-a1a4-40fd-821a-03afdac7c5a8';
    $display->content['new-13a88ff1-a1a4-40fd-821a-03afdac7c5a8'] = $pane;
    $display->panels['main_content'][10] = 'new-13a88ff1-a1a4-40fd-821a-03afdac7c5a8';
    $pane = new stdClass();
    $pane->pid = 'new-6543ed52-bd7d-4b71-9db0-3ef82b284f7b';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '203',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall right',
    );
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '6543ed52-bd7d-4b71-9db0-3ef82b284f7b';
    $display->content['new-6543ed52-bd7d-4b71-9db0-3ef82b284f7b'] = $pane;
    $display->panels['main_content'][11] = 'new-6543ed52-bd7d-4b71-9db0-3ef82b284f7b';
    $pane = new stdClass();
    $pane->pid = 'new-8effaf39-645e-4fa8-a4d4-73fb47abed09';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '204',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall left',
    );
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '8effaf39-645e-4fa8-a4d4-73fb47abed09';
    $display->content['new-8effaf39-645e-4fa8-a4d4-73fb47abed09'] = $pane;
    $display->panels['main_content'][12] = 'new-8effaf39-645e-4fa8-a4d4-73fb47abed09';
    $pane = new stdClass();
    $pane->pid = 'new-c97d2776-b6a2-4e4d-8391-39b96a7bcfe7';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '205',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall right',
    );
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = 'c97d2776-b6a2-4e4d-8391-39b96a7bcfe7';
    $display->content['new-c97d2776-b6a2-4e4d-8391-39b96a7bcfe7'] = $pane;
    $display->panels['main_content'][13] = 'new-c97d2776-b6a2-4e4d-8391-39b96a7bcfe7';
    $pane = new stdClass();
    $pane->pid = 'new-2578f7cb-1ace-44f9-ab4f-a827b5a8be28';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '224',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall left',
    );
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '2578f7cb-1ace-44f9-ab4f-a827b5a8be28';
    $display->content['new-2578f7cb-1ace-44f9-ab4f-a827b5a8be28'] = $pane;
    $display->panels['main_content'][14] = 'new-2578f7cb-1ace-44f9-ab4f-a827b5a8be28';
    $pane = new stdClass();
    $pane->pid = 'new-2ada6498-0099-4022-a530-3d1793437dff';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '225',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall right',
    );
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = '2ada6498-0099-4022-a530-3d1793437dff';
    $display->content['new-2ada6498-0099-4022-a530-3d1793437dff'] = $pane;
    $display->panels['main_content'][15] = 'new-2ada6498-0099-4022-a530-3d1793437dff';
    $pane = new stdClass();
    $pane->pid = 'new-46f648d4-b1c0-4c94-9af6-cfd36de524a3';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '226',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall left',
    );
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '46f648d4-b1c0-4c94-9af6-cfd36de524a3';
    $display->content['new-46f648d4-b1c0-4c94-9af6-cfd36de524a3'] = $pane;
    $display->panels['main_content'][16] = 'new-46f648d4-b1c0-4c94-9af6-cfd36de524a3';
    $pane = new stdClass();
    $pane->pid = 'new-0d7ca85b-62f6-4ab6-b226-558a981acb80';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '227',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall right',
    );
    $pane->extras = array();
    $pane->position = 17;
    $pane->locks = array();
    $pane->uuid = '0d7ca85b-62f6-4ab6-b226-558a981acb80';
    $display->content['new-0d7ca85b-62f6-4ab6-b226-558a981acb80'] = $pane;
    $display->panels['main_content'][17] = 'new-0d7ca85b-62f6-4ab6-b226-558a981acb80';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-33f78b6a-3147-455f-b437-70261fe3426c';
  $handler->conf['display'] = $display;
  $export['node_view__bibsdb-page'] = $handler;

  return $export;
}
