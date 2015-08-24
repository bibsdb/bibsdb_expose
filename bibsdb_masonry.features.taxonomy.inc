<?php
/**
 * @file
 * bibsdb_masonry.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function bibsdb_masonry_taxonomy_default_vocabularies() {
  return array(
    'brick_types' => array(
      'name' => 'Brick Types',
      'machine_name' => 'brick_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
