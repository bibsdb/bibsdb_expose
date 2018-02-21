<?php

function bibsdb_expose_vbo_expose_form($settings, &$form_state) {
  // Load brick type vocabulary
  $vocabulary = taxonomy_vocabulary_machine_name_load('bibsdb_brick_type');
  $tree = taxonomy_get_tree($vocabulary->vid, $parent = 0, $max_depth = 1, $load_entities = FALSE);

   // Filter bricks to match wall
  $view = $settings['view'];
  $wall = $view->args[0];
  $wall_term = taxonomy_term_load($wall);
  $wall_name = $wall_term->name;
  $wall_name_elements = explode('-', $wall_name);


  // Build select
  $brick_type_options = array();
  foreach ($tree as $term) {
    $term_name_elements = explode('-', $term->name);
    // Only display the bricks that are allowed on this wall
    if (!(empty(array_intersect($wall_name_elements, $term_name_elements )))) {
      // Remove first p-tag so that title stands on same line as radio button
      $term_description = preg_replace('~<p>(.*?)</p>~is', '$1', $term->description, /* limit */ 1);
      $brick_type_options[$term->tid] = $term_description;
    }
  }


   // Build form
  $form = array();
  $form['brick_type'] = array(
    '#type' => 'radios', 
    '#title' => t('Choose brick type'),
    '#options' => $brick_type_options,
    '#required' => TRUE,
    );


  // Add redirect back to wall
  $view = $settings['view'];
  $wall = $view->args[0];

  return $form;
}

function bibsdb_expose_vbo_expose_submit($form, $form_state) {

  $return = array(); 
  $return['brick_type'] = $form_state['values']['brick_type'];
  return $return; //Note, return value here must be an array.
}

/**
 * VBO action that creates an exposure entity.
 */
function bibsdb_expose_vbo_expose(&$node, $context) {

  $wall = $context['view_info']['arguments']['0'];
  $brick_type = $context['brick_type'];
  $brick_content = $node->nid;
  $hosting_node = $context['view_info']['arguments']['1'];


  $entity_type = 'exposure';
  $entity = entity_create($entity_type, array('bundle' => $entity_type));
  $wrapper = entity_metadata_wrapper($entity_type, $entity);
  
  $wrapper->field_bibsdb_wall = $wall;
  $wrapper->field_bibsdb_brick_type = $brick_type;
  $wrapper->field_bibsdb_brick_content = $brick_content;
  $wrapper->field_bibsdb_hosting_node = $hosting_node;
  $wrapper->save();

  // Clear containing page in page cache 
  $url = url($context['view_info']['exposed_input']['destination'], array('absolute' => TRUE));
  cache_clear_all($url, 'cache_page', TRUE);
}

function bibsdb_expose_vbo_change_brick_type_form($settings, &$form_state) {
  // Load brick type vocabulary
  $vocabulary = taxonomy_vocabulary_machine_name_load('bibsdb_brick_type');
  $tree = taxonomy_get_tree($vocabulary->vid, $parent = 0, $max_depth = 1, $load_entities = FALSE);

  // Filter bricks to match wall
  $view = $settings['view'];
  $wall = $view->args[0];
  $wall_term = taxonomy_term_load($wall);
  $wall_name = $wall_term->name;
  $wall_name_elements = explode('-', $wall_name);

  // Build select
  $brick_type_options = array();
  foreach ($tree as $term) {
    $term_name_elements = explode('-', $term->name);
    // Only display the bricks that are allowed on this wall
    //if (!(empty(array_intersect($wall_name_elements, $term_name_elements )))) {
      // Remove first p-tag so that title stands on same line as radio button
      $term_description = preg_replace('~<p>(.*?)</p>~is', '$1', $term->description, /* limit */ 1);
      $brick_type_options[$term->tid] = $term_description;
    //}
  }

  // Build form
  $form = array();
  $form['brick_type'] = array(
    '#type' => 'radios', 
    '#title' => t('Choose brick type'),
    '#options' => $brick_type_options,
    '#required' => TRUE,
    );

  // Add redirect to return to 
  $view = $settings['view'];
  $wall = $view->args[0];

  return $form;
}

function bibsdb_expose_vbo_change_brick_type_submit($form, $form_state) {

  $return = array(); 
  $return['brick_type'] = $form_state['values']['brick_type'];
  return $return; //Note, return value here must be an array.
}

/**
 * VBO action that changes the brick type.
 */
function bibsdb_expose_vbo_change_brick_type(&$exposure, $context) {
	// Get value from form
	$brick_type = $context['brick_type'];

	// Modify exposure
	$entity_type = 'exposure';
	$wrapper = entity_metadata_wrapper($entity_type, $exposure);
	$wrapper->field_bibsdb_brick_type = $brick_type;
	$wrapper->save();

  // Clear containing page in page cache 
  $url = url($context['view_info']['exposed_input']['destination'], array('absolute' => TRUE));
  cache_clear_all($url, 'cache_page', TRUE);
}


/**
 * VBO action that deletes the brick.
 */
function bibsdb_expose_vbo_unexpose(&$exposure, $context) {

  // Delete exposure
  $entity_type = 'exposure';
  $wrapper = entity_metadata_wrapper($entity_type, $exposure);
  entity_delete($entity_type, $wrapper->getIdentifier());


  // Clear containing page in page cache 
  $url = url($context['view_info']['exposed_input']['destination'], array('absolute' => TRUE));
  cache_clear_all($url, 'cache_page', TRUE);
}


