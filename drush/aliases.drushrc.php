<?php

/**
 * @file
 * Drush aliases file.
 */

$dir = __DIR__;
if (file_exists($dir . '/config.php')) {
  require $dir . '/config.php';
}

if (isset($drush_on_drupal) && $drush_on_drupal) {

  $aliases['local'] = [
    'root' => $site_local_path,
    'uri' => $site_local_uri,
    'command-specific' => [
      'rsync' => ['mode' => 'rlptzO', 'verbose' => TRUE, 'no-perms' => TRUE],
    ],
  ];

  // ---------------------------------------------------

  $aliases['dev'] = [
    'root' => $drush_dev_path,
    'uri' => $drush_dev_uri,
    'remote-host' => $drush_dev_uri,
    'remote-user' => 'deploy',
    'ssh-options' => $drush_dev_ssh_options,
  ];

}
