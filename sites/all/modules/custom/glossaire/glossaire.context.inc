<?php
/**
 * @file
 * glossaire.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function glossaire_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'glossaire-splash';
  $context->description = '';
  $context->tag = 'Glossaire';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'recherche_glossaire:page' => 'recherche_glossaire:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-pOr55Bx1UDk595Yd0nNveGRjdDfo651V' => array(
          'module' => 'facetapi',
          'delta' => 'pOr55Bx1UDk595Yd0nNveGRjdDfo651V',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-LSI7jZWvqfi8MbFKzT02JOrqfFrjuHpw' => array(
          'module' => 'facetapi',
          'delta' => 'LSI7jZWvqfi8MbFKzT02JOrqfFrjuHpw',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-ryQChgBW1gs9cHvN0NhB70XOPfSy0g2Y' => array(
          'module' => 'facetapi',
          'delta' => 'ryQChgBW1gs9cHvN0NhB70XOPfSy0g2Y',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Glossaire');
  $export['glossaire-splash'] = $context;

  return $export;
}
