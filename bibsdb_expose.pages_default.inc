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
    $pane->pid = 'new-7dd3f895-e740-4c1e-a5c8-dd0d49a87cbf';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_group_title_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'cs_adaptive_image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'styles' => array(
          'breakpoint_1' => '768',
          'style_1' => 'ding_panorama_primary_medium',
          'breakpoint_2' => '500',
          'style_2' => 'ding_panorama_primary_small',
          'max_style' => 'ding_panorama_primary_medium',
          'fallback_style' => 'ding_panorama_primary_medium',
        ),
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7dd3f895-e740-4c1e-a5c8-dd0d49a87cbf';
    $display->content['new-7dd3f895-e740-4c1e-a5c8-dd0d49a87cbf'] = $pane;
    $display->panels['main_content'][0] = 'new-7dd3f895-e740-4c1e-a5c8-dd0d49a87cbf';
    $pane = new stdClass();
    $pane->pid = 'new-2d541291-f5de-469f-ab29-d97930300bee';
    $pane->panel = 'main_content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => 'page-title',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2d541291-f5de-469f-ab29-d97930300bee';
    $display->content['new-2d541291-f5de-469f-ab29-d97930300bee'] = $pane;
    $display->panels['main_content'][1] = 'new-2d541291-f5de-469f-ab29-d97930300bee';
    $pane = new stdClass();
    $pane->pid = 'new-2e357f32-b169-4ebf-8cf5-66b1414f305a';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_group_lead';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2e357f32-b169-4ebf-8cf5-66b1414f305a';
    $display->content['new-2e357f32-b169-4ebf-8cf5-66b1414f305a'] = $pane;
    $display->panels['main_content'][2] = 'new-2e357f32-b169-4ebf-8cf5-66b1414f305a';
    $pane = new stdClass();
    $pane->pid = 'new-342b3c78-fae6-4332-b0b0-6c9445232176';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '342b3c78-fae6-4332-b0b0-6c9445232176';
    $display->content['new-342b3c78-fae6-4332-b0b0-6c9445232176'] = $pane;
    $display->panels['main_content'][3] = 'new-342b3c78-fae6-4332-b0b0-6c9445232176';
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
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5c76b05e-de14-4bc0-8ba4-4bad3cc3f7cf';
    $display->content['new-5c76b05e-de14-4bc0-8ba4-4bad3cc3f7cf'] = $pane;
    $display->panels['main_content'][4] = 'new-5c76b05e-de14-4bc0-8ba4-4bad3cc3f7cf';
    $pane = new stdClass();
    $pane->pid = 'new-89d8ff35-eb7a-4319-b486-71407d8fda54';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '89d8ff35-eb7a-4319-b486-71407d8fda54';
    $display->content['new-89d8ff35-eb7a-4319-b486-71407d8fda54'] = $pane;
    $display->panels['main_content'][5] = 'new-89d8ff35-eb7a-4319-b486-71407d8fda54';
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
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '3a5104c7-f48e-42af-9c8a-4408581cacb3';
    $display->content['new-3a5104c7-f48e-42af-9c8a-4408581cacb3'] = $pane;
    $display->panels['main_content'][6] = 'new-3a5104c7-f48e-42af-9c8a-4408581cacb3';
    $pane = new stdClass();
    $pane->pid = 'new-23cb1359-c432-4b02-ac8a-2def72e670e2';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '23cb1359-c432-4b02-ac8a-2def72e670e2';
    $display->content['new-23cb1359-c432-4b02-ac8a-2def72e670e2'] = $pane;
    $display->panels['main_content'][7] = 'new-23cb1359-c432-4b02-ac8a-2def72e670e2';
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
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '5944ec5a-12fa-4f74-8691-1001a461f6b5';
    $display->content['new-5944ec5a-12fa-4f74-8691-1001a461f6b5'] = $pane;
    $display->panels['main_content'][8] = 'new-5944ec5a-12fa-4f74-8691-1001a461f6b5';
    $pane = new stdClass();
    $pane->pid = 'new-423a07c7-2aee-4f49-bd19-656a0dfdf093';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_group_body';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '423a07c7-2aee-4f49-bd19-656a0dfdf093';
    $display->content['new-423a07c7-2aee-4f49-bd19-656a0dfdf093'] = $pane;
    $display->panels['main_content'][9] = 'new-423a07c7-2aee-4f49-bd19-656a0dfdf093';
    $pane = new stdClass();
    $pane->pid = 'new-d0648589-5b2a-469e-a882-ebe876b687ef';
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'd0648589-5b2a-469e-a882-ebe876b687ef';
    $display->content['new-d0648589-5b2a-469e-a882-ebe876b687ef'] = $pane;
    $display->panels['main_content'][10] = 'new-d0648589-5b2a-469e-a882-ebe876b687ef';
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
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'd7d4afc2-d36b-4c6d-8a67-95c4d8b137b3';
    $display->content['new-d7d4afc2-d36b-4c6d-8a67-95c4d8b137b3'] = $pane;
    $display->panels['main_content'][11] = 'new-d7d4afc2-d36b-4c6d-8a67-95c4d8b137b3';
    $pane = new stdClass();
    $pane->pid = 'new-337297ef-3570-49ce-8c8d-1f9c618544cd';
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
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '337297ef-3570-49ce-8c8d-1f9c618544cd';
    $display->content['new-337297ef-3570-49ce-8c8d-1f9c618544cd'] = $pane;
    $display->panels['main_content'][12] = 'new-337297ef-3570-49ce-8c8d-1f9c618544cd';
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
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '9da8c982-2b61-4be1-b5bb-401562641afc';
    $display->content['new-9da8c982-2b61-4be1-b5bb-401562641afc'] = $pane;
    $display->panels['main_content'][13] = 'new-9da8c982-2b61-4be1-b5bb-401562641afc';
    $pane = new stdClass();
    $pane->pid = 'new-47297131-89d9-4b08-9035-4ce235f8ae3a';
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
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '47297131-89d9-4b08-9035-4ce235f8ae3a';
    $display->content['new-47297131-89d9-4b08-9035-4ce235f8ae3a'] = $pane;
    $display->panels['main_content'][14] = 'new-47297131-89d9-4b08-9035-4ce235f8ae3a';
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
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = 'cb201141-acf0-469a-94c6-1c428d578833';
    $display->content['new-cb201141-acf0-469a-94c6-1c428d578833'] = $pane;
    $display->panels['main_content'][15] = 'new-cb201141-acf0-469a-94c6-1c428d578833';
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
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '668dfc7d-4d91-4dff-ad05-ae9da59a4d43';
    $display->content['new-668dfc7d-4d91-4dff-ad05-ae9da59a4d43'] = $pane;
    $display->panels['main_content'][16] = 'new-668dfc7d-4d91-4dff-ad05-ae9da59a4d43';
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
    $pane->position = 17;
    $pane->locks = array();
    $pane->uuid = '3bc42ce7-ca5f-4e5c-9176-2bcbaecc961a';
    $display->content['new-3bc42ce7-ca5f-4e5c-9176-2bcbaecc961a'] = $pane;
    $display->panels['main_content'][17] = 'new-3bc42ce7-ca5f-4e5c-9176-2bcbaecc961a';
    $pane = new stdClass();
    $pane->pid = 'new-103e6edb-58ce-4fdc-8161-707267b6d254';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bibsdb_group_body_2';
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
    $pane->position = 18;
    $pane->locks = array();
    $pane->uuid = '103e6edb-58ce-4fdc-8161-707267b6d254';
    $display->content['new-103e6edb-58ce-4fdc-8161-707267b6d254'] = $pane;
    $display->panels['main_content'][18] = 'new-103e6edb-58ce-4fdc-8161-707267b6d254';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__bibsdb-groups'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__bibsdb-new-materials';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Bibsdb New Materials',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
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
              'new_materials' => 'new_materials',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'bibsdb-new-materials',
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
  $display->uuid = '36835cd4-cd1b-4616-a833-0ecb235494cb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0e287121-f776-49bb-8663-c4a21de2a5b6';
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
    $pane->uuid = '0e287121-f776-49bb-8663-c4a21de2a5b6';
    $display->content['new-0e287121-f776-49bb-8663-c4a21de2a5b6'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-0e287121-f776-49bb-8663-c4a21de2a5b6';
    $pane = new stdClass();
    $pane->pid = 'new-88baaf0d-bddf-4649-9029-d84fec86a486';
    $pane->panel = 'main_content';
    $pane->type = 'new_materials';
    $pane->subtype = 'new_materials';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '88baaf0d-bddf-4649-9029-d84fec86a486';
    $display->content['new-88baaf0d-bddf-4649-9029-d84fec86a486'] = $pane;
    $display->panels['main_content'][0] = 'new-88baaf0d-bddf-4649-9029-d84fec86a486';
    $pane = new stdClass();
    $pane->pid = 'new-cd1bb14b-bf56-4dca-bed7-edb8ee8e2eee';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '213',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall wall0 large-padding',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cd1bb14b-bf56-4dca-bed7-edb8ee8e2eee';
    $display->content['new-cd1bb14b-bf56-4dca-bed7-edb8ee8e2eee'] = $pane;
    $display->panels['main_content'][1] = 'new-cd1bb14b-bf56-4dca-bed7-edb8ee8e2eee';
    $pane = new stdClass();
    $pane->pid = 'new-fe1f7879-4b8e-4ecb-a556-a04492c20b8d';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bibsdb_new_materials_body';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fe1f7879-4b8e-4ecb-a556-a04492c20b8d';
    $display->content['new-fe1f7879-4b8e-4ecb-a556-a04492c20b8d'] = $pane;
    $display->panels['main_content'][2] = 'new-fe1f7879-4b8e-4ecb-a556-a04492c20b8d';
    $pane = new stdClass();
    $pane->pid = 'new-887d8b15-ea95-424b-a9ce-bccc69001a14';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '191',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall left large-padding',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '887d8b15-ea95-424b-a9ce-bccc69001a14';
    $display->content['new-887d8b15-ea95-424b-a9ce-bccc69001a14'] = $pane;
    $display->panels['main_content'][3] = 'new-887d8b15-ea95-424b-a9ce-bccc69001a14';
    $pane = new stdClass();
    $pane->pid = 'new-79bb34f0-b853-47e6-ac12-24c12720f384';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '192',
        'field_bibsdb_hosting_node_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wall right large-padding',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '79bb34f0-b853-47e6-ac12-24c12720f384';
    $display->content['new-79bb34f0-b853-47e6-ac12-24c12720f384'] = $pane;
    $display->panels['main_content'][4] = 'new-79bb34f0-b853-47e6-ac12-24c12720f384';
    $pane = new stdClass();
    $pane->pid = 'new-1f8c920a-7f23-4c76-bf6f-a7511ccf6ab6';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '214',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '1f8c920a-7f23-4c76-bf6f-a7511ccf6ab6';
    $display->content['new-1f8c920a-7f23-4c76-bf6f-a7511ccf6ab6'] = $pane;
    $display->panels['main_content'][5] = 'new-1f8c920a-7f23-4c76-bf6f-a7511ccf6ab6';
    $pane = new stdClass();
    $pane->pid = 'new-73ed3f13-ecc3-4473-8c7a-3ee73708ac26';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '215',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '73ed3f13-ecc3-4473-8c7a-3ee73708ac26';
    $display->content['new-73ed3f13-ecc3-4473-8c7a-3ee73708ac26'] = $pane;
    $display->panels['main_content'][6] = 'new-73ed3f13-ecc3-4473-8c7a-3ee73708ac26';
    $pane = new stdClass();
    $pane->pid = 'new-b6e688be-2382-4891-89ef-6d20a3f9e99a';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '216',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'b6e688be-2382-4891-89ef-6d20a3f9e99a';
    $display->content['new-b6e688be-2382-4891-89ef-6d20a3f9e99a'] = $pane;
    $display->panels['main_content'][7] = 'new-b6e688be-2382-4891-89ef-6d20a3f9e99a';
    $pane = new stdClass();
    $pane->pid = 'new-ba95363e-a4f9-4501-bde7-8a4bfc594d71';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_wall-panel_bibsdb_wall';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_bibsdb_wall_tid' => '217',
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'ba95363e-a4f9-4501-bde7-8a4bfc594d71';
    $display->content['new-ba95363e-a4f9-4501-bde7-8a4bfc594d71'] = $pane;
    $display->panels['main_content'][8] = 'new-ba95363e-a4f9-4501-bde7-8a4bfc594d71';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-88baaf0d-bddf-4649-9029-d84fec86a486';
  $handler->conf['display'] = $display;
  $export['node_view__bibsdb-new-materials'] = $handler;

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
    $pane->pid = 'new-67d349d8-2f4a-4bf6-b6b2-13b0602a594d';
    $pane->panel = 'main_content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => 'page-title',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '67d349d8-2f4a-4bf6-b6b2-13b0602a594d';
    $display->content['new-67d349d8-2f4a-4bf6-b6b2-13b0602a594d'] = $pane;
    $display->panels['main_content'][0] = 'new-67d349d8-2f4a-4bf6-b6b2-13b0602a594d';
    $pane = new stdClass();
    $pane->pid = 'new-c1b6116b-dc3c-44bd-a4fc-f76065db8d96';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_lead';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c1b6116b-dc3c-44bd-a4fc-f76065db8d96';
    $display->content['new-c1b6116b-dc3c-44bd-a4fc-f76065db8d96'] = $pane;
    $display->panels['main_content'][1] = 'new-c1b6116b-dc3c-44bd-a4fc-f76065db8d96';
    $pane = new stdClass();
    $pane->pid = 'new-632d3fa2-eec4-4615-975c-2de665636e64';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '632d3fa2-eec4-4615-975c-2de665636e64';
    $display->content['new-632d3fa2-eec4-4615-975c-2de665636e64'] = $pane;
    $display->panels['main_content'][2] = 'new-632d3fa2-eec4-4615-975c-2de665636e64';
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
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a306f5ac-ebc1-4c6a-82b2-77552c6666b4';
    $display->content['new-a306f5ac-ebc1-4c6a-82b2-77552c6666b4'] = $pane;
    $display->panels['main_content'][3] = 'new-a306f5ac-ebc1-4c6a-82b2-77552c6666b4';
    $pane = new stdClass();
    $pane->pid = 'new-8a2f2fd9-3f7a-466a-bc79-93b68a9f96a2';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8a2f2fd9-3f7a-466a-bc79-93b68a9f96a2';
    $display->content['new-8a2f2fd9-3f7a-466a-bc79-93b68a9f96a2'] = $pane;
    $display->panels['main_content'][4] = 'new-8a2f2fd9-3f7a-466a-bc79-93b68a9f96a2';
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
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '3ab3d3c1-e8a8-4c80-980c-7172ae380d7b';
    $display->content['new-3ab3d3c1-e8a8-4c80-980c-7172ae380d7b'] = $pane;
    $display->panels['main_content'][5] = 'new-3ab3d3c1-e8a8-4c80-980c-7172ae380d7b';
    $pane = new stdClass();
    $pane->pid = 'new-ff271351-8d26-4033-898c-0e3c7f3abd3c';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'ff271351-8d26-4033-898c-0e3c7f3abd3c';
    $display->content['new-ff271351-8d26-4033-898c-0e3c7f3abd3c'] = $pane;
    $display->panels['main_content'][6] = 'new-ff271351-8d26-4033-898c-0e3c7f3abd3c';
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
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'fef4076b-159f-44f0-8c35-d2c31ecdf47b';
    $display->content['new-fef4076b-159f-44f0-8c35-d2c31ecdf47b'] = $pane;
    $display->panels['main_content'][7] = 'new-fef4076b-159f-44f0-8c35-d2c31ecdf47b';
    $pane = new stdClass();
    $pane->pid = 'new-9c247d07-a07d-422d-a0a8-d9a3c320abf2';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_body';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '9c247d07-a07d-422d-a0a8-d9a3c320abf2';
    $display->content['new-9c247d07-a07d-422d-a0a8-d9a3c320abf2'] = $pane;
    $display->panels['main_content'][8] = 'new-9c247d07-a07d-422d-a0a8-d9a3c320abf2';
    $pane = new stdClass();
    $pane->pid = 'new-a2fd3b6e-754a-476f-8770-b272d29bf189';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'a2fd3b6e-754a-476f-8770-b272d29bf189';
    $display->content['new-a2fd3b6e-754a-476f-8770-b272d29bf189'] = $pane;
    $display->panels['main_content'][9] = 'new-a2fd3b6e-754a-476f-8770-b272d29bf189';
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
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '2169468b-2ec5-45ff-9963-645da7ccbdc1';
    $display->content['new-2169468b-2ec5-45ff-9963-645da7ccbdc1'] = $pane;
    $display->panels['main_content'][10] = 'new-2169468b-2ec5-45ff-9963-645da7ccbdc1';
    $pane = new stdClass();
    $pane->pid = 'new-b08f5f9b-22a2-4527-8aa7-5191be56d4e3';
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'b08f5f9b-22a2-4527-8aa7-5191be56d4e3';
    $display->content['new-b08f5f9b-22a2-4527-8aa7-5191be56d4e3'] = $pane;
    $display->panels['main_content'][11] = 'new-b08f5f9b-22a2-4527-8aa7-5191be56d4e3';
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
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '393f6a41-9296-498f-9542-7a7e94361e89';
    $display->content['new-393f6a41-9296-498f-9542-7a7e94361e89'] = $pane;
    $display->panels['main_content'][12] = 'new-393f6a41-9296-498f-9542-7a7e94361e89';
    $pane = new stdClass();
    $pane->pid = 'new-be3678af-1f77-4e75-add8-1a0c669c502a';
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
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = 'be3678af-1f77-4e75-add8-1a0c669c502a';
    $display->content['new-be3678af-1f77-4e75-add8-1a0c669c502a'] = $pane;
    $display->panels['main_content'][13] = 'new-be3678af-1f77-4e75-add8-1a0c669c502a';
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
      'css_class' => 'wall',
    );
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '0c23accc-fd15-45a6-8496-a72981328862';
    $display->content['new-0c23accc-fd15-45a6-8496-a72981328862'] = $pane;
    $display->panels['main_content'][14] = 'new-0c23accc-fd15-45a6-8496-a72981328862';
    $pane = new stdClass();
    $pane->pid = 'new-6c8ad5b8-02e2-4261-92fe-30c745f56c0e';
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
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = '6c8ad5b8-02e2-4261-92fe-30c745f56c0e';
    $display->content['new-6c8ad5b8-02e2-4261-92fe-30c745f56c0e'] = $pane;
    $display->panels['main_content'][15] = 'new-6c8ad5b8-02e2-4261-92fe-30c745f56c0e';
    $pane = new stdClass();
    $pane->pid = 'new-f157bf13-9682-4c24-827a-c5b54bbef026';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_title_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'cs_adaptive_image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'styles' => array(
          'breakpoint_1' => '768',
          'style_1' => 'ding_panorama_primary_medium',
          'breakpoint_2' => '500',
          'style_2' => 'ding_panorama_primary_small',
          'max_style' => 'ding_panorama_primary_medium',
          'fallback_style' => 'ding_panorama_primary_medium',
        ),
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = 'f157bf13-9682-4c24-827a-c5b54bbef026';
    $display->content['new-f157bf13-9682-4c24-827a-c5b54bbef026'] = $pane;
    $display->panels['main_content'][16] = 'new-f157bf13-9682-4c24-827a-c5b54bbef026';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__bibsdb-page'] = $handler;

  return $export;
}
