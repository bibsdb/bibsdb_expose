(function($) {
  'use strict';

 /**
  * Remove panel pane padding on empty walls
  */
  function remove_padding_from_empty_wall() {
    //Attach menu classes
    $(".pane-bibsdb-wall-panel-bibsdb-wall").has(".view-bibsdb-wall.empty").addClass("nopadding");
  }


  // When ready start the magic.
  $(document).ready(function () {
    console.log("hej");
    remove_padding_from_empty_wall();
  });

})(jQuery);