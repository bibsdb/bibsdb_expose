
(function($) {
	'use strict';

	var BibsdbQueryCarousel = (function() {

		 /**
     * Private: Makes an ajax call to the server to get new content for the
     * carousel. The query node nid and the offset is sent along with the ajax request.
     */
     function _fetch_on_edge_hit() {
     	var item_count = $('.slick-carousel > div').length - 1;

     	// Detect edge hit
     	$('.slick-carousel').on('afterChange', function(event, slick, currentSlide){
     		if( item_count == currentSlide ){
     			console.log("Fetch");
     		}
     	});
     }

		/**
     * Private: Control visibility of prev arrow.
     */
     function _control_prev_arrow() {

			// Hide prev-arrow on load
			$('.slick-prev').hide();

			// Attach afterChange event-handler to detect if carousel is back at beginning
			$('.slick-carousel').on('afterChange', function(event, slick, currentSlide){
				if (currentSlide) {
					$('.slick-prev').show();
				}
				else {
					$('.slick-prev').hide();
				}
				
				console.log(currentSlide);
				console.log(Drupal.settings.bibsdb_expose_query);
			});
		}

		/**
     * Public: Init the carousel.
     */
     function init() {
	    // Init the slick carousel
	    $('.slick-carousel').slick({
	    	infinite: false,
	    	slidesToShow: 5,
	    	slidesToScroll: 5,
	    	arrows: true,
	    	responsive: [
	    	{
	    		breakpoint: 940,
	    		settings: {
	    			arrows: true,
	    			slidesToShow: 4,
	    			slidesToScroll: 4
	    		}
	    	},
	    	{
	    		breakpoint: 768,
	    		settings: {
	    			arrows: true,
	    			slidesToShow: 3,
	    			slidesToScroll: 3
	    		}
	    	}
	    	]
	    });

	  	// Control visibility of prev-arrow
	  	_control_prev_arrow();


	  	_fetch_on_edge_hit();

	  }

    /**
     * Expoes public functions.
     */
     return {
     	name: 'bibsdb_query_carousel',
     	init: init,
     };
   })();

  /**
   * Start the carousel when the document is ready.
   */
   $(document).ready(function() {
   	BibsdbQueryCarousel.init();
   });


 })(jQuery);