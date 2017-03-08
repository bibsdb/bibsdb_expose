<?php
/**
 * @file
 * bibsdb_expose.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function bibsdb_expose_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Frontpage theme wall title';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'bibsdb_frontpage_themes_title';
  $fe_block_boxes->body = '<h2>Aktuelle temaer</h2>';

  $export['bibsdb_frontpage_themes_title'] = $fe_block_boxes;

  return $export;
}
