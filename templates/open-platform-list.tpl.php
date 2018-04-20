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




<div class="open-platform-list" id="<?php print $nid; ?>">
<!-- empty elements, only used for element sizing -->
  <div class="colwidth"></div>
  <div class="gutterwidth"></div>

	<?php foreach ($items as $delta => $item) : ?>
		<?php print render($item); ?>
	<?php endforeach; ?>
</div>
  

