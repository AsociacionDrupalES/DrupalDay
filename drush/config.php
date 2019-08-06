<?php

/**
 * @file
 * Drush remote project settings.
 *
 * Por defecto esta solucion de drush en drupal no va a estar activa.
 * Tienes que pasar $drush_on_drupal a true en tu config.local.php.
 */

$drush_on_drupal = FALSE;

$drush_dev_path = '/var/www/dev.drupalday.es/current';
$drush_dev_uri = 'dev.drupalday.es';
$drush_dev_ssh_options = '-o StrictHostKeyChecking=no -o UserKnownHostsFile=/dev/null';

$dir = __DIR__;
if (file_exists($dir . '/config.local.php')) {
  require $dir . '/config.local.php';
}

