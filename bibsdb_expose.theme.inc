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

/**
  * Generic preprosses that make specific preproccess below work
  */
function bibsdb_expose_preprocess_views_view(&$vars) {
  if (isset($vars['view']->name)) {
    $function = __FUNCTION__ . '__' . $vars['view']->name;
   
    if (function_exists($function)) {
     $function($vars);
    }
  }
}

/**
  * Add wall maxwidth as class to view
  */
function bibsdb_expose_preprocess_views_view__bibsdb_wall(&$vars) {

  // Add JavaScript and CSS using wrapper functions.
  _bibsdb_expose_add_javascript();
  _bibsdb_expose_add_css();

   // Extract wall classes from wall taxonomy term name
  $wall_id = $vars['view']->args[0];
  $term_wrapper = entity_metadata_wrapper('taxonomy_term', taxonomy_term_load($wall_id));
  $term_name = $term_wrapper->name->value();
  
  $term_name_elements = explode('-', $term_name);

  $class_name_elements = array_intersect($term_name_elements, array("1COL", "2COL", "3COL"));

  // Modify the col number so it doesn't start with a number
  foreach ($class_name_elements as $value) {
    $colclass = "col" . $value[0];
    array_push($vars['classes_array'], $colclass);
  }

  array_push($vars['classes_array'], "packery");

  // If there are no rows hide the wall
  if (empty($vars['rows'])) {
    array_push($vars['classes_array'], 'empty');
    $vars['rows'] .= "<div class=\"brick\"><div class=\"container\">Empty view</div></div>";
  }

  // Add gutter and col spacer divs
  $vars['rows'] .= "<div class=\"colwidth\"></div>";
  $vars['rows'] .= "<div class=\"gutterwidth\"></div>";
}


	
