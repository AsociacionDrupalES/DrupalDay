/**
 * @file 
 * Calls the FooTable plugin.
 */
(function($) {

Drupal.behaviors.fooTable = {
  attach: function (context, settings) {
    $('.footable').footable();
  }
};

})(jQuery);
