(function($) {
  'use strict';

  /**
   * Black overlay with lead on mouse hover
   */
  Drupal.behaviors.hover_show_lead = {
    attach: function(context, settings) {
      var text_element_height;
      $('.brick', context).mouseenter(function() {
        if(!ddbasic.breakpoint.is('mobile')) {
          text_element_height = $(this).outerHeight() - $(this).find('.wrapper').outerHeight();
          $(this).find('.lead').height(text_element_height);
        }
      });
      $('.brick', context).mouseleave(function() {
        if(!ddbasic.breakpoint.is('mobile')) {
          $(this).find('.lead').height(0);
        }
      });
    }
  };


   /**
   * Add classes
   */
  Drupal.behaviors.add_classes = {
    attach: function(context, settings) {
      //Attach class if wall is empty
      $(".pane-bibsdb-wall-panel-bibsdb-wall").has(".view-bibsdb-wall.empty").addClass("nocontent");

      // Attach class if an editor is logged in
      $(".pane-bibsdb-wall-panel-bibsdb-wall").has(".contextual-links-region .view-bibsdb-wall").addClass("editormode");

      // Attach class to walls in primary_content if secondary_content (menu) is present
      $(".layout-wrapper").has(".secondary-content").find(".primary-content .view-bibsdb-wall").addClass("left-menu-visible");

    }
  };



 /**
  * Remove panel pane padding on empty walls
  */
  function empty_wall() {
    

    // Attach class if an editor is logged in
    $(".pane-bibsdb-wall-panel-bibsdb-wall").has(".contextual-links-region .view-bibsdb-wall").addClass("editormode");
  }

  // When ready start the magic.
  $(document).ready(function () {
    empty_wall();
  });

})(jQuery);