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
    'name' => 'bibsdb_expose_large',
    'label' => 'bibsdb_expose_large',
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
          'height' => 405,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: bibsdb_expose_large_bg.
  $styles['bibsdb_expose_large_bg'] = array(
    'name' => 'bibsdb_expose_large_bg',
    'label' => 'bibsdb_expose_large_bg',
    'effects' => array(
      7 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 300,
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
      1 => array(
        'label' => 'Underlay (background)',
        'help' => 'Choose the file image you wish to use as an background, and position the processed image on it.',
        'effect callback' => 'canvasactions_canvas2file_effect',
        'dimensions callback' => 'canvasactions_canvas2file_dimensions',
        'form callback' => 'canvasactions_canvas2file_form',
        'summary theme' => 'canvasactions_canvas2file_summary',
        'module' => 'imagecache_canvasactions',
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

/**
 * Implements hook_node_info().
 */
function bibsdb_expose_node_info() {
  $items = array(
    'bibsdb_text_fragment' => array(
      'name' => t('Text Fragment'),
      'base' => 'node_content',
      'description' => t('Wall-glue. A heading or a text-snippet that can be displayed on a wall. Isn\'t searchable and has no value as a standalone content element.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
