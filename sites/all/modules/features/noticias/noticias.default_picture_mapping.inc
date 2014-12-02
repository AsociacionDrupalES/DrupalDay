<?php
/**
 * @file
 * noticias.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function noticias_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Image teaser';
  $picture_mapping->machine_name = 'image_teaser';
  $picture_mapping->breakpoint_group = 'image_teaser';
  $picture_mapping->mapping = array(
    'breakpoints.theme.dday_2014.fluid' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'teaser_big',
      ),
    ),
    'breakpoints.theme.dday_2014.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'teaser',
      ),
    ),
    'breakpoints.theme.dday_2014.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'teaser',
      ),
    ),
    'breakpoints.theme.dday_2014.$desktop-l' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'teaser',
      ),
    ),
  );
  $export['image_teaser'] = $picture_mapping;

  return $export;
}
