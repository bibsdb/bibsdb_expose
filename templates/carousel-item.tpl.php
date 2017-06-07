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
	<a href="<?php print $objecturl;?>" style="background-image: url(https:<?php print $content->coverUrlFull[0];?>)">
		<div class="item-container">
			<div class="item-title"><?php print $content->title[0];?></div>
			<div class="item-author"><?php print $content->creator[0];?></div>
		</div>
	</a>
</div>

