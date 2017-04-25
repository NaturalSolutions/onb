<?php
/**
 * @file
 * onb_global.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function onb_global_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'clone_of_standard';
  $item->label = 'indicateur_current';
  $item->settings = array(
    'items' => array(
      'results' => array(
        'id' => 'text',
        'label' => 'Results',
        'text' => 'Search found [facetapi_results:result-count] item',
        'plural' => 1,
        'text_plural' => 'Search found [facetapi_results:result-count] items',
        'plural_condition' => 'facetapi_results:result-count',
        'wrapper' => 1,
        'element' => 'h3',
        'css' => 0,
        'classes' => '',
        'weight' => '-50',
      ),
      'active_items' => array(
        'id' => 'active',
        'label' => 'Active items',
        'pattern' => '[facetapi_active:active-value] [facetapi_active:facet-name] [facetapi_active:facet-label] [facetapi_active:active-value-raw]',
        'keys' => 1,
        'css' => 0,
        'classes' => '',
        'nofollow' => 1,
        'weight' => '-49',
      ),
      'test' => array(
        'id' => 'active',
        'label' => 'test',
        'pattern' => '[facetapi_active:active-pos]',
        'keys' => 1,
        'css' => 0,
        'classes' => '',
        'nofollow' => 0,
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => 0,
    ),
  );
  $export['clone_of_standard'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'question';
  $item->label = 'question';
  $item->settings = array(
    'items' => array(
      'question_active' => array(
        'id' => 'active',
        'label' => 'question_active',
        'pattern' => '[facetapi_active:active-value] [facetapi_active:facet-label]',
        'keys' => 1,
        'css' => 1,
        'classes' => '',
        'nofollow' => 1,
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => 0,
    ),
  );
  $export['question'] = $item;

  return $export;
}
