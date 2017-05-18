<?php
/**
 * @file
 * onb_global.features.uuid_current_search_configuration.inc
 */

/**
 * Implements hook_uuid_features_default_current_search_configurations().
 */
function onb_global_uuid_features_default_current_search_configurations() {
  $current_search_configurations = array();

  $current_search_configurations[] = array(
    'delta' => 'clone_of_standard',
    'searcher' => 'search_api@search_indicateurs',
  );
  $current_search_configurations[] = array(
    'delta' => 'question',
    'searcher' => 'search_api@search_questions',
  );
  $current_search_configurations[] = array(
    'delta' => 'standard',
    'searcher' => 'search_api@search_indicateurs',
  );
  return $current_search_configurations;
}
