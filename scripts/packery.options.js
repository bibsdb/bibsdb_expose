

(function($) {
  'use strict';

  $(document).ready(function() {
    var $boxes = $('.brick');
    $boxes.hide();

    var $container = $('.packery');
    $container.imagesLoaded( function() {
      $boxes.fadeIn();

      $container.packery({
        itemSelector: '.brick',
        columnwidth : '.colwidth',
        gutter: '.gutterwidth',
      });    
    });
  });
})(jQuery);