<?php

/**
 * Implements hook_drush_command().
 */
function bibsdb_expose_drush_command() {

	$items['bibsdb_empty_new_materials_cache'] = array(
		'description' => 'Empty new materials cache.',
		);

	$items['bibsdb_update_new_materials'] = array(
		'description' => 'Update cached new materials content.',
		);

	return $items;
}

/**
 * Callback for the drush bibsdb_empty_new_materials_cache command
 */
function drush_bibsdb_expose_bibsdb_empty_new_materials_cache() {
	cache_clear_all("new_materials_search_", "cache", $wildcard = TRUE);
}


/**
 * Callback for the drush bibsdb_empty_new_materials_cache command
 */
function drush_bibsdb_expose_bibsdb_update_new_materials() {

		// Find all published new_materials nodes that is to show in cover mode
	$query = new EntityFieldQuery;
	$query->entityCondition('entity_type', 'node')
	->entityCondition('bundle', 'new_materials')
	->propertyCondition('status', NODE_PUBLISHED)
	->fieldCondition('field_ting_new_materials_covers', 'value', 1, '=');

	$result = $query->execute();


	if (!empty($result['node'])) {
		
		$nids = array_keys($result['node']);

		// Loop nids
		foreach ($nids as $nid) {

			$content = array();

			// Clear the cache for this nid
			cache_clear_all("new_materials_search_".$nid, "cache", $wildcard = TRUE);

			// Set cache to empty array initially
			cache_set('new_materials_search_'.$nid, array(), 'cache', CACHE_PERMANENT);
			$cache = cache_get('new_materials_search_'.$nid, 'cache');

			// Fetch content until we have at least 200 cached items
			while (isset($cache->data) AND sizeof($cache->data) < 200) {
				$slice = _bibsdb_expose_open_platform_new_materials_search($nid, sizeof($cache->data));

				if(sizeof($slice) == 0) {
					break;
				}
				$cache = cache_get('new_materials_search_'.$nid, 'cache');
			}
			print("Cache length: ".sizeof($cache->data)." ");
			print("Nid: ".$nid." ");
			$node = node_load($nid);
			print("Title: ".$node->title."\n");

		}
	}
}

