<?php
/**
 * @file
 * onb_global.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function onb_global_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['backup_migrate-quick_backup'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'quick_backup',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'backup_migrate',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-hp_acces_question_biodiversite'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(
      0 => 'fr',
    ),
    'i18n_mode' => 1,
    'machine_name' => 'hp_acces_question_biodiversite',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -23,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -23,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['calendar-calendar_legend'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'calendar_legend',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'calendar',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['context_ui-editor'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'editor',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'context_ui',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -17,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -17,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['current_search-clone_of_standard'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'clone_of_standard',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'current_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['current_search-question'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'question',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'current_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => 'ok',
    'visibility' => 0,
  );

  $export['current_search-standard'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'standard',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'current_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -15,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['diff-inline'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'inline',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'diff',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ds_extras-barre_de_gauche'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'barre_de_gauche',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'ds_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['ds_extras-barre_de_gauche_impression'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'barre_de_gauche_impression',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'ds_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ds_extras-barre_de_gauche_question'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'barre_de_gauche_question',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'ds_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['ds_extras-barre_de_gauche_question_fiche_s'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'barre_de_gauche_question_fiche_s',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'ds_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['ds_extras-barre_de_gauche_question_impress'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'barre_de_gauche_question_impress',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'ds_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ds_extras-barre_de_gauche_thematique'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'barre_de_gauche_thematique',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'ds_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['facetapi-1PFPsSdQ1oEEDvWm0FDBZrlA8YUBd9xN'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '1PFPsSdQ1oEEDvWm0FDBZrlA8YUBd9xN',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => 'Date of Analysis FRB',
    'visibility' => 0,
  );

  $export['facetapi-2nqGdPLV05KnsANhCZeBMYNCR7Km2Wou'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '2nqGdPLV05KnsANhCZeBMYNCR7Km2Wou',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -10,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -10,
      ),
    ),
    'title' => 'dateSearch',
    'visibility' => 0,
  );

  $export['facetapi-3lTwMC5PVStMfwVIVo860u5kQBG4eQKo'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '3lTwMC5PVStMfwVIVo860u5kQBG4eQKo',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -15,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -15,
      ),
    ),
    'title' => 'Pressure Type',
    'visibility' => 0,
  );

  $export['facetapi-3r46c3NAblFRJM5BrJDdvrs40XMXhTay'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '3r46c3NAblFRJM5BrJDdvrs40XMXhTay',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-5PJZvOhKN1WCbQmELrQjWYWBUah5UQYp'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '5PJZvOhKN1WCbQmELrQjWYWBUah5UQYp',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -21,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -21,
      ),
    ),
    'title' => 'Geographic coverage',
    'visibility' => 0,
  );

  $export['facetapi-6JYJcWN6wB2bNpqybC0Jm0rEEPwITmXg'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '6JYJcWN6wB2bNpqybC0Jm0rEEPwITmXg',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-8C1JGy9U5JwO2jylR0FTyxNCtD1kGQMO'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '8C1JGy9U5JwO2jylR0FTyxNCtD1kGQMO',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => 'Topic type',
    'visibility' => 0,
  );

  $export['facetapi-AwNEwsXHd7MP1Hf1PGqiOnj10sHJNPVL'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'AwNEwsXHd7MP1Hf1PGqiOnj10sHJNPVL',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-BYtTIDsMiwLQyV1FpOE4A8vyl5UDjGvM'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'BYtTIDsMiwLQyV1FpOE4A8vyl5UDjGvM',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => 'Status of publication',
    'visibility' => 0,
  );

  $export['facetapi-E4DIO6fu5a570FNv7fu4nGs0qZI126AY'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'E4DIO6fu5a570FNv7fu4nGs0qZI126AY',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-EgptENIDqhxpG2y3euh1nWFuN2ocy5mV'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'EgptENIDqhxpG2y3euh1nWFuN2ocy5mV',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -7,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -7,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-JKQatLJ3o3ev1dIdqGLuGrZYRpqbL0QQ'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'JKQatLJ3o3ev1dIdqGLuGrZYRpqbL0QQ',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => 'Territorial scale of restitution',
    'visibility' => 0,
  );

  $export['facetapi-L5gDc0x0x1flmvqZOzKA7VzXuAnVGykq'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'L5gDc0x0x1flmvqZOzKA7VzXuAnVGykq',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -8,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -8,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-LSI7jZWvqfi8MbFKzT02JOrqfFrjuHpw'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'LSI7jZWvqfi8MbFKzT02JOrqfFrjuHpw',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => 'Vocabulaire',
    'visibility' => 0,
  );

  $export['facetapi-LrRXTrkdLflxt2AVW8oPY87SUtZ3RIEE'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'LrRXTrkdLflxt2AVW8oPY87SUtZ3RIEE',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-NgIF8RIOBV5ECrk45ALlKR9HmbhH18Ji'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'NgIF8RIOBV5ECrk45ALlKR9HmbhH18Ji',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-Ps7TNGjqNuYITL1WWq9MqTtN6cH7HXnQ'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Ps7TNGjqNuYITL1WWq9MqTtN6cH7HXnQ',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => 'Release date of the indicators set',
    'visibility' => 0,
  );

  $export['facetapi-QVrrrqoV00iJQusZ2iG8KyA7khx9ytJr'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'QVrrrqoV00iJQusZ2iG8KyA7khx9ytJr',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-d0bp4OQSE2q0vtCzwYPNhhvUzTccy1U6'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'd0bp4OQSE2q0vtCzwYPNhhvUzTccy1U6',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => 'Topic',
    'visibility' => 0,
  );

  $export['facetapi-dXAySpxiyV0afdjYuyWp5Oo5jBUYZhBO'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'dXAySpxiyV0afdjYuyWp5Oo5jBUYZhBO',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -9,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-elAtZQS3y2moNjP82yifaBhIgfen0Iwj'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'elAtZQS3y2moNjP82yifaBhIgfen0Iwj',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -18,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -18,
      ),
    ),
    'title' => 'DPSIR',
    'visibility' => 0,
  );

  $export['facetapi-iBmdtOA6tLf1TxWZ6z7GHHMJZok1xfpN'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'iBmdtOA6tLf1TxWZ6z7GHHMJZok1xfpN',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => 'Grower',
    'visibility' => 0,
  );

  $export['facetapi-jQgxrRm5eVtgSYZyZNmjQUf6Ta7Aobab'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'jQgxrRm5eVtgSYZyZNmjQUf6Ta7Aobab',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-jbnMBFs4msbpxVc3vgYx2bbVtR1lm4QM'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'jbnMBFs4msbpxVc3vgYx2bbVtR1lm4QM',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -19,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -19,
      ),
    ),
    'title' => 'SNB Strategic Orientation',
    'visibility' => 0,
  );

  $export['facetapi-jugyl43OZdfGX6R3k5meeF1KhIYZt2dl'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'jugyl43OZdfGX6R3k5meeF1KhIYZt2dl',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -23,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -23,
      ),
    ),
    'title' => 'SNB Strategic Orientation',
    'visibility' => 0,
  );

  $export['facetapi-md1YF9vasA71mFnhlCGlWct30DFspy0o'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'md1YF9vasA71mFnhlCGlWct30DFspy0o',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-mz1U7vEhTOGB4H2dC0zmfwGvT31f0Fwp'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'mz1U7vEhTOGB4H2dC0zmfwGvT31f0Fwp',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -17,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -17,
      ),
    ),
    'title' => 'Keyword',
    'visibility' => 0,
  );

  $export['facetapi-pOr55Bx1UDk595Yd0nNveGRjdDfo651V'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'pOr55Bx1UDk595Yd0nNveGRjdDfo651V',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => 'Première lettre',
    'visibility' => 0,
  );

  $export['facetapi-pmyXsWlY1Yg494QwWotv5xOoyj1rCGes'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'pmyXsWlY1Yg494QwWotv5xOoyj1rCGes',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-q3qwjbG6MgQk86uYcYLCdo1w1Ox7ZnWp'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'q3qwjbG6MgQk86uYcYLCdo1w1Ox7ZnWp',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-qGOSv5YJIsBgtVx2w2IiwF04F9CBiZt1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'qGOSv5YJIsBgtVx2w2IiwF04F9CBiZt1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-qHkLlWWHvZedkTRbfBhaefsoE1aCYinL'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'qHkLlWWHvZedkTRbfBhaefsoE1aCYinL',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -23,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -23,
      ),
    ),
    'title' => 'Habitat',
    'visibility' => 0,
  );

  $export['facetapi-qIKfIl3fzLn7s6sYLnlpIAnMOifVQCbE'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'qIKfIl3fzLn7s6sYLnlpIAnMOifVQCbE',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => 'Indicators set',
    'visibility' => 0,
  );

  $export['facetapi-ryQChgBW1gs9cHvN0NhB70XOPfSy0g2Y'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ryQChgBW1gs9cHvN0NhB70XOPfSy0g2Y',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => 'Thématique',
    'visibility' => 0,
  );

  $export['facetapi-uh114tgpzyuTf7QTaLrgbskK2IDReJ1y'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'uh114tgpzyuTf7QTaLrgbskK2IDReJ1y',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => 'FRB Analysis',
    'visibility' => 0,
  );

  $export['facetapi-zJW12ifaWLGVfq1Iot3Ncl3DGmGaPiJq'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'zJW12ifaWLGVfq1Iot3Ncl3DGmGaPiJq',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -20,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -20,
      ),
    ),
    'title' => 'SNB goal',
    'visibility' => 0,
  );

  $export['lexicon-lexicon_random_term'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'lexicon_random_term',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'lexicon',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'language',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'utilisateur authentifié' => 2,
    ),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 4,
      ),
      'indicateurs' => array(
        'region' => 'branding',
        'status' => 1,
        'theme' => 'indicateurs',
        'weight' => 4,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['masquerade-masquerade'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'masquerade',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'masquerade',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => 'footer_second',
        'status' => 1,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'features',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-menu-secondaire'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-menu-secondaire',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'lonb*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['menu_block-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => 'Thématiques',
    'visibility' => 0,
  );

  $export['menu_block-3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 3,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'onb*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['menu_block-4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 4,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => 'Topics',
    'visibility' => 0,
  );

  $export['nice_menus-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'nice_menus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['nice_menus-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'nice_menus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => 'menu',
        'status' => 1,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -18,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'syndicate',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 3,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['print-print-links'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'print-links',
    'i18n_block_language' => array(
      0 => 'fr',
    ),
    'i18n_mode' => 1,
    'module' => 'print',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -30,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -30,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['print-print-top'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'print-top',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'print',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['print_pdf-print_pdf-top'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'print_pdf-top',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'print_pdf',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['printfriendly-printfriendly'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'printfriendly',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'printfriendly',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -33,
      ),
      'indicateurs' => array(
        'region' => 'menu',
        'status' => 1,
        'theme' => 'indicateurs',
        'weight' => -33,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search_api_sorts-search-sorts'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'search-sorts',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'search_api_sorts',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 4,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['site_map-syndicate'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'syndicate',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'site_map',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'help',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -23,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -23,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -34,
      ),
      'indicateurs' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'indicateurs',
        'weight' => -34,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -4,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'management',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -5,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -3,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -1,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 5,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -19,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -19,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'new',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -2,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => -2,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'online',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 6,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 6,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-recherche_questions-page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-recherche_questions-page',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-recherche_questions-page_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-recherche_questions-page_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-recherche_questions-page_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-recherche_questions-page_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-recherche_questions-page_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-recherche_questions-page_3',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-recherche_questions-page_4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-recherche_questions-page_4',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-recherche_questions-page_5'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-recherche_questions-page_5',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-recherche_questions-page_8'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-recherche_questions-page_8',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-recherche_questions-page_9'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-recherche_questions-page_9',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-calendrier-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'calendrier-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-calendrier-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'calendrier-block_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-diaporama-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'diaporama-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 9,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-recherche_actualite-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'recherche_actualite-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 8,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 8,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-recherche_actualite-block_2'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'recherche_actualite-block_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-recherche_indicateurs-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'recherche_indicateurs-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-relations-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'relations-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-relations-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'relations-block_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'indicateurs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'indicateurs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
