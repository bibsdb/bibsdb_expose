<?php
/**
 * Implements default preprocess function for node.
 */
function bibsdb_expose_preprocess_node(&$vars, $hook) {

  if ($variables['exposure']) {
    // looks for node--exposure.tpl.php in your theme directory
    $variables['theme_hook_suggestion'] = 'node__exposure';
  }
}
	
