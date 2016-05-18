<?php



/**
 * Create a new list image if an backgroundimage is provided. 
 * Use the given list image as the foreground in a new generated list image.
 * Only applies to news content type.
 * 
 * @param $node
 */

function _create_background_image(&$node) {
  // Make entity matadata wrappers for node being saved and the original node
  $wrapper = entity_metadata_wrapper('node', $node);
  $wrapper_original = entity_metadata_wrapper('node', $node->original);

  // Load field values of node being saved into variables
  $list_image = $wrapper->field_ding_news_list_image->value();
  $background_image = $wrapper->field_bibsdb_background_image->value();
  $background_image_xpos = $wrapper->field_bibsdb_bgimg_xpos->value();
  $background_image_ypos = $wrapper->field_bibsdb_bgimg_ypos->value();
  $list_image_height = $wrapper->field_bibsdb_listimg_height->value();
  $list_image_width = $wrapper->field_bibsdb_listimg_width->value();
  $vanilla_list_image = $wrapper->field_bibsdb_vanilla_list_image->value();

  // Continue if we have files attached to list_image and background_image
  if (isset($background_image) && isset($list_image)) {

    // If $vanilla_list_image is set we have an original node (edit)
    // If a new list image has been uploaded replace image in field_bibsdb_vanilla_list_image
    if (isset($vanilla_list_image)) {
      $list_image_original = $wrapper_original->field_ding_news_list_image->value();
      if (!($list_image_original[fid] == $list_image[fid])) {
        $file = file_load($list_image[fid]);
        $wrapper->field_bibsdb_vanilla_list_image->file->set($file);
      }
    }
    // If field_bibsdb_vanilla_list_image isn't set (add) save the fid of the current list image
    else {
      $file = file_load($list_image[fid]);
      $wrapper->field_bibsdb_vanilla_list_image->file->set($file);
    }

    $vanilla_list_image = $wrapper->field_bibsdb_vanilla_list_image->value();

    // Load list image object 
    $list_image_file = file_load($vanilla_list_image[fid]);
    $list_image_file_uri = $list_image_file->uri;
    $list_image_object = image_load($list_image_file_uri);

        //Load background image file of node being saved
    $background_image_file = file_load($background_image[fid]);
    $background_image_file_uri = $background_image_file->uri;

        // $node->original exists on node/edit - not on node/add
    if ($node->original) {

          // Load field values from the original node 
      $vanilla_list_image_original = $wrapper_original->field_bibsdb_vanilla_list_image->value();
      $background_image_original = $wrapper_original->field_bibsdb_background_image->value();
      $background_image_xpos_original = $wrapper_original->field_bibsdb_bgimg_xpos->value();
      $background_image_ypos_original = $wrapper_original->field_bibsdb_bgimg_ypos->value();

          // If none of the images or xpos or ypos have been tinked with exit here
      if (($background_image_original[fid] == $background_image[fid]) 
        && ($vanilla_list_image_original[fid] == $vanilla_list_image[fid]) 
        && ($background_image_xpos_original == $background_image_xpos) 
        && ($background_image_ypos_original == $background_image_ypos)) 
      {
        return;
      }
    }

        // LET THE IMAGE BUILDING BEGIN

        //Load background image file and do a scale and crop
    $background_image_file = file_load($background_image[fid]);
    $background_image_file_uri = $background_image_file->uri;
    $background_image_object = image_load($background_image_file_uri);
    image_scale_and_crop($background_image_object, 540, 405);
    image_save($background_image_object, $background_image_file_uri);

        // Load and modify image style
    $image_style = image_style_load('bibsdb_expose_large_bg', NULL, NULL);        

        // TODO This will break if additional effects are added that have identical keys in their data options
    $settings = array($background_image_file_uri, $background_image_xpos, $background_image_ypos, $list_image_height, $list_image_width);

    array_walk_recursive($image_style, function(&$item, $key, $settings){
      switch ($key) {
        case 'path':
        $item = $settings[0];
        break;
        case 'xpos':
        $item = $settings[1];
        break;
        case 'ypos':
        $item = $settings[2];
        break;
        case 'height':
        $item = $settings[3];
        break;
        case 'width':
        $item = $settings[4];
        break;
      }
    }, $settings);


        // Create uri for derived image by adding a subfolder to list image path e.g. public://list_image/news/img_with_underlay/124587/define_logo2.jpg
    $underlay_image_file_uri = "public://list_image/news/img_with_underlay/" . rand (10000, 30000) . $list_image_file->filename;

        // Create derived image and save on disk
    image_style_create_derivative($image_style, $list_image_file_uri, $underlay_image_file_uri);

        // Load derived image and save it as a drupal managed file
    $underlay_image_file_path = drupal_realpath($underlay_image_file_uri);
    $derivative_image_file = file_save_data(file_get_contents($underlay_image_file_path), $underlay_image_file_uri, FILE_EXISTS_REPLACE);

        // Then attach to node
    $wrapper->field_ding_news_list_image->file->set($derivative_image_file);    
  }
}