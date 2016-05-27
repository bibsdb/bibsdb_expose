(function($) {
  'use strict';

 /**
  * Remove panel pane padding on empty walls
  */
  function empty_wall() {
    //Attach class if wall is empty
    $(".pane-bibsdb-wall-panel-bibsdb-wall").has(".view-bibsdb-wall.empty").addClass("nocontent");

    // Attach class if an editor is logged in
    $(".default-layout").has(".contextual-links-region .view-bibsdb-wall").addClass("editormode");
    $(".pane-bibsdb-wall-panel-bibsdb-wall").has(".contextual-links-region .view-bibsdb-wall").addClass("editormode");

    // Attach class to default layout if wall0 (rigth column wall) is empty
    $(".default-layout").has(".wall0.nocontent").addClass("empty-wall0");
  }


  // When ready start the magic.
  $(document).ready(function () {
    empty_wall();
  });

})(jQuery);