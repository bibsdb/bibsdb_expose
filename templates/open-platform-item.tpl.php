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
<div class="open-platform-item">
	<a href="<?php print $content['ting_object_url'];?>" style="background-image: url(<?php print $content['local_cover_url'];?>)">
		<div class="item-container">
			<div class="item-title"><?php print $content['title'];?></div>
			<div class="item-author"><?php print $content['author'];?></div>
		</div>
	</a>
</div>

