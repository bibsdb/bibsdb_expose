<?php





/*
 * Implements hook_preprocess_ting_search_context_content.
 *
 * Before displaying the nodes in the carousel prepend ding_search_context_link-titles with title tag.
 */
function bibsdb_expose_preprocess_ting_search_context_content(&$vars) {

  // TITLE TAG
  $node = $vars['node'];

  if ($node->type == 'ding_search_context_link') {
    $wrapper = entity_metadata_wrapper('node', $node);
    $tag = $wrapper->field_bibsdb_tag->value();
    if (isset($tag)) {
      $vars['title'] = $tag . ": " . $node->title;
    }
  }
}



