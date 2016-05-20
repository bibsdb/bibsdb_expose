<?php
/**
 * @file
 * bibsdb_expose.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bibsdb_expose_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_bibsdb_text_fragment';
  $strongarm->value = 0;
  $export['comment_anonymous_bibsdb_text_fragment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_bibsdb_text_fragment';
  $strongarm->value = '2';
  $export['comment_bibsdb_text_fragment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_bibsdb_text_fragment';
  $strongarm->value = 1;
  $export['comment_default_mode_bibsdb_text_fragment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_bibsdb_text_fragment';
  $strongarm->value = '50';
  $export['comment_default_per_page_bibsdb_text_fragment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_bibsdb_text_fragment';
  $strongarm->value = 1;
  $export['comment_form_location_bibsdb_text_fragment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_bibsdb_text_fragment';
  $strongarm->value = '1';
  $export['comment_preview_bibsdb_text_fragment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_bibsdb_text_fragment';
  $strongarm->value = 1;
  $export['comment_subject_field_bibsdb_text_fragment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__bibsdb_text_fragment';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__bibsdb_text_fragment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_bibsdb_text_fragment';
  $strongarm->value = '0';
  $export['language_content_type_bibsdb_text_fragment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_bibsdb_text_fragment';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_bibsdb_text_fragment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_bibsdb_text_fragment';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_bibsdb_text_fragment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_bibsdb_text_fragment';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_bibsdb_text_fragment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_bibsdb_text_fragment';
  $strongarm->value = '1';
  $export['node_preview_bibsdb_text_fragment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_bibsdb_text_fragment';
  $strongarm->value = 1;
  $export['node_submitted_bibsdb_text_fragment'] = $strongarm;

  return $export;
}
