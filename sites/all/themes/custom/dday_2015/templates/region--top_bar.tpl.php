<?php
/**
 * @file
 * Returns the HTML for the footer region.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728140
 */
?>
<?php if ($content): ?>
  <div class="<?php print $classes; ?>">
    <div class="top-bar__content">
      <?php print $content; ?>
    </div>
  </div>
<?php endif; ?>
