<?php
/**
 * @file
 * bibsdb_masonry.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bibsdb_masonry_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function bibsdb_masonry_image_default_styles() {
  $styles = array();

  // Exported image style: bibsdb_masonry_large.
  $styles['bibsdb_masonry_large'] = array(
    'name' => 'bibsdb_masonry_large',
    'label' => 'bibsdb_masonry_large',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 540,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
