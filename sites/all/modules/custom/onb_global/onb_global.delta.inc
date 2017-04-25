<?php
/**
 * @file
 * onb_global.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function onb_global_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'no_sidebar';
  $delta->name = 'no sidebar';
  $delta->description = '';
  $delta->theme = 'indicateurs';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_indicateurs_settings' => array(
      'favicon_path' => 'public://onb_0.ico',
      'alpha_debug_grid_roles' => array(
        1 => 0,
        2 => 0,
        4 => 0,
        3 => 0,
      ),
      'alpha_toggle_breadcrumb' => 0,
      'alpha_region_sidebar_first_zone' => NULL,
      'alpha_region_sidebar_first_columns' => '7',
      'alpha_region_sidebar_first_weight' => '2',
      'alpha_region_sidebar_first_equal_height_element' => FALSE,
      'alpha_region_postscript_fourth_zone' => NULL,
      'alpha_region_postscript_fourth_equal_height_element' => FALSE,
      'alpha_region_preface_first_zone' => 'preface',
      'alpha_region_preface_first_columns' => '4',
      'alpha_region_preface_first_equal_height_element' => 0,
      'alpha_zone_header_section' => NULL,
      'alpha_zone_content_primary' => 'content',
      'alpha_region_content_columns' => '12',
      'alpha_region_content_weight' => '1',
      'alpha_zone_postscript_section' => 'content',
      'alpha_region_postscript_first_columns' => '4',
      'alpha_region_postscript_second_columns' => '4',
      'alpha_region_postscript_third_columns' => '4',
    ),
  );
  $export['no_sidebar'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'no_sidebar_second';
  $delta->name = 'no sidebar second';
  $delta->description = '';
  $delta->theme = 'indicateurs';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_indicateurs_settings' => array(
      'favicon_path' => 'public://onb_0.ico',
      'alpha_debug_grid_roles' => array(
        1 => 0,
        2 => 0,
        4 => 0,
        3 => 0,
      ),
      'alpha_toggle_breadcrumb' => 0,
      'alpha_region_postscript_fourth_zone' => NULL,
      'alpha_region_postscript_fourth_equal_height_element' => FALSE,
      'alpha_region_preface_first_zone' => 'preface',
      'alpha_region_preface_first_columns' => '4',
      'alpha_region_preface_first_equal_height_element' => 0,
      'alpha_zone_header_section' => NULL,
      'alpha_zone_content_primary' => 'content',
      'alpha_region_content_columns' => '5',
      'alpha_region_content_weight' => '1',
      'alpha_region_sidebar_first_columns' => '7',
      'alpha_region_sidebar_first_weight' => '2',
      'alpha_zone_postscript_section' => 'content',
      'alpha_region_postscript_first_columns' => '4',
      'alpha_region_postscript_second_columns' => '4',
      'alpha_region_postscript_third_columns' => '4',
    ),
  );
  $export['no_sidebar_second'] = $delta;

  return $export;
}
