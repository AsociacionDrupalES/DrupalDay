<?php
/**
 * @file
 * noticias.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function noticias_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.dday_2014.$desktop-l';
  $breakpoint->name = '$desktop-l';
  $breakpoint->breakpoint = '(min-width: 70.5em)';
  $breakpoint->source = 'dday_2014';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.dday_2014.$desktop-l'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.dday_2014.desktop';
  $breakpoint->name = 'desktop';
  $breakpoint->breakpoint = '(min-width: 61.2em) and (max-width: 70.49em)';
  $breakpoint->source = 'dday_2014';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.dday_2014.desktop'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.dday_2014.fluid';
  $breakpoint->name = 'fluid';
  $breakpoint->breakpoint = '(min-width: 0px)';
  $breakpoint->source = 'dday_2014';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.dday_2014.fluid'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.dday_2014.tablet';
  $breakpoint->name = 'tablet';
  $breakpoint->breakpoint = '(min-width: 46em) and (max-width: 61.19em)';
  $breakpoint->source = 'dday_2014';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.dday_2014.tablet'] = $breakpoint;

  return $export;
}
