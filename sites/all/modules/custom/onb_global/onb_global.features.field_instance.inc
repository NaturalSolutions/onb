<?php
/**
 * @file
 * onb_global.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function onb_global_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_actualite-comment_body'.
  $field_instances['comment-comment_node_actualite-comment_body'] = array(
    'bundle' => 'comment_node_actualite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_event_calendar-comment_body'.
  $field_instances['comment-comment_node_event_calendar-comment_body'] = array(
    'bundle' => 'comment_node_event_calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_fiche_indicateur-comment_body'.
  $field_instances['comment-comment_node_fiche_indicateur-comment_body'] = array(
    'bundle' => 'comment_node_fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_fiche_ressource_bibliographique-comment_body'.
  $field_instances['comment-comment_node_fiche_ressource_bibliographique-comment_body'] = array(
    'bundle' => 'comment_node_fiche_ressource_bibliographique',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_page-comment_body'.
  $field_instances['comment-comment_node_page-comment_body'] = array(
    'bundle' => 'comment_node_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_producteur-comment_body'.
  $field_instances['comment-comment_node_producteur-comment_body'] = array(
    'bundle' => 'comment_node_producteur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_question-comment_body'.
  $field_instances['comment-comment_node_question-comment_body'] = array(
    'bundle' => 'comment_node_question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_analyse_frb-field_analyse'.
  $field_instances['field_collection_item-field_analyse_frb-field_analyse'] = array(
    'bundle' => 'field_analyse_frb',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'impression_field_collection' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_analyse',
    'label' => 'Analyse',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'fichiers/indicateurs/analyse',
      'file_extensions' => 'pdf doc docx zip',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => 'fichiers/indicateurs/analyse-frb',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_analyse_frb-field_analyse_annee'.
  $field_instances['field_collection_item-field_analyse_frb-field_analyse_annee'] = array(
    'bundle' => 'field_analyse_frb',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'impression_field_collection' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_analyse_annee',
    'label' => 'Année analyse',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_analyse_frb-field_analyse_commentaire'.
  $field_instances['field_collection_item-field_analyse_frb-field_analyse_commentaire'] = array(
    'bundle' => 'field_analyse_frb',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'impression_field_collection' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_analyse_commentaire',
    'label' => 'Commentaire',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_analyse_frb-field_date_de_l_analyse'.
  $field_instances['field_collection_item-field_analyse_frb-field_date_de_l_analyse'] = array(
    'bundle' => 'field_analyse_frb',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'impression_field_collection' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_date_de_l_analyse',
    'label' => 'Date de l\'analyse',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_analyse_frb-field_fiche_analys_e'.
  $field_instances['field_collection_item-field_analyse_frb-field_fiche_analys_e'] = array(
    'bundle' => 'field_analyse_frb',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'impression_field_collection' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fiche_analys_e',
    'label' => 'Fiche analysée',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'fichiers/indicateurs/analyse',
      'file_extensions' => 'pdf doc docx zip',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => 'fichiers/indicateurs/analyse-frb',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_collecvisuels-field_visuels'.
  $field_instances['field_collection_item-field_collecvisuels-field_visuels'] = array(
    'bundle' => 'field_collecvisuels',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'page',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'medium',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 169,
      ),
      'impression_field_collection' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'visuel_indicateur_page' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'page',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'medium',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 169,
      ),
      'visuels_indicateurs' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'square_thumbnail_80',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_visuels',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'alt_field_default' => '',
      'alt_field_hide' => 0,
      'alt_field_sync_title' => 0,
      'alt_field_update_on_edit' => 0,
      'default_image' => 0,
      'file_directory' => 'fichiers/images/indicateurs',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 1,
          ),
          'value' => 'fichiers/images/indicateurs',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'title_field_default' => '',
      'title_field_hide' => 0,
      'title_field_update_on_edit' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_collecvisuels-field_visuels_txt'.
  $field_instances['field_collection_item-field_collecvisuels-field_visuels_txt'] = array(
    'bundle' => 'field_collecvisuels',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'impression_field_collection' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'visuel_indicateur_page' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'visuels_indicateurs' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_visuels_txt',
    'label' => 'Texte',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_sousquestion-field_sousquestion_indicateur'.
  $field_instances['field_collection_item-field_sousquestion-field_sousquestion_indicateur'] = array(
    'bundle' => 'field_sousquestion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Ajouter',
          'delete' => 'Supprimer',
          'description' => TRUE,
          'edit' => 'Modifier',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 3,
      ),
      'impression_field_collection' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'impression_field_collection',
        ),
        'type' => 'field_collection_fields',
        'weight' => 2,
      ),
      'sous_question_gauche' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'sous_question_impress' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Ajouter',
          'delete' => 'Supprimer',
          'description' => 1,
          'edit' => 'Modifier',
          'view_mode' => 'sousquestion_indicateur_impress',
        ),
        'type' => 'field_collection_view',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_sousquestion_indicateur',
    'label' => 'Indicateur(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_sousquestion-field_sousquestion_titre'.
  $field_instances['field_collection_item-field_sousquestion-field_sousquestion_titre'] = array(
    'bundle' => 'field_sousquestion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'simple_field_formatter',
        'settings' => array(
          'custom_prefix' => '',
          'custom_reverse' => 0,
          'custom_strtolower' => 0,
          'custom_strtoupper' => 0,
          'custom_suffix' => '',
          'custom_trim' => 0,
          'custom_ucfirst' => 0,
        ),
        'type' => 'simple_field_formatter_absolute_url',
        'weight' => 1,
      ),
      'impression_field_collection' => array(
        'label' => 'hidden',
        'module' => 'simple_field_formatter',
        'settings' => array(
          'custom_prefix' => '',
          'custom_reverse' => 0,
          'custom_strtolower' => 0,
          'custom_strtoupper' => 0,
          'custom_suffix' => '',
          'custom_trim' => 0,
          'custom_ucfirst' => 0,
        ),
        'type' => 'simple_field_formatter_absolute_url',
        'weight' => 0,
      ),
      'sous_question_gauche' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'sous_question_impress' => array(
        'label' => 'hidden',
        'module' => 'simple_field_formatter',
        'settings' => array(
          'custom_prefix' => '',
          'custom_reverse' => 0,
          'custom_strtolower' => 0,
          'custom_strtoupper' => 0,
          'custom_suffix' => '',
          'custom_trim' => 0,
          'custom_ucfirst' => 0,
        ),
        'type' => 'simple_field_formatter_absolute_url',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_sousquestion_titre',
    'label' => 'Titre',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_sousquestion-field_sousquestiontxt'.
  $field_instances['field_collection_item-field_sousquestion-field_sousquestiontxt'] = array(
    'bundle' => 'field_sousquestion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'impression_field_collection' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'sous_question_gauche' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'sous_question_impress' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_sousquestiontxt',
    'label' => 'Texte',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_sousquestion_indicateur-field_niveau_de_pr_sentation'.
  $field_instances['field_collection_item-field_sousquestion_indicateur-field_niveau_de_pr_sentation'] = array(
    'bundle' => 'field_sousquestion_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'impression_field_collection' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'sousquestion_indicateur_impress' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_niveau_de_pr_sentation',
    'label' => 'Niveau de présentation',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_sousquestion_indicateur-field_sousquestion_indic_compl'.
  $field_instances['field_collection_item-field_sousquestion_indicateur-field_sousquestion_indic_compl'] = array(
    'bundle' => 'field_sousquestion_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'impression_field_collection' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'sousquestion_indicateur_impress' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_sousquestion_indic_compl',
    'label' => 'Complément',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_sousquestion_indicateur-field_sousquestion_indic_nom'.
  $field_instances['field_collection_item-field_sousquestion_indicateur-field_sousquestion_indic_nom'] = array(
    'bundle' => 'field_sousquestion_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => TRUE,
          'use_content_language' => TRUE,
          'view_mode' => 'question_indicateur_ok',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 3,
      ),
      'impression_field_collection' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => TRUE,
          'use_content_language' => TRUE,
          'view_mode' => 'question_indicateur_impression',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 2,
      ),
      'sousquestion_indicateur_impress' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => TRUE,
          'use_content_language' => TRUE,
          'view_mode' => 'question_indicateur_impression',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_sousquestion_indic_nom',
    'label' => 'Indicateur',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_sousquestion_indicateur-field_sousquestion_indic_visuels'.
  $field_instances['field_collection_item-field_sousquestion_indicateur-field_sousquestion_indic_visuels'] = array(
    'bundle' => 'field_sousquestion_indicateur',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'none',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'medium',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 2,
      ),
      'impression_field_collection' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'sousquestion_indicateur_impress' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'medium',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_sousquestion_indic_visuels',
    'label' => 'Visuel(s)',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'alt_field_default' => '',
      'alt_field_hide' => 0,
      'alt_field_sync_title' => 0,
      'alt_field_update_on_edit' => 0,
      'default_image' => 0,
      'file_directory' => 'fichiers/questions/visuels',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'title_field_default' => '',
      'title_field_hide' => 0,
      'title_field_update_on_edit' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'library' => 0,
          'media_browser_indicateurs_onb--media_browser_2' => 'media_browser_indicateurs_onb--media_browser_2',
          'media_default--media_browser_1' => 0,
          'upload' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_sousquestion_indicateur-field_sousquestion_phrasezoom'.
  $field_instances['field_collection_item-field_sousquestion_indicateur-field_sousquestion_phrasezoom'] = array(
    'bundle' => 'field_sousquestion_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'impression_field_collection' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'sousquestion_indicateur_impress' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_sousquestion_phrasezoom',
    'label' => 'Phrase si zoom',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_valeurannee-field_valeur'.
  $field_instances['field_collection_item-field_valeurannee-field_valeur'] = array(
    'bundle' => 'field_valeurannee',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_valeur',
    'label' => 'Dernière valeur disponible',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'file-image-field_file_image_alt_text'.
  $field_instances['file-image-field_file_image_alt_text'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternative text is used by screen readers, search engines, and when the image cannot be loaded. By adding alt text you improve accessibility and search engine optimization.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_file_image_alt_text',
    'label' => 'Alt Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'file-image-field_file_image_title_text'.
  $field_instances['file-image-field_file_image_title_text'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Title text is used in the tool tip when a user hovers their mouse over the image. Adding title text makes it easier to understand the context of an image and improves usability.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_file_image_title_text',
    'label' => 'Title Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-actualite-body'.
  $field_instances['node-actualite-body'] = array(
    'bundle' => 'actualite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-actualite-field_actu_date'.
  $field_instances['node-actualite-field_actu_date'] = array(
    'bundle' => 'actualite',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_actu_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-0:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-actualite-field_created_date'.
  $field_instances['node-actualite-field_created_date'] = array(
    'bundle' => 'actualite',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_created_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-0:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-actualite-field_motscles'.
  $field_instances['node-actualite-field_motscles'] = array(
    'bundle' => 'actualite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_motscles',
    'label' => 'Mot(s) Clé(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-event_calendar-body'.
  $field_instances['node-event_calendar-body'] = array(
    'bundle' => 'event_calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Event Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 7,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-event_calendar-event_calendar_date'.
  $field_instances['node-event_calendar-event_calendar_date'] = array(
    'bundle' => 'event_calendar',
    'deleted' => 0,
    'description' => 'Select the start and end dates for this event.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'event_calendar_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-event_calendar-event_calendar_status'.
  $field_instances['node-event_calendar-event_calendar_status'] = array(
    'bundle' => 'event_calendar',
    'default_value' => array(
      0 => array(
        'tid' => 1892,
      ),
    ),
    'deleted' => 0,
    'description' => 'Describe Event status',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'event_calendar_status',
    'label' => 'Statut',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_abondance'.
  $field_instances['node-fiche_indicateur-field_abondance'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => array(
      0 => array(
        'tid' => 57,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 27,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 27,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_abondance',
    'label' => 'Abondance des données',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 96,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_accessiblite'.
  $field_instances['node-fiche_indicateur-field_accessiblite'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => array(
      0 => array(
        'tid' => 57,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 23,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 22,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_accessiblite',
    'label' => 'Accessibilité des données',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 92,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_actu_date'.
  $field_instances['node-fiche_indicateur-field_actu_date'] = array(
    'bundle' => 'fiche_indicateur',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 64,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'jour',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 42,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'jour',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_actu_date',
    'label' => 'Fiche mise à jour le',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-10:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_analyse_frb'.
  $field_instances['node-fiche_indicateur-field_analyse_frb'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 58,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'impression_field_collection',
        ),
        'type' => 'field_collection_fields',
        'weight' => 58,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_analyse_frb',
    'label' => 'Analyse FRB',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 101,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_analyse_frb_oui_non'.
  $field_instances['node-fiche_indicateur-field_analyse_frb_oui_non'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => array(
      0 => array(
        'value' => 'non',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 66,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_analyse_frb_oui_non',
    'label' => 'Analyse frb oui non',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_avantages'.
  $field_instances['node-fiche_indicateur-field_avantages'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_avantages',
    'label' => 'Principaux avantages',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 64,
    ),
  );

  // Exported field_instance:
  // 'node-fiche_indicateur-field_axe_et_objectifs_cdb'.
  $field_instances['node-fiche_indicateur-field_axe_et_objectifs_cdb'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_axe_et_objectifs_cdb',
    'label' => 'Axe CDB',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'term_reference_tree',
      'settings' => array(
        'cascading_selection' => 0,
        'filter_view' => '',
        'leaves_only' => 0,
        'max_depth' => 1,
        'parent_term_id' => '',
        'select_parents' => 0,
        'start_minimized' => 0,
        'token_display' => '',
        'track_list' => 0,
      ),
      'type' => 'term_reference_tree',
      'weight' => 77,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_axe_sueb'.
  $field_instances['node-fiche_indicateur-field_axe_sueb'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 61,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 61,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_axe_sueb',
    'label' => 'Axe SUEB',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'term_reference_tree',
      'settings' => array(
        'cascading_selection' => 0,
        'filter_view' => '',
        'leaves_only' => 0,
        'max_depth' => 1,
        'parent_term_id' => '',
        'select_parents' => 0,
        'start_minimized' => 0,
        'token_display' => '',
        'track_list' => 0,
      ),
      'type' => 'term_reference_tree',
      'weight' => 84,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_code'.
  $field_instances['node-fiche_indicateur-field_code'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'simple_field_formatter',
        'settings' => array(
          'custom_prefix' => '',
          'custom_reverse' => '',
          'custom_strtolower' => '',
          'custom_strtoupper' => '',
          'custom_suffix' => '',
          'custom_trim' => '',
          'custom_ucfirst' => '',
        ),
        'type' => 'simple_field_formatter_absolute_url',
        'weight' => 3,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'simple_field_formatter',
        'settings' => array(
          'custom_prefix' => '',
          'custom_reverse' => '',
          'custom_strtolower' => '',
          'custom_strtoupper' => '',
          'custom_suffix' => '',
          'custom_trim' => '',
          'custom_ucfirst' => '',
        ),
        'type' => 'simple_field_formatter_absolute_url',
        'weight' => 10,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_code',
    'label' => 'Code indicateur',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_collecvisuels'.
  $field_instances['node-fiche_indicateur-field_collecvisuels'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 1,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 40,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'impression_field_collection',
        ),
        'type' => 'field_collection_fields',
        'weight' => 53,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 64,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 58,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_collecvisuels',
    'label' => 'Visuels',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 74,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_continuite_snb'.
  $field_instances['node-fiche_indicateur-field_continuite_snb'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 27,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 7,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_continuite_snb',
    'label' => 'Continuité du jeu national SNB',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 61,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_cout'.
  $field_instances['node-fiche_indicateur-field_cout'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => array(
      0 => array(
        'tid' => 57,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 34,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 14,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cout',
    'label' => 'Coût de mobilisation',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 98,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_couveture_geo'.
  $field_instances['node-fiche_indicateur-field_couveture_geo'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 11,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 19,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_couveture_geo',
    'label' => 'Couverture géographique',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_created_date'.
  $field_instances['node-fiche_indicateur-field_created_date'] = array(
    'bundle' => 'fiche_indicateur',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 64,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'jour',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 42,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'jour',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_created_date',
    'label' => 'Fiche mise à jour le',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-10:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-fiche_indicateur-field_date_de_derni_re_modificat'.
  $field_instances['node-fiche_indicateur-field_date_de_derni_re_modificat'] = array(
    'bundle' => 'fiche_indicateur',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 59,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date_de_derni_re_modificat',
    'label' => 'Date de dernière modification de la fiche suite à l\'analyse',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 102,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_date_publication'.
  $field_instances['node-fiche_indicateur-field_date_publication'] = array(
    'bundle' => 'fiche_indicateur',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 41,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 56,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 58,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date_publication',
    'label' => 'Date de publication de la première valeur de la série',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '1970:+3',
      ),
      'type' => 'date_select',
      'weight' => 46,
    ),
  );

  // Exported field_instance:
  // 'node-fiche_indicateur-field_definition_indicateur'.
  $field_instances['node-fiche_indicateur-field_definition_indicateur'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 65,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_definition_indicateur',
    'label' => 'Définition',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_disponibilite'.
  $field_instances['node-fiche_indicateur-field_disponibilite'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_disponibilite',
    'label' => 'Disponibilité',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_donnees_sources'.
  $field_instances['node-fiche_indicateur-field_donnees_sources'] = array(
    'bundle' => 'fiche_indicateur',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 41,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 54,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_donnees_sources',
    'label' => 'Données sources',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'fichiers/indicateurs/sources',
      'file_extensions' => 'txt pdf doc docx odp odt ppt ppts pps zip xls xlsx',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 1,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 1,
          ),
          'value' => 'fichiers/indicateurs/sources/[node:title]',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_echelle_restitution'.
  $field_instances['node-fiche_indicateur-field_echelle_restitution'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 36,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 16,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_echelle_restitution',
    'label' => 'Echelle(s) territoriale(s) de restitution',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_efficacite'.
  $field_instances['node-fiche_indicateur-field_efficacite'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => array(
      0 => array(
        'tid' => 57,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 19,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 18,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_efficacite',
    'label' => 'Efficacité',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 91,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_fiabilite'.
  $field_instances['node-fiche_indicateur-field_fiabilite'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => array(
      0 => array(
        'tid' => 57,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 25,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 25,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fiabilite',
    'label' => 'Fiabilité des données',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 94,
    ),
  );

  // Exported field_instance:
  // 'node-fiche_indicateur-field_grain_precision_echelle'.
  $field_instances['node-fiche_indicateur-field_grain_precision_echelle'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 37,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 17,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_grain_precision_echelle',
    'label' => 'Grain(s) de précision d\'échelle',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_headline'.
  $field_instances['node-fiche_indicateur-field_headline'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 63,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_headline',
    'label' => 'Headline',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'term_reference_tree',
      'settings' => array(
        'cascading_selection' => 0,
        'filter_view' => '',
        'leaves_only' => 0,
        'max_depth' => '',
        'parent_term_id' => '',
        'select_parents' => 0,
        'start_minimized' => 0,
        'token_display' => '',
        'track_list' => 0,
      ),
      'type' => 'term_reference_tree',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_homogeneite'.
  $field_instances['node-fiche_indicateur-field_homogeneite'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => array(
      0 => array(
        'tid' => 57,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 24,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 23,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_homogeneite',
    'label' => 'Homogénéité des données',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 93,
    ),
  );

  // Exported field_instance:
  // 'node-fiche_indicateur-field_indicateur_producteur'.
  $field_instances['node-fiche_indicateur-field_indicateur_producteur'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_plain',
        'weight' => 38,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_plain',
        'weight' => 52,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 63,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_indicateur_producteur',
    'label' => 'Producteur',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'references_dialog_add' => 1,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 1,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_intitule_court'.
  $field_instances['node-fiche_indicateur-field_intitule_court'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'simple_field_formatter',
        'settings' => array(
          'custom_prefix' => '',
          'custom_reverse' => '',
          'custom_strtolower' => '',
          'custom_strtoupper' => '',
          'custom_suffix' => '',
          'custom_trim' => '',
          'custom_ucfirst' => '',
        ),
        'type' => 'simple_field_formatter_absolute_url',
        'weight' => 1,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'simple_field_formatter',
        'settings' => array(
          'custom_prefix' => '',
          'custom_reverse' => '',
          'custom_strtolower' => '',
          'custom_strtoupper' => '',
          'custom_suffix' => '',
          'custom_trim' => '',
          'custom_ucfirst' => '',
        ),
        'type' => 'simple_field_formatter_absolute_url',
        'weight' => 1,
      ),
      'question_indicateur' => array(
        'label' => 'hidden',
        'module' => 'simple_field_formatter',
        'settings' => array(
          'custom_prefix' => '',
          'custom_reverse' => '',
          'custom_strtolower' => '',
          'custom_strtoupper' => '',
          'custom_suffix' => '',
          'custom_trim' => '',
          'custom_ucfirst' => '',
        ),
        'type' => 'simple_field_formatter_absolute_url',
        'weight' => 7,
      ),
      'question_indicateur_impression' => array(
        'label' => 'hidden',
        'module' => 'simple_field_formatter',
        'settings' => array(
          'custom_prefix' => '',
          'custom_reverse' => '',
          'custom_strtolower' => '',
          'custom_strtoupper' => '',
          'custom_suffix' => '',
          'custom_trim' => '',
          'custom_ucfirst' => '',
        ),
        'type' => 'simple_field_formatter_absolute_url',
        'weight' => 1,
      ),
      'question_indicateur_ok' => array(
        'label' => 'hidden',
        'module' => 'simple_field_formatter',
        'settings' => array(
          'custom_prefix' => '',
          'custom_reverse' => '',
          'custom_strtolower' => '',
          'custom_strtoupper' => '',
          'custom_suffix' => '',
          'custom_trim' => '',
          'custom_ucfirst' => '',
        ),
        'type' => 'simple_field_formatter_absolute_url',
        'weight' => 1,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'module' => 'simple_field_formatter',
        'settings' => array(
          'custom_prefix' => '',
          'custom_reverse' => '',
          'custom_strtolower' => '',
          'custom_strtoupper' => '',
          'custom_suffix' => '',
          'custom_trim' => '',
          'custom_ucfirst' => '',
        ),
        'type' => 'simple_field_formatter_absolute_url',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_intitule_court',
    'label' => 'Intitulé court',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_jeux_indicateur'.
  $field_instances['node-fiche_indicateur-field_jeux_indicateur'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 4,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 11,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_jeux_indicateur',
    'label' => 'Jeu(x) d\'indicateurs',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_limites'.
  $field_instances['node-fiche_indicateur-field_limites'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_limites',
    'label' => 'Principales limites',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 87,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_methodologie'.
  $field_instances['node-fiche_indicateur-field_methodologie'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 54,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_methodologie',
    'label' => 'Méthodologie de construction',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_milieux_concernes'.
  $field_instances['node-fiche_indicateur-field_milieux_concernes'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 8,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 16,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_milieux_concernes',
    'label' => 'Habitat(s) concerné(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_mod_interpretation'.
  $field_instances['node-fiche_indicateur-field_mod_interpretation'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 43,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 56,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'question_indicateur_ok' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mod_interpretation',
    'label' => 'Modalités d\'interprétation de l\'indicateur',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 73,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_niveau'.
  $field_instances['node-fiche_indicateur-field_niveau'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 35,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 15,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 61,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_niveau',
    'label' => 'Niveau d\'appropriation',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 99,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_objectif_sueb'.
  $field_instances['node-fiche_indicateur-field_objectif_sueb'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 62,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 62,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objectif_sueb',
    'label' => 'Objectif SUEB',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'term_reference_tree',
      'settings' => array(
        'cascading_selection' => 0,
        'filter_view' => '',
        'leaves_only' => 1,
        'max_depth' => '',
        'parent_term_id' => '',
        'select_parents' => 0,
        'start_minimized' => 0,
        'token_display' => '',
        'track_list' => 0,
      ),
      'type' => 'term_reference_tree',
      'weight' => 85,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_objectifs_cdb'.
  $field_instances['node-fiche_indicateur-field_objectifs_cdb'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objectifs_cdb',
    'label' => 'Objectifs CDB',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'term_reference_tree',
      'settings' => array(
        'cascading_selection' => 0,
        'filter_view' => '',
        'leaves_only' => 1,
        'max_depth' => '',
        'parent_term_id' => '',
        'select_parents' => 0,
        'start_minimized' => 0,
        'token_display' => '',
        'track_list' => 0,
      ),
      'type' => 'term_reference_tree',
      'weight' => 78,
    ),
  );

  // Exported field_instance:
  // 'node-fiche_indicateur-field_objectifs_snb_principaux'.
  $field_instances['node-fiche_indicateur-field_objectifs_snb_principaux'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(),
        'type' => 'taxonomy_taxonomie_colorbox',
        'weight' => 6,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 14,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objectifs_snb_principaux',
    'label' => 'Objectif(s) concerné(s) principalement',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-fiche_indicateur-field_objectifs_snb_secondaires'.
  $field_instances['node-fiche_indicateur-field_objectifs_snb_secondaires'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(),
        'type' => 'taxonomy_taxonomie_colorbox',
        'weight' => 7,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 15,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objectifs_snb_secondaires',
    'label' => 'Objectif(s) concerné(s) secondairement',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-fiche_indicateur-field_orientations_principales'.
  $field_instances['node-fiche_indicateur-field_orientations_principales'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(),
        'type' => 'taxonomy_taxonomie_colorbox',
        'weight' => 5,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 12,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_orientations_principales',
    'label' => 'Orientation(s) stratégique(s) concernée(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_origine_source'.
  $field_instances['node-fiche_indicateur-field_origine_source'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 53,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_origine_source',
    'label' => 'Origine et description des données sources',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 67,
    ),
  );

  // Exported field_instance:
  // 'node-fiche_indicateur-field_pas_tps_disponibilite'.
  $field_instances['node-fiche_indicateur-field_pas_tps_disponibilite'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 31,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 11,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pas_tps_disponibilite',
    'label' => 'Pas de temps de disponibilité des valeurs',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 87,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_pas_tps_remarques'.
  $field_instances['node-fiche_indicateur-field_pas_tps_remarques'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 33,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pas_tps_remarques',
    'label' => 'Remarques',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 88,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_pas_tps_restitution'.
  $field_instances['node-fiche_indicateur-field_pas_tps_restitution'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 32,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 13,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pas_tps_restitution',
    'label' => 'Pas de temps de restitution',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 70,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_perennite'.
  $field_instances['node-fiche_indicateur-field_perennite'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => array(
      0 => array(
        'tid' => 57,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 26,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 26,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_perennite',
    'label' => 'Pérennité des données',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 95,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_pistes'.
  $field_instances['node-fiche_indicateur-field_pistes'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 29,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pistes',
    'label' => 'Pistes de travail et d\'amélioration',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_precision'.
  $field_instances['node-fiche_indicateur-field_precision'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => array(
      0 => array(
        'tid' => 57,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 17,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 16,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_precision',
    'label' => 'Précision',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 89,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_qualite'.
  $field_instances['node-fiche_indicateur-field_qualite'] = array(
    'bundle' => 'fiche_indicateur',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 62,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_qualite',
    'label' => 'Qualité des données',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 97,
    ),
  );

  // Exported field_instance:
  // 'node-fiche_indicateur-field_relation_indicateurs'.
  $field_instances['node-fiche_indicateur-field_relation_indicateurs'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 30,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 10,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relation_indicateurs',
    'label' => 'Indicateurs équivalents existant dans d\'autres jeux',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_relation_objectifs'.
  $field_instances['node-fiche_indicateur-field_relation_objectifs'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'question_indicateur_ok' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relation_objectifs',
    'label' => 'Relations avec le(s) objectif(s) renseigné(s)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_retro_calcul'.
  $field_instances['node-fiche_indicateur-field_retro_calcul'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 28,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_retro_calcul',
    'label' => 'Possibilité de rétro-calcul',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 62,
    ),
  );

  // Exported field_instance:
  // 'node-fiche_indicateur-field_retro_calcul_remarques'.
  $field_instances['node-fiche_indicateur-field_retro_calcul_remarques'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 29,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_retro_calcul_remarques',
    'label' => 'Remarques rétro-calcul',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 63,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_robustesse'.
  $field_instances['node-fiche_indicateur-field_robustesse'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => array(
      0 => array(
        'tid' => 57,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 14,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 14,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_robustesse',
    'label' => 'Robustesse',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 87,
    ),
  );

  // Exported field_instance:
  // 'node-fiche_indicateur-field_robustesse_remarques'.
  $field_instances['node-fiche_indicateur-field_robustesse_remarques'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_robustesse_remarques',
    'label' => 'Robustesse - remarques ',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 88,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_rupture_serie'.
  $field_instances['node-fiche_indicateur-field_rupture_serie'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 43,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 55,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 59,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rupture_serie',
    'label' => 'Rupture de série',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 72,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_sensibilite'.
  $field_instances['node-fiche_indicateur-field_sensibilite'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => array(
      0 => array(
        'tid' => 57,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 18,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 17,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sensibilite',
    'label' => 'Sensiblité',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 90,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_type_pression'.
  $field_instances['node-fiche_indicateur-field_type_pression'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 10,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 18,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_type_pression',
    'label' => 'Type(s) de pression',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_type_variable'.
  $field_instances['node-fiche_indicateur-field_type_variable'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 24,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 4,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_type_variable',
    'label' => 'Type de variable',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_unite_mesure'.
  $field_instances['node-fiche_indicateur-field_unite_mesure'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 25,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 5,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_unite_mesure',
    'label' => 'Unité de mesure',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_valeur_cible'.
  $field_instances['node-fiche_indicateur-field_valeur_cible'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_valeur_cible',
    'label' => 'Valeur(s) cible(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 59,
    ),
  );

  // Exported field_instance:
  // 'node-fiche_indicateur-field_valeur_cible_renseignement'.
  $field_instances['node-fiche_indicateur-field_valeur_cible_renseignement'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'question_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'question_indicateur_impression' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'question_indicateur_ok' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_valeur_cible_renseignement',
    'label' => 'Valeur(s) cible(s) renseignement',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 60,
    ),
  );

  // Exported field_instance: 'node-fiche_indicateur-field_valeurannee'.
  $field_instances['node-fiche_indicateur-field_valeurannee'] = array(
    'bundle' => 'fiche_indicateur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 1,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 39,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 55,
      ),
      'question_indicateur' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 6,
      ),
      'question_indicateur_impression' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 2,
      ),
      'question_indicateur_ok' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 2,
      ),
      'reference_indicateur' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_valeurannee',
    'label' => 'Valeur par période',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 76,
    ),
  );

  // Exported field_instance: 'node-fiche_ressource_bibliographique-body'.
  $field_instances['node-fiche_ressource_bibliographique-body'] = array(
    'bundle' => 'fiche_ressource_bibliographique',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-fiche_ressource_bibliographique-field_actu_date'.
  $field_instances['node-fiche_ressource_bibliographique-field_actu_date'] = array(
    'bundle' => 'fiche_ressource_bibliographique',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_actu_date',
    'label' => 'Fiche mise à jour le',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-fiche_ressource_bibliographique-field_created_date'.
  $field_instances['node-fiche_ressource_bibliographique-field_created_date'] = array(
    'bundle' => 'fiche_ressource_bibliographique',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_created_date',
    'label' => 'Fiche créée le',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-page-body'.
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-page-field_page_image'.
  $field_instances['node-page-field_page_image'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'alt_field_default' => '',
      'alt_field_hide' => 0,
      'alt_field_sync_title' => 0,
      'alt_field_update_on_edit' => 0,
      'default_image' => 0,
      'file_directory' => 'images/pages/visuels',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 1,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 1,
          ),
          'value' => 'fichiers/images/pages/[node:title]',
        ),
        'retroactive_update' => 1,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'title_field_default' => '',
      'title_field_hide' => 0,
      'title_field_update_on_edit' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'imagefield_crop',
      'settings' => array(
        'collapsible' => 1,
        'croparea' => '500x500',
        'enforce_minimum' => 1,
        'enforce_ratio' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
        'resolution' => '960x260',
      ),
      'type' => 'imagefield_crop_widget',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-producteur-body'.
  $field_instances['node-producteur-body'] = array(
    'bundle' => 'producteur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-question-field_documents_associes'.
  $field_instances['node-question-field_documents_associes'] = array(
    'bundle' => 'question',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 10,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_documents_associes',
    'label' => 'Documents associés',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'txt pdf xls ppt pptx docx odt xlsx doc odp zip rar',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 1,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 1,
          ),
          'value' => 'fichiers/questions/documents-associes/[node:title]',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'reference' => 0,
            'remote' => 'remote',
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-question-field_fiche_synthetique'.
  $field_instances['node-question-field_fiche_synthetique'] = array(
    'bundle' => 'question',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fiche_synthetique',
    'label' => 'Fiche synthétique',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'fichiers/questions/fichesynthetique',
      'file_extensions' => 'pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-question-field_jeux_indicateur'.
  $field_instances['node-question-field_jeux_indicateur'] = array(
    'bundle' => 'question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 6,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_jeux_indicateur',
    'label' => 'Thématique(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-question-field_objectifs_snb_principaux'.
  $field_instances['node-question-field_objectifs_snb_principaux'] = array(
    'bundle' => 'question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(),
        'type' => 'taxonomy_taxonomie_colorbox',
        'weight' => 9,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objectifs_snb_principaux',
    'label' => 'Objectif(s) concerné(s) principalement',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-question-field_objets_indicateurs'.
  $field_instances['node-question-field_objets_indicateurs'] = array(
    'bundle' => 'question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objets_indicateurs',
    'label' => 'Objets et indicateurs',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-question-field_orientations_principales'.
  $field_instances['node-question-field_orientations_principales'] = array(
    'bundle' => 'question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(),
        'type' => 'taxonomy_full',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(),
        'type' => 'taxonomy_taxonomie_colorbox',
        'weight' => 8,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_orientations_principales',
    'label' => 'Orientation(s) stratégique(s) concernée(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-question-field_position'.
  $field_instances['node-question-field_position'] = array(
    'bundle' => 'question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_position',
    'label' => 'Position',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-question-field_presentation'.
  $field_instances['node-question-field_presentation'] = array(
    'bundle' => 'question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_presentation',
    'label' => 'Présentation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-question-field_question_code'.
  $field_instances['node-question-field_question_code'] = array(
    'bundle' => 'question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'simple_field_formatter',
        'settings' => array(
          'custom_prefix' => '',
          'custom_reverse' => '',
          'custom_strtolower' => '',
          'custom_strtoupper' => '',
          'custom_suffix' => '',
          'custom_trim' => '',
          'custom_ucfirst' => '',
        ),
        'type' => 'simple_field_formatter_absolute_url',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'simple_field_formatter',
        'settings' => array(
          'custom_prefix' => '',
          'custom_reverse' => '',
          'custom_strtolower' => '',
          'custom_strtoupper' => '',
          'custom_suffix' => '',
          'custom_trim' => '',
          'custom_ucfirst' => '',
        ),
        'type' => 'simple_field_formatter_absolute_url',
        'weight' => 5,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'simple_field_formatter',
        'settings' => array(
          'custom_prefix' => '',
          'custom_reverse' => '',
          'custom_strtolower' => '',
          'custom_strtoupper' => '',
          'custom_suffix' => '',
          'custom_trim' => '',
          'custom_ucfirst' => '',
        ),
        'type' => 'simple_field_formatter_absolute_url',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_question_code',
    'label' => 'Code',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-question-field_questionvisuel'.
  $field_instances['node-question-field_questionvisuel'] = array(
    'bundle' => 'question',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '720x260',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_questionvisuel',
    'label' => 'Visuel',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'alt_field_default' => '',
      'alt_field_hide' => 0,
      'alt_field_sync_title' => 0,
      'alt_field_update_on_edit' => 0,
      'default_image' => 0,
      'file_directory' => 'images/questions/visuels',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 1,
          ),
          'value' => 'fichiers/images/questions/[node:title]',
        ),
        'retroactive_update' => 1,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'title_field_default' => '',
      'title_field_hide' => 0,
      'title_field_update_on_edit' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'imagefield_crop',
      'settings' => array(
        'collapsible' => 1,
        'croparea' => '500x500',
        'enforce_minimum' => 1,
        'enforce_ratio' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
        'resolution' => '720x260',
      ),
      'type' => 'imagefield_crop_widget',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-question-field_sousquestion'.
  $field_instances['node-question-field_sousquestion'] = array(
    'bundle' => 'question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 1,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Ajouter',
          'delete' => 'Supprimer',
          'description' => TRUE,
          'edit' => 'Modifier',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 4,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'impression_field_collection',
        ),
        'type' => 'field_collection_fields',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sousquestion',
    'label' => 'Sous-question',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-question-field_type_dpsir'.
  $field_instances['node-question-field_type_dpsir'] = array(
    'bundle' => 'question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 7,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_type_dpsir',
    'label' => 'Type(s) DPSIR',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-jeux_d_indicateurs-field_date_de_publication_du_jeu'.
  $field_instances['taxonomy_term-jeux_d_indicateurs-field_date_de_publication_du_jeu'] = array(
    'bundle' => 'jeux_d_indicateurs',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
      'taxonomie_colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'thematique_lien_question' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_date_de_publication_du_jeu',
    'label' => 'Date de publication du jeu d\'indicateurs',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-10:+3',
      ),
      'type' => 'date_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-jeux_d_indicateurs-field_date_publication_jeu'.
  $field_instances['taxonomy_term-jeux_d_indicateurs-field_date_publication_jeu'] = array(
    'bundle' => 'jeux_d_indicateurs',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'annee',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'annee',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'annee',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'taxonomie_colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'thematique_lien_question' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_date_publication_jeu',
    'label' => 'Date de publication du jeu d\'indicateurs',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-10:+10',
      ),
      'type' => 'date_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-jeux_d_indicateurs-field_position'.
  $field_instances['taxonomy_term-jeux_d_indicateurs-field_position'] = array(
    'bundle' => 'jeux_d_indicateurs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'taxonomie_colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_position',
    'label' => 'Position ordre questions',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-jeux_d_indicateurs-field_statut_de_publication'.
  $field_instances['taxonomy_term-jeux_d_indicateurs-field_statut_de_publication'] = array(
    'bundle' => 'jeux_d_indicateurs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'taxonomie_colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'thematique_lien_question' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_statut_de_publication',
    'label' => 'Statut de publication',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-jeux_d_indicateurs-field_type_de_thematique'.
  $field_instances['taxonomy_term-jeux_d_indicateurs-field_type_de_thematique'] = array(
    'bundle' => 'jeux_d_indicateurs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'taxonomie_colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'thematique_lien_question' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_type_de_thematique',
    'label' => 'Type de thématique',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-jeux_d_indicateurs-field_visuel'.
  $field_instances['taxonomy_term-jeux_d_indicateurs-field_visuel'] = array(
    'bundle' => 'jeux_d_indicateurs',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'taxonomie_colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'thematique_lien_question' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_visuel',
    'label' => 'Visuel',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'alt_field_default' => '',
      'alt_field_hide' => 0,
      'alt_field_sync_title' => 0,
      'alt_field_update_on_edit' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 1,
          ),
          'value' => 'fichiers/images/thematiques/[term:name]',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'title_field_default' => '',
      'title_field_hide' => 0,
      'title_field_update_on_edit' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'imagefield_crop',
      'settings' => array(
        'collapsible' => 1,
        'croparea' => '500x500',
        'enforce_minimum' => 0,
        'enforce_ratio' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
        'resolution' => '720x260',
      ),
      'type' => 'imagefield_crop_widget',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abondance des données');
  t('Accessibilité des données');
  t('Alt Text');
  t('Alternative text is used by screen readers, search engines, and when the image cannot be loaded. By adding alt text you improve accessibility and search engine optimization.');
  t('Analyse');
  t('Analyse FRB');
  t('Analyse frb oui non');
  t('Année analyse');
  t('Axe CDB');
  t('Axe SUEB');
  t('Body');
  t('Code');
  t('Code indicateur');
  t('Comment');
  t('Commentaire');
  t('Complément');
  t('Continuité du jeu national SNB');
  t('Couverture géographique');
  t('Coût de mobilisation');
  t('Date');
  t('Date de dernière modification de la fiche suite à l\'analyse');
  t('Date de l\'analyse');
  t('Date de publication de la première valeur de la série');
  t('Date de publication du jeu d\'indicateurs');
  t('Dernière valeur disponible');
  t('Describe Event status');
  t('Disponibilité');
  t('Documents associés');
  t('Données sources');
  t('Définition');
  t('Echelle(s) territoriale(s) de restitution');
  t('Efficacité');
  t('Event Description');
  t('Fiabilité des données');
  t('Fiche analysée');
  t('Fiche créée le');
  t('Fiche mise à jour le');
  t('Fiche synthétique');
  t('Grain(s) de précision d\'échelle');
  t('Habitat(s) concerné(s)');
  t('Headline');
  t('Homogénéité des données');
  t('Image');
  t('Indicateur');
  t('Indicateur(s)');
  t('Indicateurs équivalents existant dans d\'autres jeux');
  t('Intitulé court');
  t('Jeu(x) d\'indicateurs');
  t('Modalités d\'interprétation de l\'indicateur');
  t('Mot(s) Clé(s)');
  t('Méthodologie de construction');
  t('Niveau d\'appropriation');
  t('Niveau de présentation');
  t('Objectif SUEB');
  t('Objectif(s) concerné(s) principalement');
  t('Objectif(s) concerné(s) secondairement');
  t('Objectifs CDB');
  t('Objets et indicateurs');
  t('Orientation(s) stratégique(s) concernée(s)');
  t('Origine et description des données sources');
  t('Pas de temps de disponibilité des valeurs');
  t('Pas de temps de restitution');
  t('Phrase si zoom');
  t('Pistes de travail et d\'amélioration');
  t('Position');
  t('Position ordre questions');
  t('Possibilité de rétro-calcul');
  t('Principales limites');
  t('Principaux avantages');
  t('Producteur');
  t('Précision');
  t('Présentation');
  t('Pérennité des données');
  t('Qualité des données');
  t('Relations avec le(s) objectif(s) renseigné(s)');
  t('Remarques');
  t('Remarques rétro-calcul');
  t('Robustesse');
  t('Robustesse - remarques ');
  t('Rupture de série');
  t('Select the start and end dates for this event.');
  t('Sensiblité');
  t('Sous-question');
  t('Statut');
  t('Statut de publication');
  t('Texte');
  t('Thématique(s)');
  t('Title Text');
  t('Title text is used in the tool tip when a user hovers their mouse over the image. Adding title text makes it easier to understand the context of an image and improves usability.');
  t('Titre');
  t('Type de thématique');
  t('Type de variable');
  t('Type(s) DPSIR');
  t('Type(s) de pression');
  t('Unité de mesure');
  t('Valeur par période');
  t('Valeur(s) cible(s)');
  t('Valeur(s) cible(s) renseignement');
  t('Visuel');
  t('Visuel(s)');
  t('Visuels');

  return $field_instances;
}
