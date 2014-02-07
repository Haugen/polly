(function ($) {

  Drupal.behaviors.airAttachFlexslider = {
    attach: function (context, settings) {
      $('.flexslider', context).flexslider({
        selector: ".slides > .slide-item",
        animation: "slide",
        slideshow: false
      });
    }
  }

})(jQuery);