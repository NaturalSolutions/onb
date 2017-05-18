<?php
/**
 * @file
 * onb_global.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function onb_global_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-main-menu-en_homepage:<front>.
  $menu_links['menu-main-menu-en_homepage:<front>'] = array(
    'menu_name' => 'menu-main-menu-en',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Homepage',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-main-menu-en_homepage:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage');

  return $menu_links;
}
