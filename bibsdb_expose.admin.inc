<?php

/**
 * Node add/edit form changes
 */

function bibsdb_expose_preprocess_html(&$variables) {
// Add conditional stylesheets for admin pages on admin theme.
  if (arg(0)=="admin") {
    // reference your own stylesheet    
    drupal_add_css(drupal_get_path('module', 'bibsdb_expose') . '/css/bibsdb_expose.admin.css', array('weight' => CSS_THEME));
    //drupal_add_js(drupal_get_path('module', 'bibsdb_expose') . '/scripts/bibsdb_expose.admin.js');
  }
}

/**
 * Implements hook_image_styles_alter().
 * Change thumbnail image style so it doesn't crop. 
 * We need to see the non-cropped image in node edit forms.
 * Todo: this method also affects the display when you choose a file from media library.
 * It would be nice to find a solution where media library browsing isn't affected. 
 * 
 * @param $styles
 */
function bibsdb_expose_image_styles_alter(&$styles) {

  if (function_exists('image_image_effect_info')) {
	  // Init the effect data.
   $effects = image_image_effect_info();
   $scale_effect = $effects['image_scale'];
   $scale_effect['data'] = array();
   $scale_effect['weight'] = 0;

	  // Store styles data.
   $styles_data = array(
     'media_thumbnail' => array(
       'width' => 180,
       ),
     );

   foreach ($styles_data as $style_name => $data) {
	    // Check that we only affect a default style.
     if ($styles[$style_name]['storage'] == IMAGE_STORAGE_DEFAULT) {
       $scale_effect['data'] = $data;
       $styles[$style_name]['effects'] = array();
       $styles[$style_name]['effects'][] = $scale_effect;
     }
   }
 }
}


 /*
 * Public: Implements hook_form_FORM_ID_alter.
 *
 */
 function bibsdb_expose_form_node_form_alter(&$form, $form_state) {

  $type = $form['#node']->type;

  // MOVE PUBLISHING OPTIONS TO THE TOP OF THE VERTICAL TABS
  $form['options']['#weight'] = 0;

  // FACT BOX

	// Move bibsdb_fact_box_title and bibsdb_fact_box_body into group_ding_news_content
  if(isset($form['field_bibsdb_fact_box_title'])) {
    $form['#group_children']['field_bibsdb_fact_box_title'] = 'group_bibsdb_fact_box';
  }

  if(isset($form['field_bibsdb_fact_box_body'])) {
    $form['#group_children']['field_bibsdb_fact_box_body'] = 'group_bibsdb_fact_box';
  }

  
  if(isset($form['#groups']['group_bibsdb_fact_box'])) {
    // Set fact box group weight
    $form['#groups']['group_bibsdb_fact_box']->weight = 7;

    // Set fact box group label
    $form['#groups']['group_bibsdb_fact_box']->label = 'Fakta boks';

    // Move group group_bibsdb_fact_box into group_ding_news_content
    $form['#group_children']['group_bibsdb_fact_box'] = 'group_ding_news_content';
  }

	// On ding_news hide some fields
  if ($type == 'ding_news') {
    $form['og_group_ref']['#access'] = FALSE;
    $form['field_ding_news_tags']['#access'] = FALSE;
    $form['field_bpi_workflow']['#access'] = FALSE;
  }  
}