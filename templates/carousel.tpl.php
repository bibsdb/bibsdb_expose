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




<div class="slick-carousel">
	<?php
	foreach ($content->data as $data) {
		print theme('carousel_item', array('content' => $data));
	}
	?>
</div>


