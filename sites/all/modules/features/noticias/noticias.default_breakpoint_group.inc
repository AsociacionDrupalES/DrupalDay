<?php
/**
 * @file
 * noticias.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function noticias_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'image_teaser';
  $breakpoint_group->name = 'Image teaser';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.dday_2019.fluid',
    1 => 'breakpoints.theme.dday_2019.tablet',
    2 => 'breakpoints.theme.dday_2019.desktop',
    3 => 'breakpoints.theme.dday_2019.$desktop-l',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['image_teaser'] = $breakpoint_group;

  return $export;
}
