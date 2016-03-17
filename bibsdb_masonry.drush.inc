<?php

/**
 * Implements hook_drush_command().
 */
function bibsdb_masonry_drush_command() {

  $items['bibsdb_expire_events'] = array(
    'description' => 'Unpublish past events.',
    'aliases' => array('bibsdb_ee'),
  );

  return $items;
}

/**
 * Callback for the drush bibsdb_expire_events command
 */
function drush_bibsdb_masonry_bibsdb_expire_events() {
	$now = format_date(time(), 'custom', 'Y-m-d H:i:s');

  $query = new EntityFieldQuery();

  // Find event-nodes where end-date is before now
	$query->entityCondition('entity_type', 'node')
	  ->entityCondition('bundle', 'ding_event')
	  ->propertyCondition('status', NODE_PUBLISHED)
	  ->fieldCondition('field_ding_event_date', 'value2', $now, '<');

	$result = $query->execute();

	if (!empty($result['node'])) {
	  $nids = array_keys($result['node']);

	 // Loop nodes and unpublish
	 foreach ($nids as $nid) {
	    $node = node_load($nid, NULL, TRUE);
	    $node->status = NODE_UNPUBLISHED;
	    node_save($node);
	  }
	}
}


