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




<div class="open-platform-carousel" id="<?php print $nid; ?>">
<?php foreach ($items as $delta => $item) : ?>
	<?php print render($item); ?>
<?php endforeach; ?>
</div>
  

