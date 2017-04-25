<?php
/**
 * @file
 * onb_global.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function onb_global_conditional_fields_default_fields() {
  $items = array();

  $items["node:fiche_indicateur:0"] = array(
    'entity' => 'node',
    'bundle' => 'fiche_indicateur',
    'dependent' => 'field_headline',
    'dependee' => 'field_jeux_indicateur',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        3 => array(
          1 => 1,
          3 => 0,
        ),
        4 => array(
          1 => 1,
          3 => 0,
        ),
        5 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => array(
        204 => 204,
        120 => NULL,
        122 => NULL,
        205 => NULL,
        206 => NULL,
        124 => NULL,
        148 => NULL,
        131 => NULL,
        130 => NULL,
        127 => NULL,
        126 => NULL,
        121 => NULL,
        128 => NULL,
        123 => NULL,
        149 => NULL,
        129 => NULL,
        203 => NULL,
        125 => NULL,
      ),
      'value' => array(
        0 => array(
          'tid' => 204,
        ),
      ),
      'values' => array(),
    ),
  );

  $items["node:fiche_indicateur:1"] = array(
    'entity' => 'node',
    'bundle' => 'fiche_indicateur',
    'dependent' => 'field_valeur_cible_renseignement',
    'dependee' => 'field_valeur_cible',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'effect' => 'slide',
      'effect_options' => array(
        'speed' => 400,
      ),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
        2 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
          2 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
          2 => 0,
        ),
        3 => array(
          1 => 1,
          3 => 0,
          2 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 1,
      'value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'grouping' => 'AND',
      'values' => array(),
    ),
  );

  return $items;
}
