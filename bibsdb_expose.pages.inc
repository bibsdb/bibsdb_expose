<?php

/**
 * @file
 * Theme functions used with the ting search context.
 */

/**
 * Callback function for displaying the individual exposure page
 */
function bibsdb_expose_view_exposure($id) {
  //Load the exposure entity
  $exposures = entity_load('exposure', array($id));
  $exposure = $exposures[$id];
  //drupal_set_title($exposure->id);
  $output = entity_view('exposure', array($exposure));
  //$exposure_wrapper = entity_metadata_wrapper('exposure', $exposure);

  //Load the linked node
  //$node_wrapper = $exposure_wrapper->field_bibsdb_brick_content;
  //$node = $node_wrapper->value();
  //$output = node_view($node);

  return $output;
  
}

/**
 * Callback function for our exposure entities test path
 */
function bibsdb_expose_exposures() {
  
  
  $exposures = entity_load('exposure', array(1, 2, 3));
  
  // Saving new entities 
  if (!isset($exposures[3])) {
    $entity = entity_create('exposure', array('id' => 3));
    //$entity->name = t('Spring House');
    //$entity->description = t('Some more lipsum.');
    //$entity->deadline = '1397501132';
    $entity->save();
  }
  
  // Listing entities
  $list = entity_view('exposure', $exposures);
  
  $output = array();
  foreach ($list['exposure'] as $exposure) {
    $output[] = drupal_render($exposure);
  }
  
  return implode($output);

}