<?php





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

function _strip_tag_from_title(&$node) {
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

function _add_tag_to_title(&$node) {
  $wrapper = entity_metadata_wrapper('node', $node);

  $tag = $wrapper->field_bibsdb_tag->value();
  $title = $wrapper->label();

    // Append tag if it has a value 
  if (!(empty($tag))) {
    $node->title = $tag . ": " . $title;
  }
  else {
    $node->title = $title;
  }
}

