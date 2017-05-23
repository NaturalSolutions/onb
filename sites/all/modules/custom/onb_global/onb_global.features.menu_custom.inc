<?php
/**
 * @file
 * onb_global.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function onb_global_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Menu principal',
    'description' => 'Le <em>menu Principal</em> est fréquemment utilisé pour afficher les sections importantes du site, souvent dans la barre de navigation de haut de page.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Le <em>menu Principal</em> est fréquemment utilisé pour afficher les sections importantes du site, souvent dans la barre de navigation de haut de page.');
  t('Menu principal');

  return $menus;
}
