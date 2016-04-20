<?php


/*
 * Implements hook_node_prepare.
 * Act on a node object about to be shown on the add/edit form.
 * Strip titletag from title. Applies to news and new_materails.
 */
function bibsdb_expose_node_prepare($node) {
  if($node->type == 'ding_news' || $node->type == 'new_materials') {

    $wrapper = entity_metadata_wrapper('node', $node);

    // TITLE TAG
    $title = $wrapper->label();

    //Strip text in front of colon so it doesn't exist in the edit form
    $arr = explode(": ", $title);
    $title_contains_colon = strpos($title, ":");

    // Returns position (0 to count-1) if found - returns FALSE if not found
    if (!($title_contains_colon === FALSE)) {
      array_shift($arr);
      $title = implode($arr, ": ");
    }

    $node->title = $title;
  }
}


/*
 * Implements hook_preprocess_ting_search_context_content.
 *
 * Before displaying the nodes in the carousel prepend event-titles with title tag.
 * Only needed for event-type because tag is already contained in titles of news and new materials.
 */
function bibsdb_expose_preprocess_ting_search_context_content(&$vars) {

  // TITLE TAG
  $node = $vars['node'];

  if ($node->type == 'ding_event') {
    $wrapper = entity_metadata_wrapper('node', $node);
    $tag = $wrapper->field_bibsdb_tag->value();
    if (isset($tag)) {
      $vars['title'] = $tag . ": " . $node->title;
    }
  }
}