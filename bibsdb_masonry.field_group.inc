<?php
/**
 * @file
 * bibsdb_masonry.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bibsdb_masonry_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bibsdb_fact_box|node|ding_news|form';
  $field_group->group_name = 'group_bibsdb_fact_box';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bibsdb Fact Box',
    'weight' => '41',
    'children' => array(
      0 => 'field_bibsdb_fact_box_title',
      1 => 'field_bibsdb_fact_box_body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_bibsdb_fact_box|node|ding_news|form'] = $field_group;

  return $export;
}
