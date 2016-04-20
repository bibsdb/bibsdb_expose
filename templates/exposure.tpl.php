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

<?php print render($content['tag']); ?>
<?php print render($content['title']); ?>
<?php print render($content['img']); ?>
<?php print render($content['lead']); ?>