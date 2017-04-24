<?php
/**
 * @file
 * glossaire.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function glossaire_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|glossaire|full';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'glossaire';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'test' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:0:"";s:5:"title";s:0:"";s:4:"body";s:107:"%taxonomy_term:field_definitions	Taxonomy_term being viewed : Définitions
%taxonomy_term:field-definitions";s:6:"format";s:7:"ds_code";s:10:"substitute";i:1;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 1,
      ),
    ),
  );
  $export['taxonomy_term|glossaire|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function glossaire_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|glossaire|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'glossaire';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'description',
        1 => 'field_definitions',
        2 => 'field_first_letter',
      ),
    ),
    'fields' => array(
      'description' => 'ds_content',
      'field_definitions' => 'ds_content',
      'field_first_letter' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['taxonomy_term|glossaire|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|glossaire|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'glossaire';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_definitions',
        1 => 'test',
        2 => 'field_first_letter',
      ),
    ),
    'fields' => array(
      'field_definitions' => 'ds_content',
      'test' => 'ds_content',
      'field_first_letter' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['taxonomy_term|glossaire|full'] = $ds_layout;

  return $export;
}
