<?php

$dir = __DIR__;
if (file_exists($dir . '/config.php')) {
  require $dir . '/config.php';
}

if (isset($drush_on_drupal) && $drush_on_drupal) {
  $options['uri'] = $site_local_uri;

  // Default
  $options['shell-aliases']['files_from_dev'] = '-y rsync @dev:sites/default/files @local:sites/default/files';
  $options['shell-aliases']['db_from_dev'] = '!drush sql-drop -y && drush sql-sync @dev @local --create-db -y';
  $options['shell-aliases']['all_from_dev'] = '!drush files_from_dev && drush db_from_dev';
}
