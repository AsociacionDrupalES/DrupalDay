/**
 * @file 
 * Calls the FooTable plugin.
 */
(function($) {

Drupal.behaviors.fooTable = {
  attach: function (context, settings) {
    $('.footable', context).footable();
  }
};

})(jQuery);
