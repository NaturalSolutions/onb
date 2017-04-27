<?php
/**
 * @file
 * onb_global.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function onb_global_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function onb_global_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function onb_global_image_default_styles() {
  $styles = array();

  // Exported image style: 550x200.
  $styles['550x200'] = array(
    'label' => '550x200',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 550,
          'height' => 200,
        ),
        'weight' => 1,
      ),
      10 => array(
        'name' => 'adaptive_image',
        'data' => array(
          'resolutions' => '1382, 992, 768, 480',
          'mobile_first' => 1,
          'height' => '',
          'width' => 1382,
          'upscale' => '',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 600x200.
  $styles['600x200'] = array(
    'label' => '600x200',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 550,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 660x240.
  $styles['660x240'] = array(
    'label' => '660x240',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 660,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 720x260.
  $styles['720x260'] = array(
    'label' => '720x260',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 720,
          'height' => 260,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 960x260.
  $styles['960x260'] = array(
    'label' => '960x260',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 260,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: a4.
  $styles['a4'] = array(
    'label' => 'a4',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 700,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_thumbnail_80.
  $styles['square_thumbnail_80'] = array(
    'label' => 'square_thumbnail_80',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 80,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function onb_global_node_info() {
  $items = array(
    'actualite' => array(
      'name' => t('Actualite'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'fiche_indicateur' => array(
      'name' => t('Fiche indicateur'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nom complet de l\'indicateur'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page de base'),
      'base' => 'node_content',
      'description' => t('Utilisez les <em>pages de base</em> pour votre contenu statique, tel que la page \'Qui sommes-nous\'.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'producteur' => array(
      'name' => t('Producteur'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
    'question' => array(
      'name' => t('Question'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
