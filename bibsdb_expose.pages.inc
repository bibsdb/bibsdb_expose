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
	$output = entity_view('exposure', array($exposure));

	return $output;

}

/**
 * Callback function for our exposure entities
 */
function bibsdb_expose_exposures() {

	return "Exposure administration";

}


/**
 * AJAX callback to retrieve content from the open platform.
 */
function bibsdb_expose_bibsdb_open_platform_query() {
	$nid = $_POST['nid'];
	$offset = (int) $_POST['offset'];

	$output = _bibsdb_expose_open_platform_new_materials_search($nid, $offset);

	return drupal_json_output($output);
}