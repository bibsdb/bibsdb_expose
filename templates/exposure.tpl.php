<?php
/**
 * @file
 * Theme implementation for displaying a single exposure.
 *
 *
 * @see template_preprocess()
 * @see template_preprocess_search_result()
 * @see template_process()
 */
?>
<div class="<?php print render($content['classes']); ?>">

<?php
foreach ( $content['fields'] as $field ) {
  print render($field);
}
?>

</div>
