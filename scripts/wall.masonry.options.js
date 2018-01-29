

(function($) {
  'use strict';

  $(document).ready(function() {
    var $boxes = $('.brick');
    $boxes.hide();

    var $container = $('.masonry');
    $container.imagesLoaded( function() {
      $boxes.fadeIn();

      $container.masonry({
        itemSelector: '.brick',
        columnwidth : '.colwidth',
        gutter: '.gutterwidth',
      });    
    });
  });
})(jQuery);