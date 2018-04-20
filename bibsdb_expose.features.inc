<?php
/**
 * @file
 * bibsdb_expose.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bibsdb_expose_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bibsdb_expose_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function bibsdb_expose_image_default_styles() {
  $styles = array();

  // Exported image style: bibsdb_expose_large.
  $styles['bibsdb_expose_large'] = array(
    'label' => 'bibsdb_expose_large',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 540,
          'height' => 405,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: bibsdb_expose_large_bg.
  $styles['bibsdb_expose_large_bg'] = array(
    'label' => 'bibsdb_expose_large_bg',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 300,
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
      1 => array(
        'name' => 'canvasactions_canvas2file',
        'data' => array(
          'xpos' => 300,
          'ypos' => 50,
          'alpha' => 100,
          'path' => 'public://list_image/event/hvalens_sang_13_februar.jpg',
          'dimensions' => 'background',
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}
