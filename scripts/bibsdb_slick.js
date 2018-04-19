
(function($) {
	'use strict';

	var BibsdbQueryCarousel = (function() {

		 /**
     * Private: Makes an ajax call to the server to get new content for the
     * carousel. The query node nid and the offset is sent along with the ajax request.
     */
     function _fetch_on_next() {

     	// Detect edge hit
     	$('.open-platform-item-list').on('afterChange', function(event, slick, currentSlide){

          // Fetch again if nessesary
          if (_ready_to_fetch($(this))) {
            _fetch($(this), $(this).slick('getSlick').slideCount);
          }

        });
     }

     /**
     * Private: Makes an ajax call to the server to get new content for the
     * carousel. The search context is send along with the ajax request.
     */
     function _fetch($carousel, carouselOffset) {

      // Add ajax loader
      _append_ajax_loader($carousel);
     	
      // Register that an asyncrounous ajax call is started
      $carousel.slick('slickSetOption', 'bibsdbRunningRequest', true);

      $.ajax({
       type: 'post',
       url : Drupal.settings.basePath + 'bibsdb_open_platform_query/content/ajax',
       dataType : 'json',
       data: {
        'nid' : $carousel.attr('id'),
        'offset' : carouselOffset
      },
      success : function(data) {
     			// Update the carousel.
          _remove_ajax_loader($carousel);
     			_update($carousel, data);
     		},
     		complete : function() {
          // Register that an asyncrounous ajax call has ended
          $carousel.slick('slickSetOption', 'bibsdbRunningRequest', false); 

          
          // Fetch again if there are few slides in the carousel
          if (_ready_to_fetch($carousel)) {
            _fetch($carousel, $carousel.slick('getSlick').slideCount);
          }
        }
      });
    }

    /**
     * Private: Updates the carousel after content has been fetched.
     */
     function _update($carousel, data) {

      if (data.length === 0) {
        $carousel.slick('slickSetOption', 'bibsdbFull', true); 
      }
      for (var i in data) {
        $carousel.slick('slickAdd', data[i]);
      }
    }

    /**
     * Private: Check if we need to fetch more content.
     */
     function _ready_to_fetch($carousel) {

      var slideCount = $carousel.slick('getSlick').slideCount;
      var slideIndex = $carousel.slick('slickCurrentSlide');

      if ($carousel.slick('slickGetOption', 'bibsdbRunningRequest')) {
        return false;
      }

      if ($carousel.slick('slickGetOption', 'bibsdbFull')) {
        return false;
      }

      if (slideCount- slideIndex < 40) {
        return true;
      }
      return false;

    }


	   /**
     * Private: Control visibility of prev arrow.
     */
     function _control_arrows() {

			// Hide prev-arrow on load
			$('.slick-prev').hide();

			// Attach afterChange event-handler to detect if carousel is back at beginning
			$('.open-platform-item-list').on('afterChange', function(event, slick, currentSlide){
				if (currentSlide) {
					$('.slick-prev').show();
				}
				else {
					$('.slick-prev').hide();
				}
			});
		}


      /**
     * Private: Generate ajax-loader item
     */
     function _append_ajax_loader($carousel) {

      var item = '<div class="open-platform-item ajax-loader"><img src="/sites/default/modules/bibsdb_expose/images/ajax-loader.gif"></div>';
      $carousel.slick('slickAdd', item);
    }

          /**
     * Private: Generate ajax-loader item
     */
     function _remove_ajax_loader($carousel) {

      var slideCount = $carousel.slick('getSlick').slideCount;
      $carousel.slick('slickRemove', slideCount - 1 );

    }

		/**
     * Public: Init the carousel.
     */
     function init() {


      $('.not-front .open-platform-item-list').slick({
        infinite: false,
        slidesToShow: 5,
        slidesToScroll: 5,
        arrows: true,
        bibsdbFull: false,
        bibsdbRunningRequest: false,
        responsive: [
        {
          breakpoint: 1100,
          settings: {
            arrows: true,
            slidesToShow: 5,
            slidesToScroll: 5
          }
        },
        {
          breakpoint: 950,
          settings: {
            arrows: true,
            slidesToShow: 5,
            slidesToScroll: 5
          }
        },
        {
          breakpoint: 600,
          settings: {
            arrows: true,
            slidesToShow: 3,
            slidesToScroll: 3
          }
        }
        ]
      });

      // Frontpage settings
      $('.front .open-platform-item-list').slick({
        infinite: false,
        slidesToShow: 6,
        slidesToScroll: 6,
        arrows: true,
        bibsdbFull: false,
        bibsdbRunningRequest: false,
        responsive: [
        {
          breakpoint: 950,
          settings: {
            arrows: true,
            slidesToShow: 4,
            slidesToScroll: 4
          }
        },
        {
          breakpoint: 600,
          settings: {
            arrows: true,
            slidesToShow: 2,
            slidesToScroll: 2
          }
        }
        ]
      });
      

	  	// Control visibility of prev-arrow
	  	_control_arrows();

      // Enable next-button
      _fetch_on_next();

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