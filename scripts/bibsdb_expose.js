(function($) {
  'use strict';

 /**
  * Remove panel pane padding on empty walls
  */
  function empty_wall() {
    //Attach class if wall is empty
    $(".pane-bibsdb-wall-panel-bibsdb-wall").has(".view-bibsdb-wall.empty").addClass("nocontent");

    // Attach class if an editor is logged in
    $(".pane-bibsdb-wall-panel-bibsdb-wall").has(".contextual-links-region .view-bibsdb-wall").addClass("editormode");

    // Attach class to default layout if wall0 (rigth column wall) is empty
    $(".default-layout").has(".wall0.nocontent").addClass("empty-wall0");
  }

  /**
  * Detect secondary content and append class, to have walls widths differ
  */
  function add_secondary_content_class() {

    $(".node-type-ding-page .default-layout").has(".secondary-content").find(".wall").addClass("seccontent").find("view-bibsdb-wall");
    $(".node-type-ding-group .default-layout").has(".secondary-content").find(".wall").addClass("seccontent");   

    $(".node-type-ding-page .default-layout").has(".secondary-content").find(".wall.right .view-bibsdb-wall").removeClass("col2 col3").addClass("col1");
    $(".node-type-ding-group .default-layout").has(".secondary-content").find(".wall.right .view-bibsdb-wall").removeClass("col2 col3").addClass("col1");
  
  }

  

  // When ready start the magic.
  $(document).ready(function () {
    empty_wall();
    add_secondary_content_class();
  });

})(jQuery);