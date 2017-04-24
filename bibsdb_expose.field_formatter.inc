<?php

/**
* Implements hook_field_formatter_info().
*/
function bibsdb_expose_field_formatter_info() {
  $info = array(
    'bibsdb_term_field_formatter' => array(
      'label' => t('Display term decription'), 
      'field types' => array('taxonomy_term_reference'),
      'description' => t('Display the term description instead of the term name.'),
      ), 
    'bibsdb_wall_title_formatter' => array(
      'label' => t('Wall Title as H2'), 
      'field types' => array('text'),
      'description' => t('Wall title as H2.'),
      ), 
    'bibsdb_query_to_carousel_formatter' => array(
      'label' => t('Query to carousel'), 
      'field types' => array('text_long'),
      'description' => t('Query to carousel.'),
      ), 
    );
  return $info;
}

/**
 * Implements hook_field_formatter_view().
 * This code just passes straight through to a theme function.
 */
function bibsdb_expose_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {

  $elements = array();
  foreach ($items as $delta => $item) {
    $elements[$delta] = array(
      '#markup' => theme('bibsdb_expose_'. $display['type'], $items),
      );
  }

  return $elements;
}


/**
* Theme function for the bibsdb term field formatter.
*/
function theme_bibsdb_expose_bibsdb_term_field_formatter($items) {

  $tid = $items[0]['tid'];
  $term = taxonomy_term_load($tid);
  // Strip img tag and other tags away
  $term_description = strip_tags($term->description);
  $brick_type_options[$term->tid] = $term_description;
  
  return $term_description;
}

/**
* Theme function for the bibsdb wall title field formatter.
*/
function theme_bibsdb_expose_bibsdb_wall_title_formatter($items) {
  $title = $items[0]['safe_value'];
  $stripped_title = preg_replace('@[^a-z0-9-]+@','-', strtolower($title));
  return theme('html_tag', array(
    'element' => array(
      '#tag' => 'h2',
      '#value_prefix' => '<a name=\'' . $stripped_title . '\'></a>',
      '#value' => $title,
      ),
    ));
}

/**
* Theme function for the bibsdb query to carousel formatter.
*/
function theme_bibsdb_expose_bibsdb_query_to_carousel_formatter($items) {
  
  $query = $items[0]['safe_value'];
  $results = bibsdb_open_platform_search($query);
  $content = theme('carousel', array('content' => $results));

  return $content;
}

