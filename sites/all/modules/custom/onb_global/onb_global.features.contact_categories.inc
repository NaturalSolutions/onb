<?php
/**
 * @file
 * onb_global.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function onb_global_contact_categories_defaults() {
  return array(
    'Contact général' => array(
      'category' => 'Contact général',
      'recipients' => 'naturefrance@developpement-durable.gouv.fr',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
