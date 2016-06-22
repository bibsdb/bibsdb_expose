<?php

/**
* Implements hook_field_formatter_info().text_long
*/
function bibsdb_expose_field_formatter_info() {
  $info = array(
    'bibsdb_term_field_formatter' => array(
      'label' => t('Display term decription'), 
      'field types' => array('taxonomy_term_reference'),
      'description' => t('Display the term description instead of the term name.'),
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
* Theme function for the bibsdb_cdata field formatter.
*/
function theme_bibsdb_expose_bibsdb_term_field_formatter($items) {
  
  $tid = $items[0]['tid'];
  $term = taxonomy_term_load($tid);
  // Strip img tag and other tags away
  $term_description = strip_tags($term->description);
  $brick_type_options[$term->tid] = $term_description;
  
  return $term_description;
}

