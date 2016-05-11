<?php
/**
 * @file
 * bibsdb_expose.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function bibsdb_expose_taxonomy_default_vocabularies() {
  return array(
    'bibsdb_brick_type' => array(
      'name' => 'Bricks',
      'machine_name' => 'bibsdb_brick_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'bibsdb_wall' => array(
      'name' => 'Wall',
      'machine_name' => 'bibsdb_wall',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
