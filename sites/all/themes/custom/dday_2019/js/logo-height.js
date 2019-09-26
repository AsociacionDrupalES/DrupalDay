/**
 * @file
 * JavaScript file for calculating logo height.
 *
 */

(function ($, Drupal, window, document, undefined) {

  // Reset ww value.
  var ww = null;
  Drupal.behaviors.dday2019LogoHeight = {
    attach: function(context, settings) {
      $(window).load(function() {
        ww = document.body.clientWidth;
        calculateLogoHeight();
      });
      $(window).bind('resize orientationchange', function() {
        ww = document.body.clientWidth;
        calculateLogoHeight();
      });
    }
  };

  // Calculates slides height and stablish logo and slide desciption in a
  // visible position.
  var calculateLogoHeight = function() {
    if (ww >= 480) {
      var marginforlogo = 0;
      marginforlogo = $('#block-views-flexslider-home-block').height() * (45 / 100);
      $('#logo').height(marginforlogo);
      $('#block-views-flexslider-home-block .field-name-field-slide-description').css('margin-top',marginforlogo);
    }
  }

})(jQuery, Drupal, this, this.document);
