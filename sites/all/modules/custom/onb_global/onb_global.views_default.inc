<?php
/**
 * @file
 * onb_global.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function onb_global_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'administration_des_contenus';
  $view->description = 'Find and manage content.';
  $view->tag = 'admin';
  $view->base_table = 'node';
  $view->human_name = 'Administration des contenus';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Contenu';
  $handler->display->display_options['css_class'] = 'admin-views-view';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'menu';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'timestamp' => 'title',
    'type' => 'type',
    'name' => 'name',
    'status' => 'status',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '&nbsp;',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '&emsp;',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Aucun contenu disponible.';
  /* Relationship: Contenu: Auteur */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Contenu: Termes de taxonomie du nœud */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'forums' => 0,
    'tags' => 0,
  );
  /* Field: Bulk operations: Contenu */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Supprimer',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Changer la valeur des champs',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Contenu: Visuel */
  $handler->display->display_options['fields']['field_questionvisuel']['id'] = 'field_questionvisuel';
  $handler->display->display_options['fields']['field_questionvisuel']['table'] = 'field_data_field_questionvisuel';
  $handler->display->display_options['fields']['field_questionvisuel']['field'] = 'field_questionvisuel';
  $handler->display->display_options['fields']['field_questionvisuel']['label'] = '';
  $handler->display->display_options['fields']['field_questionvisuel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_questionvisuel']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_questionvisuel']['settings'] = array(
    'image_style' => 'square_thumbnail_80',
    'image_link' => '',
  );
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Contenu: Présente des contenus nouveaux */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Contenu: Langue */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'Language';
  /* Field: Contenu: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Utilisateur: Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Auteur';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Contenu: Publié */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Contenu: Date de mise à jour */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Mis à jour';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Contenu: Lien de modification */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  /* Field: Contenu: Lien de suppression */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  /* Filter criterion: Contenu: Titre */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titre';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  /* Filter criterion: Contenu: Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['group'] = 1;
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Utilisateur: Nom */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Auteur';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'author';
  $handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Publié';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
  /* Filter criterion: Terme de taxonomie: Vocabulaire */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['vid']['group'] = 1;
  $handler->display->display_options['filters']['vid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['vid']['expose']['operator_id'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['label'] = 'Vocabulaire';
  $handler->display->display_options['filters']['vid']['expose']['operator'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['identifier'] = 'vid';
  $handler->display->display_options['filters']['vid']['expose']['remember'] = TRUE;

  /* Display: System */
  $handler = $view->new_display('system', 'System', 'system_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content';
  $export['administration_des_contenus'] = $view;

  $view = new view();
  $view->name = 'administration_des_fichiers';
  $view->description = 'Find and manage files.';
  $view->tag = 'admin';
  $view->base_table = 'file_managed';
  $view->human_name = 'Administration des Fichiers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fichiers';
  $handler->display->display_options['css_class'] = 'admin-views-view';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'menu';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'filename' => 'filename',
    'type' => 'type',
    'name' => 'name',
    'filesize' => 'filesize',
    'timestamp' => 'timestamp',
    'edit' => 'edit',
    'delete' => 'delete',
  );
  $handler->display->display_options['style_options']['default'] = 'timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'filename' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'filesize' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'usage' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Pas de fichiers disponibles.';
  /* Relationship: Fichier: Utilisateur ayant transféré */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'file_managed';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'utilisateur';
  /* Field: Bulk operations: Fichier */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_file';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_archive_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Archiver',
      'settings' => array(
        'scheme' => 'public',
        'temporary' => 1,
      ),
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Supprimer',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Changer la valeur des champs',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
  );
  /* Field: Fichier: Nom */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = 'Titre';
  /* Field: Fichier: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'file_managed';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Fichier: Taille */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['empty'] = '0 bytes';
  /* Field: Utilisateur: Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Auteur';
  /* Field: Fichier: Date de transfert */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Mis à jour';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Field: Fichier: Usage link */
  $handler->display->display_options['fields']['usage']['id'] = 'usage';
  $handler->display->display_options['fields']['usage']['table'] = 'file_managed';
  $handler->display->display_options['fields']['usage']['field'] = 'usage';
  $handler->display->display_options['fields']['usage']['label'] = 'Utilisé dans';
  $handler->display->display_options['fields']['usage']['element_label_colon'] = FALSE;
  /* Field: Fichier: Lien de modification */
  $handler->display->display_options['fields']['edit']['id'] = 'edit';
  $handler->display->display_options['fields']['edit']['table'] = 'file_managed';
  $handler->display->display_options['fields']['edit']['field'] = 'edit';
  $handler->display->display_options['fields']['edit']['label'] = '';
  $handler->display->display_options['fields']['edit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit']['element_label_colon'] = FALSE;
  /* Field: Fichier: Lien de suppression */
  $handler->display->display_options['fields']['delete']['id'] = 'delete';
  $handler->display->display_options['fields']['delete']['table'] = 'file_managed';
  $handler->display->display_options['fields']['delete']['field'] = 'delete';
  $handler->display->display_options['fields']['delete']['label'] = '';
  $handler->display->display_options['fields']['delete']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete']['alter']['text'] = '<ul class="links inline">
<li>[edit]</li>
<li>[delete]</li>
</ul>';
  $handler->display->display_options['fields']['delete']['element_label_colon'] = FALSE;
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul class="links inline">
<li>[edit]</li>
<li>[delete]</li>
</ul>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Fichier: Nom */
  $handler->display->display_options['filters']['filename']['id'] = 'filename';
  $handler->display->display_options['filters']['filename']['table'] = 'file_managed';
  $handler->display->display_options['filters']['filename']['field'] = 'filename';
  $handler->display->display_options['filters']['filename']['operator'] = 'contains';
  $handler->display->display_options['filters']['filename']['group'] = 1;
  $handler->display->display_options['filters']['filename']['exposed'] = TRUE;
  $handler->display->display_options['filters']['filename']['expose']['operator_id'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['label'] = 'Nom';
  $handler->display->display_options['filters']['filename']['expose']['operator'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['identifier'] = 'filename';
  $handler->display->display_options['filters']['filename']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['filename']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Fichier: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Utilisateur: Nom */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Utilisateur';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: System */
  $handler = $view->new_display('system', 'System', 'system_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/file';
  $export['administration_des_fichiers'] = $view;

  $view = new view();
  $view->name = 'administration_des_utilisateurs';
  $view->description = 'List, add, and edit users.';
  $view->tag = 'admin';
  $view->base_table = 'users';
  $view->human_name = 'Administration des utilisateurs';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Utilisateurs';
  $handler->display->display_options['css_class'] = 'admin-views-view';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'menu';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'mail' => 'name',
    'status' => 'status',
    'rid' => 'rid',
    'created' => 'created',
    'access' => 'access',
    'edit_node' => 'edit_node',
    'cancel_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'access';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '&emsp;',
      'empty_column' => 0,
    ),
    'cancel_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Aucun utilisateur disponible.';
  /* Field: Bulk operations: Utilisateur */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_user_cancel_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Supprimer l\'utilisateur',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Changer la valeur des champs',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Changer le rôle de l\'utilisateur',
    ),
  );
  /* Field: Utilisateur: Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: Utilisateur: Courriel */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Utilisateur: Actif */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Utilisateur: Rôles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['type'] = 'ul';
  /* Field: Utilisateur: Date de création */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Membre depuis';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  /* Field: Utilisateur: Dernier accès */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'time ago';
  /* Field: Utilisateur: Lien de modification */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  /* Field: Utilisateur: Lien d'annulation */
  $handler->display->display_options['fields']['cancel_node']['id'] = 'cancel_node';
  $handler->display->display_options['fields']['cancel_node']['table'] = 'users';
  $handler->display->display_options['fields']['cancel_node']['field'] = 'cancel_node';
  $handler->display->display_options['fields']['cancel_node']['label'] = '';
  $handler->display->display_options['fields']['cancel_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cancel_node']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Utilisateur: Date de création */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Utilisateur: Nom */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );
  $handler->display->display_options['filters']['uid']['group'] = 1;
  /* Filter criterion: Utilisateur: Nom (brut) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Nom d\'utilisateur';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
  /* Filter criterion: Utilisateur: Courriel */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'Courriel';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
  /* Filter criterion: Utilisateur: Actif */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Actif';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
  /* Filter criterion: Utilisateur: Rôles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Rôle';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember'] = TRUE;

  /* Display: System */
  $handler = $view->new_display('system', 'System', 'system_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['path'] = 'admin/people';
  $export['administration_des_utilisateurs'] = $view;

  $view = new view();
  $view->name = 'diaporama';
  $view->description = 'diaporama affiché en page d\'accueil contenant les questions';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'diaporama';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_nivo_slider';
  $handler->display->display_options['style_options']['effect'] = array(
    'sliceUpLeft' => 'sliceUpLeft',
  );
  $handler->display->display_options['style_options']['pauseTime'] = '5000';
  $handler->display->display_options['style_options']['controlNavThumbsField'] = 'title';
  $handler->display->display_options['style_options']['controlNavThumbsIC'] = 'thumbnail';
  $handler->display->display_options['style_options']['advanced_settings'] = array(
    'toggle_bc' => 0,
    'beforeChange' => '',
    'toggle_ac' => 0,
    'afterChange' => '',
    'toggle_sse' => 0,
    'slideshowEnd' => '',
    'toggle_ls' => 0,
    'lastSlide' => '',
    'toggle_al' => 0,
    'afterLoad' => '',
  );
  $handler->display->display_options['row_plugin'] = 'nivo_sliderfields';
  $handler->display->display_options['row_options']['image_field'] = 'field_questionvisuel';
  $handler->display->display_options['row_options']['title_field'] = 'nothing';
  $handler->display->display_options['row_options']['link_field'] = 'path';
  /* Relationship: Contenu: Termes de taxonomie du nœud */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'jeux_d_indicateurs' => 'jeux_d_indicateurs',
    'biais' => 0,
    'continuit_du_jeu_national' => 0,
    'couverture_g_ographique' => 0,
    'd_clinaisons_locales' => 0,
    'disponibilite' => 0,
    'echelle' => 0,
    'tags' => 0,
    'glossaire' => 0,
    'indicateurs_quivalents' => 0,
    'media_folders' => 0,
    'milieux' => 0,
    'mots_cl_s' => 0,
    'niveau_d_appropriation' => 0,
    'objectifs_snb' => 0,
    'orientations_strat_giques' => 0,
    'pas_de_temps' => 0,
    'piste_d_indicateur' => 0,
    'qualit_' => 0,
    'rupture_de_s_rie' => 0,
    'sensibilit_' => 0,
    'type_de_pr_sentation' => 0,
    'type_de_pression' => 0,
    'type_de_variable' => 0,
    'type_dpsir' => 0,
    'unit_de_mesure' => 0,
  );
  /* Field: Contenu: Visuel */
  $handler->display->display_options['fields']['field_questionvisuel']['id'] = 'field_questionvisuel';
  $handler->display->display_options['fields']['field_questionvisuel']['table'] = 'field_data_field_questionvisuel';
  $handler->display->display_options['fields']['field_questionvisuel']['field'] = 'field_questionvisuel';
  $handler->display->display_options['fields']['field_questionvisuel']['label'] = '';
  $handler->display->display_options['fields']['field_questionvisuel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_questionvisuel']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_questionvisuel']['settings'] = array(
    'image_style' => '550x200',
    'image_link' => '',
  );
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Contenu: Thématique(s) */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'field_data_field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['label'] = '';
  $handler->display->display_options['fields']['field_jeux_indicateur']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_jeux_indicateur']['delta_offset'] = '0';
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] ([field_jeux_indicateur])';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Contenu: Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Sort criterion: Global: Au hasard */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  /* Filter criterion: Contenu: Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $export['diaporama'] = $view;

  $view = new view();
  $view->name = 'indicateurs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Indicateurs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Les indicateurs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Contenu: Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Contenu: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'indicateurs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Indicateurs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['indicateurs'] = $view;

  $view = new view();
  $view->name = 'indicateurs_apparait_question';
  $view->description = 'Displays a list of nodes that link to the node, using the search backlinks table.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'indicateurs_apparait_question';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 30;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Zone de texte */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'Aucun lien entrant (backlink) trouvé.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Contextual filter: Recherche: Liens vers */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'search_node_links_to';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tous / Toutes';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = 'Pages qui pointent vers %1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: What links here */
  $handler = $view->new_display('block', 'What links here', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Recherche: Liens vers */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'search_node_links_to';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tous / Toutes';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = 'Qu\'est-ce qui lie ici';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $export['indicateurs_apparait_question'] = $view;

  $view = new view();
  $view->name = 'media_browser_indicateurs_onb';
  $view->description = 'Default view for the media browser library tab.';
  $view->tag = 'media, default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Media browser indicateurs onb';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'media_browser';
  /* No results behavior: Global: Zone de texte */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Pas de fichiers disponibles.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Fichier: Nom */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Fichier: Date de transfert */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['sorts']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['timestamp']['expose']['label'] = 'Date';
  /* Sort criterion: Fichier: Nom */
  $handler->display->display_options['sorts']['filename']['id'] = 'filename';
  $handler->display->display_options['sorts']['filename']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['filename']['field'] = 'filename';
  $handler->display->display_options['sorts']['filename']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['filename']['expose']['label'] = 'Nom de fichier';
  /* Sort criterion: SUM(Utilisation du fichier: Nombre d'utilisations) */
  $handler->display->display_options['sorts']['count']['id'] = 'count';
  $handler->display->display_options['sorts']['count']['table'] = 'file_usage';
  $handler->display->display_options['sorts']['count']['field'] = 'count';
  $handler->display->display_options['sorts']['count']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['count']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['count']['expose']['label'] = 'Nombre d utilisations';
  /* Filter criterion: Fichier: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'file_managed';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Fichier: Nom */
  $handler->display->display_options['filters']['filename']['id'] = 'filename';
  $handler->display->display_options['filters']['filename']['table'] = 'file_managed';
  $handler->display->display_options['filters']['filename']['field'] = 'filename';
  $handler->display->display_options['filters']['filename']['operator'] = 'contains';
  $handler->display->display_options['filters']['filename']['exposed'] = TRUE;
  $handler->display->display_options['filters']['filename']['expose']['operator_id'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['label'] = 'Nom du fichier';
  $handler->display->display_options['filters']['filename']['expose']['operator'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['identifier'] = 'filename';
  /* Filter criterion: Fichier: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: Selection image indicateurs / question */
  $handler = $view->new_display('media_browser', 'Selection image indicateurs / question', 'media_browser_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Fichier: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'file_managed';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Fichier: Nom */
  $handler->display->display_options['filters']['filename']['id'] = 'filename';
  $handler->display->display_options['filters']['filename']['table'] = 'file_managed';
  $handler->display->display_options['filters']['filename']['field'] = 'filename';
  $handler->display->display_options['filters']['filename']['operator'] = 'contains';
  $handler->display->display_options['filters']['filename']['group'] = 1;
  $handler->display->display_options['filters']['filename']['exposed'] = TRUE;
  $handler->display->display_options['filters']['filename']['expose']['operator_id'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['label'] = 'Nom du fichier';
  $handler->display->display_options['filters']['filename']['expose']['operator'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['identifier'] = 'filename';
  /* Filter criterion: Fichier: Chemin */
  $handler->display->display_options['filters']['uri']['id'] = 'uri';
  $handler->display->display_options['filters']['uri']['table'] = 'file_managed';
  $handler->display->display_options['filters']['uri']['field'] = 'uri';
  $handler->display->display_options['filters']['uri']['operator'] = 'contains';
  $handler->display->display_options['filters']['uri']['value'] = 'fichiers/images/indicateurs';
  $handler->display->display_options['filters']['uri']['group'] = 1;
  $handler->display->display_options['filters']['uri']['expose']['operator_id'] = 'uri_op';
  $handler->display->display_options['filters']['uri']['expose']['label'] = 'Chemin';
  $handler->display->display_options['filters']['uri']['expose']['operator'] = 'uri_op';
  $handler->display->display_options['filters']['uri']['expose']['identifier'] = 'uri';
  /* Filter criterion: Fichier: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );
  $export['media_browser_indicateurs_onb'] = $view;

  $view = new view();
  $view->name = 'question_indicateur';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'question_indicateur';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['row_plugin'] = 'references_fields';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_visuels']['id'] = 'field_visuels';
  $handler->display->display_options['fields']['field_visuels']['table'] = 'field_data_field_visuels';
  $handler->display->display_options['fields']['field_visuels']['field'] = 'field_visuels';
  $handler->display->display_options['fields']['field_visuels']['label'] = '';
  $handler->display->display_options['fields']['field_visuels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visuels']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_visuels']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_visuels']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_visuels']['delta_offset'] = '0';
  /* Sort criterion: Contenu: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );

  /* Display: References */
  $handler = $view->new_display('references', 'References', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'entityreference_view_widget';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['question_indicateur'] = $view;

  $view = new view();
  $view->name = 'recherche_actualite';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_search_actualite';
  $view->human_name = 'Recherche actualite';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_actu_date' => 'field_actu_date',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_actualite';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'colorbox-load colorbox-node';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Date */
  $handler->display->display_options['fields']['field_actu_date']['id'] = 'field_actu_date';
  $handler->display->display_options['fields']['field_actu_date']['table'] = 'search_api_index_search_actualite';
  $handler->display->display_options['fields']['field_actu_date']['field'] = 'field_actu_date';
  $handler->display->display_options['fields']['field_actu_date']['label'] = '';
  $handler->display->display_options['fields']['field_actu_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actu_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Nœud: Mot(s) Clé(s) */
  $handler->display->display_options['fields']['field_motscles']['id'] = 'field_motscles';
  $handler->display->display_options['fields']['field_motscles']['table'] = 'search_api_index_search_actualite';
  $handler->display->display_options['fields']['field_motscles']['field'] = 'field_motscles';
  $handler->display->display_options['fields']['field_motscles']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_motscles']['view_mode'] = 'full';
  /* Sort criterion: Indexed Nœud: Date */
  $handler->display->display_options['sorts']['field_actu_date']['id'] = 'field_actu_date';
  $handler->display->display_options['sorts']['field_actu_date']['table'] = 'search_api_index_search_actualite';
  $handler->display->display_options['sorts']['field_actu_date']['field'] = 'field_actu_date';
  $handler->display->display_options['sorts']['field_actu_date']['order'] = 'DESC';
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_actualite';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actualite' => 'actualite',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_actualite';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );

  /* Display: Bloc - accueil */
  $handler = $view->new_display('block', 'Bloc - accueil', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Par défaut',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'url' => 0,
    'title' => 0,
    'field_actu_date' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'url' => 0,
    'title' => 0,
    'field_actu_date' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollLeft';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '10000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause_on_click'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_actu_date' => 'field_actu_date',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Zone de texte */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/actualites/toutes">Retrouvez toutes nos actualités</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_search_actualite';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_actualite';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'colorbox-load colorbox-node';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Nœud: Date */
  $handler->display->display_options['fields']['field_actu_date']['id'] = 'field_actu_date';
  $handler->display->display_options['fields']['field_actu_date']['table'] = 'search_api_index_search_actualite';
  $handler->display->display_options['fields']['field_actu_date']['field'] = 'field_actu_date';
  $handler->display->display_options['fields']['field_actu_date']['label'] = '';
  $handler->display->display_options['fields']['field_actu_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_actu_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actu_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="" href="[url]">[title]</a> - [field_actu_date]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Nœud: Date */
  $handler->display->display_options['sorts']['field_actu_date']['id'] = 'field_actu_date';
  $handler->display->display_options['sorts']['field_actu_date']['table'] = 'search_api_index_search_actualite';
  $handler->display->display_options['sorts']['field_actu_date']['field'] = 'field_actu_date';
  $handler->display->display_options['sorts']['field_actu_date']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_actualite';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actualite' => 'actualite',
  );
  /* Filter criterion: Indexed Nœud: Date */
  $handler->display->display_options['filters']['field_actu_date']['id'] = 'field_actu_date';
  $handler->display->display_options['filters']['field_actu_date']['table'] = 'search_api_index_search_actualite';
  $handler->display->display_options['filters']['field_actu_date']['field'] = 'field_actu_date';
  $handler->display->display_options['filters']['field_actu_date']['operator'] = '>=';
  $handler->display->display_options['filters']['field_actu_date']['value'] = 'now - 3 month';
  /* Filter criterion: Indexed Nœud: Date */
  $handler->display->display_options['filters']['field_actu_date_1']['id'] = 'field_actu_date_1';
  $handler->display->display_options['filters']['field_actu_date_1']['table'] = 'search_api_index_search_actualite';
  $handler->display->display_options['filters']['field_actu_date_1']['field'] = 'field_actu_date';
  $handler->display->display_options['filters']['field_actu_date_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_actu_date_1']['value'] = 'now';
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_actualite';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['block_caching'] = '-1';

  /* Display: Bloc page */
  $handler = $view->new_display('block', 'Bloc page', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_actu_date' => 'field_actu_date',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actu_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_actualite';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'colorbox-load colorbox-node';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Date */
  $handler->display->display_options['fields']['field_actu_date']['id'] = 'field_actu_date';
  $handler->display->display_options['fields']['field_actu_date']['table'] = 'search_api_index_search_actualite';
  $handler->display->display_options['fields']['field_actu_date']['field'] = 'field_actu_date';
  $handler->display->display_options['fields']['field_actu_date']['label'] = '';
  $handler->display->display_options['fields']['field_actu_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_actu_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actu_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] - [field_actu_date]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_caching'] = '8';
  $export['recherche_actualite'] = $view;

  $view = new view();
  $view->name = 'recherche_indicateurs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_search_indicateurs';
  $view->human_name = 'Recherche Indicateurs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Les indicateurs';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_visuels' => 'field_visuels',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_visuels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Indexed Nœud: Visuels */
  $handler->display->display_options['fields']['field_collecvisuels']['id'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_collecvisuels']['field'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['label'] = '';
  $handler->display->display_options['fields']['field_collecvisuels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collecvisuels']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_collecvisuels']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_collecvisuels']['display'] = 'view';
  $handler->display->display_options['fields']['field_collecvisuels']['view_mode'] = 'visuels_indicateurs';
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = '';
  $handler->display->display_options['fields']['field_intitule_court']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intitule_court']['element_label_colon'] = FALSE;
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]<br\\>
[field_intitule_court]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Indexed Nœud: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_collecvisuels' => 'field_collecvisuels',
    'title' => 'title',
    'field_intitule_court' => 'field_intitule_court',
    'field_jeux_indicateur' => 'field_jeux_indicateur',
    'field_valeurannee' => 'field_valeurannee',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_collecvisuels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intitule_court' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jeux_indicateur' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_valeurannee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Les indicateurs nationaux de synthèse';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p><strong>Précision : la consultation la plus appropriée des indicateurs du site passe par l&#39;onglet &quot;<a href="http://indicateurs-biodiversite.naturefrance.fr/thematiques/toutes">Les thématiques</a>&quot; ou l&#39;onglet &quot;<a href="http://indicateurs-biodiversite.naturefrance.fr/questions/toutes">Les questions</a>&quot;, chaque indicateur y étant mis en perspective dans son contexte d&#39;utilisation et d&#39;interprétation. </strong>Pour faciliter la recherche d&#39;indicateurs présentant certaines caractéristiques, les filtres situés à gauche de cette page permettent d&#39;affiner successivement le périmètre concerné. La structure de cette base de données et les indicateurs sont améliorés en continu dans le cadre de l&#39;<a href="http://indicateurs-biodiversite.naturefrance.fr/le-concept-i-bd2-indicateurs-de-biodiversite-en-base-de-donnees">action i-BD&sup2;</a>.</p>
<p>[collapse collapsed title=En savoir plus sur l&#39;organisation des indicateurs]</p>
<p>Les indicateurs développés par l&#39;observatoire national de la biodiversité sont organisés en différents jeux, chacun s&#39;attachant à couvrir l&#39;ensemble des aspects d&#39;une <strong><a href="http://indicateurs-biodiversite.naturefrance.fr/thematiques/toutes">thématique</a></strong> particulière, sur la base d&#39;une série limitée de <strong><a href="http://indicateurs-biodiversite.naturefrance.fr/questions/toutes">questions</a></strong> de société. Quatre jeux d&#39;indicateurs principaux sont d&#39;ores et déjà proposés aujourd&#39;hui pour documenter dans son ensemble les orientations et objectifs de la SNB :</p>
<ul>
	<li>un <strong>jeu &quot;SNB - Synthèse&quot;</strong>, composé d&#39;indicateurs renseignés au niveau national, relatifs à la biodiversité mais aussi aux différents aspects de la société en interaction avec la biodiversité : politiques, comportements, pressions, services écosystémiques... ;</li>
	<li>un <strong>jeu &quot;SNB - Spécificités Outre-Mer&quot;</strong>, qui complète le précédent par quelques indicateurs traitant des éléments caractéristiques des territoires ultra-marins ;</li>
	<li>un <strong>jeu &quot;SNB - Nature&quot;</strong>, qui regroupe des indicateurs d&#39;état et d&#39;évolution des principales composantes de la diversité biologique, ainsi que de leur connaissance. Certains indicateurs de ce jeu sont repris dans les deux jeux précédents ;</li>
	<li>un <strong>jeu &quot;SNB - Connaissance&quot;</strong>, qui s&#39;intéresse à la connaissance de la biodiversité, élément essentiel pour évaluer la qualité des indicateurs construits.</li>
</ul>
<p>Des <strong>jeux thématiques</strong> sont progressivement développés pour approfondir la documentation chiffrée sur les sujets retenus comme les plus pertinents.</p>
<p><font color="#222222">Remarque : l&#39;ONB est une démarche récente et de nombreux sujets ne font pas encore l&#39;objet d&#39;indicateurs publiés. Pour orienter les efforts de l&#39;ONB pour l&#39;élaboration de nouveaux indicateurs, des <strong>sujets dits &quot;orphelins&quot;</strong> sont identifiés. La <a href="http://www.naturefrance.fr/sites/default/files/fichiers/ressources/pdf/150401_sujets_orphelins_indicateurs_0.pdf" target="_blank">liste</a> en a été débattue et est validée par le comité national de l&#39;ONB.</font></p>
<p>[/collapsed]</p>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Visuels */
  $handler->display->display_options['fields']['field_collecvisuels']['id'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_collecvisuels']['field'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['label'] = '';
  $handler->display->display_options['fields']['field_collecvisuels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collecvisuels']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_collecvisuels']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_collecvisuels']['display'] = 'view';
  $handler->display->display_options['fields']['field_collecvisuels']['view_mode'] = 'visuels_indicateurs';
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alt'] = 'Accéder à la fiche indicateur';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = '';
  $handler->display->display_options['fields']['field_intitule_court']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intitule_court']['element_label_colon'] = FALSE;
  /* Field: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['label'] = 'Indicators set(s)';
  $handler->display->display_options['fields']['field_jeux_indicateur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jeux_indicateur']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_jeux_indicateur']['bypass_access'] = 0;
  /* Field: Indexed Nœud: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee']['id'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_valeurannee']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valeurannee']['list']['separator'] = '';
  $handler->display->display_options['fields']['field_valeurannee']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_valeurannee']['display'] = 'view';
  $handler->display->display_options['fields']['field_valeurannee']['view_mode'] = 'full';
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]<br\\>
[field_intitule_court]<br\\>
<div class="valeurindic">[field_valeurannee]<br\\></div>
<div class="jeuindic">[field_jeux_indicateur]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    120 => '120',
    122 => '122',
    123 => '123',
    124 => '124',
    125 => '125',
    148 => '148',
    131 => '131',
    130 => '130',
    127 => '127',
    126 => '126',
    121 => '121',
    128 => '128',
    149 => '149',
    129 => '129',
    203 => '203',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['path'] = 'indicateurs/tous';
  $handler->display->display_options['menu']['title'] = 'Indicateurs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Indicateurs nationaux de synthèse */
  $handler = $view->new_display('attachment', 'Indicateurs nationaux de synthèse', 'attachment_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les indicateurs Milieux Forestiers';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_collecvisuels' => 'field_collecvisuels',
    'title' => 'title',
    'field_intitule_court' => 'field_intitule_court',
    'field_jeux_indicateur' => 'field_jeux_indicateur',
    'field_valeurannee' => 'field_valeurannee',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_collecvisuels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intitule_court' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jeux_indicateur' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_valeurannee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Les indicateurs nationaux de synthèse';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Visuels */
  $handler->display->display_options['fields']['field_collecvisuels']['id'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_collecvisuels']['field'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['label'] = '';
  $handler->display->display_options['fields']['field_collecvisuels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collecvisuels']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_collecvisuels']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_collecvisuels']['display'] = 'view';
  $handler->display->display_options['fields']['field_collecvisuels']['view_mode'] = 'visuels_indicateurs';
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = '';
  $handler->display->display_options['fields']['field_intitule_court']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intitule_court']['element_label_colon'] = FALSE;
  /* Field: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jeux_indicateur']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_jeux_indicateur']['bypass_access'] = 0;
  /* Field: Indexed Nœud: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee']['id'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_valeurannee']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valeurannee']['list']['separator'] = '';
  $handler->display->display_options['fields']['field_valeurannee']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_valeurannee']['display'] = 'view';
  $handler->display->display_options['fields']['field_valeurannee']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_valeurannee']['bypass_access'] = 0;
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[title]<br\\>
[field_intitule_court]<br\\>
<div class="valeurindic">[field_valeurannee]<br\\></div>
<div class="jeuindic">[field_jeux_indicateur]</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    120 => '120',
    1897 => '1897',
    122 => '122',
    123 => '123',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Titre */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = '<>';
  $handler->display->display_options['filters']['title']['value'] = 'Déplacement des espèces lié au changement climatique';
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Biodiversité et changement climatique */
  $handler = $view->new_display('attachment', 'Biodiversité et changement climatique', 'attachment_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les indicateurs Biodiversité et changement climatique';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_collecvisuels' => 'field_collecvisuels',
    'title' => 'title',
    'field_intitule_court' => 'field_intitule_court',
    'field_jeux_indicateur' => 'field_jeux_indicateur',
    'field_valeurannee' => 'field_valeurannee',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_collecvisuels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intitule_court' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jeux_indicateur' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_valeurannee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Les indicateurs nationaux thématiques "Biodiversité & changement climatique"';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Visuels */
  $handler->display->display_options['fields']['field_collecvisuels']['id'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_collecvisuels']['field'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['label'] = '';
  $handler->display->display_options['fields']['field_collecvisuels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collecvisuels']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_collecvisuels']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_collecvisuels']['display'] = 'view';
  $handler->display->display_options['fields']['field_collecvisuels']['view_mode'] = 'visuels_indicateurs';
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = '';
  $handler->display->display_options['fields']['field_intitule_court']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intitule_court']['element_label_colon'] = FALSE;
  /* Field: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jeux_indicateur']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_jeux_indicateur']['bypass_access'] = 0;
  /* Field: Indexed Nœud: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee']['id'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_valeurannee']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valeurannee']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_valeurannee']['display'] = 'view';
  $handler->display->display_options['fields']['field_valeurannee']['view_mode'] = 'full';
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[title]<br\\>
[field_intitule_court]<br\\>
<div class="valeurindic">[field_valeurannee]<br\\></div>
<div class="jeuindic">[field_jeux_indicateur]</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    148 => '148',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Biodiversité et milieux d'eau douce */
  $handler = $view->new_display('attachment', 'Biodiversité et milieux d\'eau douce', 'attachment_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Biodiversité et milieux d\'eau douce';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_collecvisuels' => 'field_collecvisuels',
    'title' => 'title',
    'field_intitule_court' => 'field_intitule_court',
    'field_jeux_indicateur' => 'field_jeux_indicateur',
    'field_valeurannee' => 'field_valeurannee',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_collecvisuels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intitule_court' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jeux_indicateur' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_valeurannee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Les indicateurs nationaux thématiques "Biodiversité & milieux d\'eau douce"';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Visuels */
  $handler->display->display_options['fields']['field_collecvisuels']['id'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_collecvisuels']['field'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['label'] = '';
  $handler->display->display_options['fields']['field_collecvisuels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collecvisuels']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_collecvisuels']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_collecvisuels']['display'] = 'view';
  $handler->display->display_options['fields']['field_collecvisuels']['view_mode'] = 'visuels_indicateurs';
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = '';
  $handler->display->display_options['fields']['field_intitule_court']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intitule_court']['element_label_colon'] = FALSE;
  /* Field: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jeux_indicateur']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_jeux_indicateur']['bypass_access'] = 0;
  /* Field: Indexed Nœud: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee']['id'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_valeurannee']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valeurannee']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_valeurannee']['display'] = 'view';
  $handler->display->display_options['fields']['field_valeurannee']['view_mode'] = 'full';
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[title]<br\\>
[field_intitule_court]<br\\>
<div class="valeurindic">[field_valeurannee]<br\\></div>
<div class="jeuindic">[field_jeux_indicateur]</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    130 => '130',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: MF */
  $handler = $view->new_display('attachment', 'MF', 'attachment_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les indicateurs Milieux Forestiers';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_collecvisuels' => 'field_collecvisuels',
    'title' => 'title',
    'field_intitule_court' => 'field_intitule_court',
    'field_jeux_indicateur' => 'field_jeux_indicateur',
    'field_valeurannee' => 'field_valeurannee',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_collecvisuels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intitule_court' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jeux_indicateur' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_valeurannee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Les indicateurs nationaux thématiques "Biodiversité & milieux forestiers"';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Visuels */
  $handler->display->display_options['fields']['field_collecvisuels']['id'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_collecvisuels']['field'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['label'] = '';
  $handler->display->display_options['fields']['field_collecvisuels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collecvisuels']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_collecvisuels']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_collecvisuels']['display'] = 'view';
  $handler->display->display_options['fields']['field_collecvisuels']['view_mode'] = 'visuels_indicateurs';
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = '';
  $handler->display->display_options['fields']['field_intitule_court']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intitule_court']['element_label_colon'] = FALSE;
  /* Field: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jeux_indicateur']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_jeux_indicateur']['bypass_access'] = 0;
  /* Field: Indexed Nœud: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee']['id'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_valeurannee']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valeurannee']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_valeurannee']['display'] = 'view';
  $handler->display->display_options['fields']['field_valeurannee']['view_mode'] = 'full';
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[title]<br\\>
[field_intitule_court]<br\\>
<div class="valeurindic">[field_valeurannee]<br\\></div>
<div class="jeuindic">[field_jeux_indicateur]</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    121 => '121',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: MH */
  $handler = $view->new_display('attachment', 'MH', 'attachment_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les indicateurs Milieux Humides';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_collecvisuels' => 'field_collecvisuels',
    'title' => 'title',
    'field_intitule_court' => 'field_intitule_court',
    'field_jeux_indicateur' => 'field_jeux_indicateur',
    'field_valeurannee' => 'field_valeurannee',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_collecvisuels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intitule_court' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jeux_indicateur' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_valeurannee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Les indicateurs nationaux thématiques "Biodiversité & milieux humides"';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Visuels */
  $handler->display->display_options['fields']['field_collecvisuels']['id'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_collecvisuels']['field'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['label'] = '';
  $handler->display->display_options['fields']['field_collecvisuels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collecvisuels']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_collecvisuels']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_collecvisuels']['display'] = 'view';
  $handler->display->display_options['fields']['field_collecvisuels']['view_mode'] = 'visuels_indicateurs';
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = '';
  $handler->display->display_options['fields']['field_intitule_court']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intitule_court']['element_label_colon'] = FALSE;
  /* Field: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jeux_indicateur']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_jeux_indicateur']['bypass_access'] = 0;
  /* Field: Indexed Nœud: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee']['id'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_valeurannee']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valeurannee']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_valeurannee']['display'] = 'view';
  $handler->display->display_options['fields']['field_valeurannee']['view_mode'] = 'full';
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[title]<br\\>
[field_intitule_court]<br\\>
<div class="valeurindic">[field_valeurannee]<br\\></div>
<div class="jeuindic">[field_jeux_indicateur]</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    125 => '125',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Biodiversité et milieux marins et littoraux */
  $handler = $view->new_display('attachment', 'Biodiversité et milieux marins et littoraux', 'attachment_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Biodiversité et milieux marins et littoraux';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_collecvisuels' => 'field_collecvisuels',
    'title' => 'title',
    'field_intitule_court' => 'field_intitule_court',
    'field_jeux_indicateur' => 'field_jeux_indicateur',
    'field_valeurannee' => 'field_valeurannee',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_collecvisuels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intitule_court' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jeux_indicateur' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_valeurannee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Les indicateurs nationaux thématiques "Biodiversité & milieux marins et littoraux"';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Visuels */
  $handler->display->display_options['fields']['field_collecvisuels']['id'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_collecvisuels']['field'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['label'] = '';
  $handler->display->display_options['fields']['field_collecvisuels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collecvisuels']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_collecvisuels']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_collecvisuels']['display'] = 'view';
  $handler->display->display_options['fields']['field_collecvisuels']['view_mode'] = 'visuels_indicateurs';
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = '';
  $handler->display->display_options['fields']['field_intitule_court']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intitule_court']['element_label_colon'] = FALSE;
  /* Field: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['label'] = 'Indicators set(s)';
  $handler->display->display_options['fields']['field_jeux_indicateur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jeux_indicateur']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_jeux_indicateur']['bypass_access'] = 0;
  /* Field: Indexed Nœud: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee']['id'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_valeurannee']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valeurannee']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_valeurannee']['display'] = 'view';
  $handler->display->display_options['fields']['field_valeurannee']['view_mode'] = 'full';
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[title]<br\\>
[field_intitule_court]<br\\>
<div class="valeurindic">[field_valeurannee]<br\\></div>
<div class="jeuindic">[field_jeux_indicateur]</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    128 => '128',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: SUEB */
  $handler = $view->new_display('attachment', 'SUEB', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les indicateurs européens';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_collecvisuels' => 'field_collecvisuels',
    'title' => 'title',
    'field_intitule_court' => 'field_intitule_court',
    'field_jeux_indicateur' => 'field_jeux_indicateur',
    'field_valeurannee' => 'field_valeurannee',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_collecvisuels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intitule_court' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jeux_indicateur' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_valeurannee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Les indicateurs européens';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Visuels */
  $handler->display->display_options['fields']['field_collecvisuels']['id'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_collecvisuels']['field'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['label'] = '';
  $handler->display->display_options['fields']['field_collecvisuels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collecvisuels']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_collecvisuels']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_collecvisuels']['display'] = 'view';
  $handler->display->display_options['fields']['field_collecvisuels']['view_mode'] = 'visuels_indicateurs';
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = '';
  $handler->display->display_options['fields']['field_intitule_court']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intitule_court']['element_label_colon'] = FALSE;
  /* Field: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jeux_indicateur']['view_mode'] = 'full';
  /* Field: Indexed Nœud: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee']['id'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_valeurannee']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valeurannee']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_valeurannee']['display'] = 'view';
  $handler->display->display_options['fields']['field_valeurannee']['view_mode'] = 'full';
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[title]<br\\>
[field_intitule_court]<br\\>
<div class="valeurindic">[field_valeurannee]<br\\></div>
<div class="jeuindic">[field_jeux_indicateur]</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    205 => '205',
    206 => '206',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: CDB */
  $handler = $view->new_display('attachment', 'CDB', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les indicateurs internationaux';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_collecvisuels' => 'field_collecvisuels',
    'title' => 'title',
    'field_intitule_court' => 'field_intitule_court',
    'field_jeux_indicateur' => 'field_jeux_indicateur',
    'field_valeurannee' => 'field_valeurannee',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_collecvisuels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intitule_court' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jeux_indicateur' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_valeurannee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Les indicateurs internationaux';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Visuels */
  $handler->display->display_options['fields']['field_collecvisuels']['id'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_collecvisuels']['field'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['label'] = '';
  $handler->display->display_options['fields']['field_collecvisuels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collecvisuels']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_collecvisuels']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_collecvisuels']['display'] = 'view';
  $handler->display->display_options['fields']['field_collecvisuels']['view_mode'] = 'visuels_indicateurs';
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = '';
  $handler->display->display_options['fields']['field_intitule_court']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intitule_court']['element_label_colon'] = FALSE;
  /* Field: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jeux_indicateur']['view_mode'] = 'full';
  /* Field: Indexed Nœud: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee']['id'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_valeurannee']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valeurannee']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_valeurannee']['display'] = 'view';
  $handler->display->display_options['fields']['field_valeurannee']['view_mode'] = 'full';
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[title]<br\\>
[field_intitule_court]<br\\>
<div class="valeurindic">[field_valeurannee]<br\\></div>
<div class="jeuindic">[field_jeux_indicateur]</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    204 => '204',
    206 => '206',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Tableau 1 : synthese et outremer */
  $handler = $view->new_display('page', 'Tableau 1 : synthese et outremer', 'tableau1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Le jeu d’indicateurs SNB - Synthèse (dont « Spécificités outre-mer »)';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_collecvisuels' => 'field_collecvisuels',
    'title' => 'title',
    'field_intitule_court' => 'field_intitule_court',
    'field_jeux_indicateur' => 'field_jeux_indicateur',
    'field_valeurannee' => 'field_valeurannee',
    'field_couveture_geo' => 'field_couveture_geo',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_collecvisuels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intitule_court' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jeux_indicateur' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_valeurannee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_couveture_geo' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Les indicateurs développés par l&#39;observatoire national de la biodiversité sont organisés en différents <strong>jeux</strong>, chacun s&#39;attachant à couvrir l&#39;ensemble des aspects d&#39;une <strong>thématique </strong>particulière, sur la base d&#39;une série limitée de <strong>questions </strong>de société.</p><p><strong>La consultation la plus appropriée des indicateurs du site passe par l&#39;onglet &quot;<em>Les thématiques</em>&quot; ou l&#39;onglet &quot;<em>Les questions</em>&quot;, chaque indicateur y étant mis en perspective dans son contexte d&#39;utilisation et d&#39;interprétation.</strong></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Visuels */
  $handler->display->display_options['fields']['field_collecvisuels']['id'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_collecvisuels']['field'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['label'] = '';
  $handler->display->display_options['fields']['field_collecvisuels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collecvisuels']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_collecvisuels']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_collecvisuels']['display'] = 'view';
  $handler->display->display_options['fields']['field_collecvisuels']['view_mode'] = 'visuels_indicateurs';
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alt'] = 'Accéder à la fiche indicateur';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = '';
  $handler->display->display_options['fields']['field_intitule_court']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intitule_court']['element_label_colon'] = FALSE;
  /* Field: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jeux_indicateur']['view_mode'] = 'full';
  /* Field: Indexed Nœud: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee']['id'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_valeurannee']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valeurannee']['list']['separator'] = '';
  $handler->display->display_options['fields']['field_valeurannee']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_valeurannee']['display'] = 'view';
  $handler->display->display_options['fields']['field_valeurannee']['view_mode'] = 'full';
  /* Field: Indexed Nœud: Couverture géographique */
  $handler->display->display_options['fields']['field_couveture_geo']['id'] = 'field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_couveture_geo']['field'] = 'field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo']['label'] = '';
  $handler->display->display_options['fields']['field_couveture_geo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_couveture_geo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_couveture_geo']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_couveture_geo']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_couveture_geo']['bypass_access'] = 0;
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]<br\\>
[field_intitule_court]<br\\>
<div class="valeurindic">[field_valeurannee]<br\\></div>
<div class="jeuindic">[field_couveture_geo]<br\\></div>
<div class="jeuindic">[field_jeux_indicateur]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    120 => '120',
    122 => '122',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'indicateurs/export/tableau1';
  $handler->display->display_options['menu']['title'] = 'Indicateurs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Bloc */
  $handler = $view->new_display('block', 'Bloc', 'block_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_visuels' => 'field_visuels',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Le jeu d’indicateurs SNB - Synthèse (dont « Spécificités outre-mer »)';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_doc';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Visuels */
  $handler->display->display_options['fields']['field_collecvisuels']['id'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_collecvisuels']['field'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['label'] = '';
  $handler->display->display_options['fields']['field_collecvisuels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collecvisuels']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_collecvisuels']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_collecvisuels']['display'] = 'view';
  $handler->display->display_options['fields']['field_collecvisuels']['view_mode'] = 'visuels_indicateurs';
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = '';
  $handler->display->display_options['fields']['field_intitule_court']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intitule_court']['element_label_colon'] = FALSE;
  /* Field: Indexed Nœud: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee']['id'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_valeurannee']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valeurannee']['list']['separator'] = '';
  $handler->display->display_options['fields']['field_valeurannee']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_valeurannee']['display'] = 'view';
  $handler->display->display_options['fields']['field_valeurannee']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_valeurannee']['bypass_access'] = 0;
  /* Field: Indexed Nœud: Couverture géographique */
  $handler->display->display_options['fields']['field_couveture_geo']['id'] = 'field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_couveture_geo']['field'] = 'field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo']['label'] = '';
  $handler->display->display_options['fields']['field_couveture_geo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_couveture_geo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_couveture_geo']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_couveture_geo']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_couveture_geo']['bypass_access'] = 0;
  /* Field: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jeux_indicateur']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_jeux_indicateur']['bypass_access'] = 0;
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]<br\\>
[field_intitule_court]<br\\>
<div class="valeurindic">[field_valeurannee]<br\\></div>
<div class="jeuindic">[field_couveture_geo]<br\\></div>
<div class="jeuindic">[field_jeux_indicateur]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    120 => '120',
    122 => '122',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'indicateurs/export/tableau1/doc';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'tableau1' => 0,
    'page_1' => 0,
    'page_2' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Tableau 3 : Tous */
  $handler = $view->new_display('page', 'Tableau 3 : Tous', 'tableau3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tous les indicateurs';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_collecvisuels' => 'field_collecvisuels',
    'title' => 'title',
    'field_intitule_court' => 'field_intitule_court',
    'field_jeux_indicateur' => 'field_jeux_indicateur',
    'field_valeurannee' => 'field_valeurannee',
    'field_couveture_geo' => 'field_couveture_geo',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_collecvisuels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intitule_court' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jeux_indicateur' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_valeurannee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_couveture_geo' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Les indicateurs développés par l&#39;observatoire national de la biodiversité sont organisés en différents <strong>jeux</strong>, chacun s&#39;attachant à couvrir l&#39;ensemble des aspects d&#39;une <strong>thématique </strong>particulière, sur la base d&#39;une série limitée de <strong>questions </strong>de société.</p><p><strong>La consultation la plus appropriée des indicateurs du site passe par l&#39;onglet &quot;<em>Les thématiques</em>&quot; ou l&#39;onglet &quot;<em>Les questions</em>&quot;, chaque indicateur y étant mis en perspective dans son contexte d&#39;utilisation et d&#39;interprétation.</strong></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Visuels */
  $handler->display->display_options['fields']['field_collecvisuels']['id'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_collecvisuels']['field'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['label'] = '';
  $handler->display->display_options['fields']['field_collecvisuels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collecvisuels']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_collecvisuels']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_collecvisuels']['display'] = 'view';
  $handler->display->display_options['fields']['field_collecvisuels']['view_mode'] = 'visuels_indicateurs';
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alt'] = 'Accéder à la fiche indicateur';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = '';
  $handler->display->display_options['fields']['field_intitule_court']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intitule_court']['element_label_colon'] = FALSE;
  /* Field: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jeux_indicateur']['view_mode'] = 'full';
  /* Field: Indexed Nœud: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee']['id'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_valeurannee']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valeurannee']['list']['separator'] = '';
  $handler->display->display_options['fields']['field_valeurannee']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_valeurannee']['display'] = 'view';
  $handler->display->display_options['fields']['field_valeurannee']['view_mode'] = 'full';
  /* Field: Indexed Nœud: Couverture géographique */
  $handler->display->display_options['fields']['field_couveture_geo']['id'] = 'field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_couveture_geo']['field'] = 'field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo']['label'] = '';
  $handler->display->display_options['fields']['field_couveture_geo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_couveture_geo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_couveture_geo']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_couveture_geo']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_couveture_geo']['bypass_access'] = 0;
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]<br\\>
[field_intitule_court]<br\\>
<div class="valeurindic">[field_valeurannee]<br\\></div>
<div class="jeuindic">[field_couveture_geo]<br\\></div>
<div class="jeuindic">[field_jeux_indicateur]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    120 => '120',
    122 => '122',
    123 => '123',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'indicateurs/export/tableau3';
  $handler->display->display_options['menu']['title'] = 'Indicateurs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Tableau 2 : Nature */
  $handler = $view->new_display('page', 'Tableau 2 : Nature', 'tableau2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Le jeu d’indicateurs SNB - Nature';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_collecvisuels' => 'field_collecvisuels',
    'title' => 'title',
    'field_intitule_court' => 'field_intitule_court',
    'field_jeux_indicateur' => 'field_jeux_indicateur',
    'field_valeurannee' => 'field_valeurannee',
    'field_couveture_geo' => 'field_couveture_geo',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_collecvisuels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intitule_court' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jeux_indicateur' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_valeurannee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_couveture_geo' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Les indicateurs développés par l&#39;observatoire national de la biodiversité sont organisés en différents <strong>jeux</strong>, chacun s&#39;attachant à couvrir l&#39;ensemble des aspects d&#39;une <strong>thématique </strong>particulière, sur la base d&#39;une série limitée de <strong>questions </strong>de société.</p><p><strong>La consultation la plus appropriée des indicateurs du site passe par l&#39;onglet &quot;<em>Les thématiques</em>&quot; ou l&#39;onglet &quot;<em>Les questions</em>&quot;, chaque indicateur y étant mis en perspective dans son contexte d&#39;utilisation et d&#39;interprétation.</strong></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Visuels */
  $handler->display->display_options['fields']['field_collecvisuels']['id'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_collecvisuels']['field'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['label'] = '';
  $handler->display->display_options['fields']['field_collecvisuels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collecvisuels']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_collecvisuels']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_collecvisuels']['display'] = 'view';
  $handler->display->display_options['fields']['field_collecvisuels']['view_mode'] = 'visuels_indicateurs';
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alt'] = 'Accéder à la fiche indicateur';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = '';
  $handler->display->display_options['fields']['field_intitule_court']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intitule_court']['element_label_colon'] = FALSE;
  /* Field: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jeux_indicateur']['view_mode'] = 'full';
  /* Field: Indexed Nœud: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee']['id'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_valeurannee']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valeurannee']['list']['separator'] = '';
  $handler->display->display_options['fields']['field_valeurannee']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_valeurannee']['display'] = 'view';
  $handler->display->display_options['fields']['field_valeurannee']['view_mode'] = 'full';
  /* Field: Indexed Nœud: Couverture géographique */
  $handler->display->display_options['fields']['field_couveture_geo']['id'] = 'field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_couveture_geo']['field'] = 'field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo']['label'] = '';
  $handler->display->display_options['fields']['field_couveture_geo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_couveture_geo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_couveture_geo']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_couveture_geo']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_couveture_geo']['bypass_access'] = 0;
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]<br\\>
[field_intitule_court]<br\\>
<div class="valeurindic">[field_valeurannee]<br\\></div>
<div class="jeuindic">[field_couveture_geo]<br\\></div>
<div class="jeuindic">[field_jeux_indicateur]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    123 => '123',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'indicateurs/export/tableau2';
  $handler->display->display_options['menu']['title'] = 'Indicateurs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Tableau 4 : MH */
  $handler = $view->new_display('page', 'Tableau 4 : MH', 'tableau4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tous les indicateurs Milieux Humides disponibles';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_collecvisuels' => 'field_collecvisuels',
    'title' => 'title',
    'field_intitule_court' => 'field_intitule_court',
    'field_jeux_indicateur' => 'field_jeux_indicateur',
    'field_valeurannee' => 'field_valeurannee',
    'field_couveture_geo' => 'field_couveture_geo',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_collecvisuels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intitule_court' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jeux_indicateur' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_valeurannee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_couveture_geo' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Les indicateurs développés par l&#39;observatoire national de la biodiversité sont organisés en différents <strong>jeux</strong>, chacun s&#39;attachant à couvrir l&#39;ensemble des aspects d&#39;une <strong>thématique </strong>particulière, sur la base d&#39;une série limitée de <strong>questions </strong>de société.</p><p><strong>La consultation la plus appropriée des indicateurs du site passe par l&#39;onglet &quot;<em>Les thématiques</em>&quot; ou l&#39;onglet &quot;<em>Les questions</em>&quot;, chaque indicateur y étant mis en perspective dans son contexte d&#39;utilisation et d&#39;interprétation.</strong></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Visuels */
  $handler->display->display_options['fields']['field_collecvisuels']['id'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_collecvisuels']['field'] = 'field_collecvisuels';
  $handler->display->display_options['fields']['field_collecvisuels']['label'] = '';
  $handler->display->display_options['fields']['field_collecvisuels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collecvisuels']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_collecvisuels']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_collecvisuels']['display'] = 'view';
  $handler->display->display_options['fields']['field_collecvisuels']['view_mode'] = 'visuels_indicateurs';
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alt'] = 'Accéder à la fiche indicateur';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Nœud: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = '';
  $handler->display->display_options['fields']['field_intitule_court']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intitule_court']['element_label_colon'] = FALSE;
  /* Field: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jeux_indicateur']['view_mode'] = 'full';
  /* Field: Indexed Nœud: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee']['id'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_valeurannee']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valeurannee']['list']['separator'] = '';
  $handler->display->display_options['fields']['field_valeurannee']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_valeurannee']['display'] = 'view';
  $handler->display->display_options['fields']['field_valeurannee']['view_mode'] = 'full';
  /* Field: Indexed Nœud: Couverture géographique */
  $handler->display->display_options['fields']['field_couveture_geo']['id'] = 'field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['fields']['field_couveture_geo']['field'] = 'field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo']['label'] = '';
  $handler->display->display_options['fields']['field_couveture_geo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_couveture_geo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_couveture_geo']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_couveture_geo']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_couveture_geo']['bypass_access'] = 0;
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]<br\\>
[field_intitule_court]<br\\>
<div class="valeurindic">[field_valeurannee]<br\\></div>
<div class="jeuindic">[field_couveture_geo]<br\\></div>
<div class="jeuindic">[field_jeux_indicateur]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    125 => '125',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_indicateurs';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'indicateurs/export/tableau4';
  $handler->display->display_options['menu']['title'] = 'Indicateurs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['recherche_indicateurs'] = $view;

  $view = new view();
  $view->name = 'recherche_questions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_search_questions';
  $view->human_name = 'Recherche Questions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = ' Biodiversity & society, questions asked at the ONB';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_questionvisuel' => 'field_questionvisuel',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_questionvisuel' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Les questions ci-dessous ont été élaborées dans le cadre de la <a href="http://www.naturefrance.fr/actions/reunion-thematique-biodiversite-milieux-marins-et-littoraux" target="_blank">réunion thématique &quot;Biodiversité &amp; milieux marins et littoraux&quot;</a>.
Remarque : il s\'agit de la première publication de ces questions, qui sont donc susceptibles d\'évoluer au fil de la maturation de la réflexion ayant servi pour la rédaction des pages &quot;<em>Questions</em>&quot;  ci-dessous dans le périmètre de la <a href="http://indicateurs-biodiversite.naturefrance.fr/thematiques/biodiversite-milieux-marins-et-littoraux">thématique définie</a>. </p>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Indexed Nœud: Visuel */
  $handler->display->display_options['fields']['field_questionvisuel']['id'] = 'field_questionvisuel';
  $handler->display->display_options['fields']['field_questionvisuel']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['fields']['field_questionvisuel']['field'] = 'field_questionvisuel';
  $handler->display->display_options['fields']['field_questionvisuel']['label'] = '';
  $handler->display->display_options['fields']['field_questionvisuel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_questionvisuel']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_questionvisuel']['settings'] = array(
    'image_style' => 'square_thumbnail_80',
    'image_link' => '',
  );
  /* Field: Indexed Nœud: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Sort criterion: Indexed Nœud: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    128 => '128',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_jeux_indicateur',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'hide';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_jeux_indicateur' => 'field_jeux_indicateur',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_jeux_indicateur' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>L&#39;observatoire national de la biodiversité a fait le choix de présenter les <strong>indicateurs </strong>en les mobilisant en éclairage de <strong>questions de société</strong> explicitées pour différentes <strong>thématiques</strong>. Pour faciliter leur appropriation, les jeux d&#39;indicateurs sont volontairement limités à quelques dizaines par thématique. Vous pouvez retrouver la présentation des thématiques dans <a href="http://indicateurs-biodiversite.naturefrance.fr/thematiques/toutes">la rubrique qui leur est consacrée</a>.</p><p>La première série de questions a été élaborée en 2012 sur la base de la <a href="http://www.naturefrance.fr/onb/presentation-de-lonb/contexte-et-enjeux/la-strategie-nationale-pour-la-biodiversite-snb" target="_blank">stratégie nationale pour la biodiversité</a>. Elle s&#39;attache à traiter de manière transversale des différents objectifs retenus.</p><p>Les questions liées aux <strong>stratégies </strong>sont issues des documents et travaux liés à leur adoption.</p><p>Les questions liées aux <strong>thématiques internes</strong> à l&#39;ONB sont peu à peu co-construites avec les acteurs de chaque sphère d&#39;intérêt liée à la thématique. Comme les indicateurs, les questions peuvent évoluer et s&#39;enrichir dans le temps au fur et à mesure de la maturation de la réflexion, les progrès de la connaissance et la disponibilité des données.</p><p>[collapse collapsed title=En savoir plus sur l&#39;organisation des questions]</p><p style="margin-top: 0px; margin-right: 0px; margin-bottom: 20px; margin-left: 0px; padding-top: 0px; padding-right: 0px; padding-bottom: 0px; padding-left: 0px; border-top-width: 0px; border-right-width: 0px; border-bottom-width: 0px; border-left-width: 0px; border-style: initial; border-color: initial; outline-width: 0px; outline-style: initial; outline-color: initial; font-size: 13px; vertical-align: baseline; font: inherit; ">Pour chaque question, les indicateurs sélectionnés peuvent apparaître sour trois formes :</p><ul><li><strong style="margin-top: 0px; margin-right: 0px; margin-bottom: 0px; margin-left: 0px; padding-top: 0px; padding-right: 0px; padding-bottom: 0px; padding-left: 0px; border-top-width: 0px; border-right-width: 0px; border-bottom-width: 0px; border-left-width: 0px; border-style: initial; border-color: initial; outline-width: 0px; outline-style: initial; outline-color: initial; font-size: 13px; vertical-align: baseline; font: inherit; font-weight: bold; ">mis en lumière par une rubrique &quot;<em>Zoom sur...</em>&quot;</strong>&nbsp;pour des indicateurs considérés comme emblématiques du sujet traité par la question ;</li><li><strong style="margin-top: 0px; margin-right: 0px; margin-bottom: 0px; margin-left: 0px; padding-top: 0px; padding-right: 0px; padding-bottom: 0px; padding-left: 0px; border-top-width: 0px; border-right-width: 0px; border-bottom-width: 0px; border-left-width: 0px; border-style: initial; border-color: initial; outline-width: 0px; outline-style: initial; outline-color: initial; font-size: 13px; vertical-align: baseline; font: inherit; font-weight: bold; ">présentés avec leur visuel&nbsp;</strong>pour les indicateurs principaux mobilisés dans les différentes sous-rubriques ;</li><li><strong style="margin-top: 0px; margin-right: 0px; margin-bottom: 0px; margin-left: 0px; padding-top: 0px; padding-right: 0px; padding-bottom: 0px; padding-left: 0px; border-top-width: 0px; border-right-width: 0px; border-bottom-width: 0px; border-left-width: 0px; border-style: initial; border-color: initial; outline-width: 0px; outline-style: initial; outline-color: initial; font-size: 13px; vertical-align: baseline; font: inherit; font-weight: bold; ">cités avec leur dernière valeur disponible&nbsp;</strong>pour les indicateurs complémentaires en lien avec la rubrique.</li></ul><p>Au-delà de ce choix éditorial, tous les indicateurs peuvent bien sûr être consultés dans leur intégralité sur la page de description particulière qui est consacrée à chacun, accessible directement dans la rubrique <a href="http://indicateurs-biodiversite.naturefrance.fr/indicateurs/tous">&quot;<em>Les indicateurs</em>&quot;</a>.</p><p>[/collapsed]</p><p>Un porte-folio de synthèse a été édité en impression papier en 2012. Il est <a href="http://indicateurs-biodiversite.naturefrance.fr/sites/default/files/fichiers/questions/ONB_Porte-folio_Ind-SNB.zip" target="_blank">disponible au téléchargement</a> (<u><strong>ATTENTION</strong></u>, pour les informations et valeurs à jour, se reporter au site internet à la rubrique correspondant à la question traitée).</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['relationships']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['relationships']['field_jeux_indicateur']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['relationships']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['relationships']['field_jeux_indicateur']['label'] = 'Indicators set(s)';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['label'] = '';
  $handler->display->display_options['fields']['field_jeux_indicateur']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_jeux_indicateur']['element_wrapper_class'] = 'hide';
  $handler->display->display_options['fields']['field_jeux_indicateur']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jeux_indicateur']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_jeux_indicateur']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    120 => '120',
    122 => '122',
    123 => '123',
    204 => '204',
    205 => '205',
    124 => '124',
    206 => '206',
    125 => '125',
    148 => '148',
    131 => '131',
    130 => '130',
    127 => '127',
    126 => '126',
    121 => '121',
    128 => '128',
    149 => '149',
    129 => '129',
    203 => '203',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['path'] = 'questions/toutes';
  $handler->display->display_options['menu']['title'] = 'Les questions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Fichier attaché SNB */
  $handler = $view->new_display('attachment', 'Fichier attaché SNB', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_questionvisuel' => 'field_questionvisuel',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_questionvisuel' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Stratégie nationale pour la biodiversité (SNB) - Synthèse';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    120 => '120',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_4' => 0,
    'page_5' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Fichier attaché Foret */
  $handler = $view->new_display('attachment', 'Fichier attaché Foret', 'attachment_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_questionvisuel' => 'field_questionvisuel',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_questionvisuel' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Biodiversité & forêt';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    121 => '121',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_4' => 0,
    'page_5' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Fichier attaché MEau douce */
  $handler = $view->new_display('attachment', 'Fichier attaché MEau douce', 'attachment_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_questionvisuel' => 'field_questionvisuel',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_questionvisuel' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Biodiversité & milieux d\'eau douce';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    130 => '130',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_2' => 0,
    'page_5' => 0,
    'page_1' => 0,
    'page_4' => 0,
    'page_3' => 0,
    'page_with_page_title_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Fichier attaché MH */
  $handler = $view->new_display('attachment', 'Fichier attaché MH', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_questionvisuel' => 'field_questionvisuel',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_questionvisuel' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Biodiversité & milieux humides';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    125 => '125',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_4' => 0,
    'page_5' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Fichier attaché MMarinsLittoraux */
  $handler = $view->new_display('attachment', 'Fichier attaché MMarinsLittoraux', 'attachment_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_questionvisuel' => 'field_questionvisuel',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_questionvisuel' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Biodiversité & milieux marins et littoraux';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_2' => 0,
    'page_5' => 0,
    'page_1' => 0,
    'page_4' => 0,
    'page_3' => 0,
    'page_with_page_title_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Fichier attaché CDB */
  $handler = $view->new_display('attachment', 'Fichier attaché CDB', 'attachment_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_questionvisuel' => 'field_questionvisuel',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_questionvisuel' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Convention sur la diversité biologique (CDB)';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    204 => '204',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_4' => 0,
    'page_5' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Page SNB */
  $handler = $view->new_display('page', 'Page SNB', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_questionvisuel' => 'field_questionvisuel',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_questionvisuel' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p style="text-align: center;"><span style="color: rgb(9, 107, 0); font-size: 18.2112px; font-weight: bold; text-align: -webkit-center;">Les questions liées à la stratégie nationale pour la biodiversité (SNB) dans son ensemble</span></p>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    120 => '120',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['path'] = 'questions/snb';
  $handler->display->display_options['menu']['title'] = 'Les questions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Page Forêt */
  $handler = $view->new_display('page', 'Page Forêt', 'page_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_questionvisuel' => 'field_questionvisuel',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_questionvisuel' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Les questions liées à la thématique "Biodiversité & forêt"';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Les pages &quot;<em>Question</em>&quot; accessibles ci-dessous ont été élaborées dans le cadre de la <a href="http://www.naturefrance.fr/actions/reunion-thematique-biodiversite-foret" target="_blank">réunion thématique &quot;Biodiversité &amp; forêt&quot;</a>, dans le champ du <a href="http://indicateurs-biodiversite.naturefrance.fr/thematiques/biodiversite-foret" target="_self">périmètre défini pour cette thématique</a>.</p>
<p>Leur élaboration s&#39;est effectuée dans le cadre du projet <strong>Questind</strong>, dont le <a href="http://www.naturefrance.fr/sites/default/files/fichiers/ressources/pdf/140408_questind-rapport_final.pdf" target="_blank">rapport final est disponible au téléchargement ici</a>.</p>
<p>Sont également disponibles au téléchargement les <a href="http://www.naturefrance.fr/sites/default/files/fichiers/ressources/pdf/140318_bibliographie_questions_foret.pdf" target="_blank">références des principaux éléments de bibliographie</a> ayant servi pour la rédaction de ces pages &quot;<em>Question</em>&quot;.</p>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    121 => '121',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['filters']['search_api_language']['expose']['operator_id'] = 'search_api_language_op';
  $handler->display->display_options['filters']['search_api_language']['expose']['label'] = 'Item language';
  $handler->display->display_options['filters']['search_api_language']['expose']['operator'] = 'search_api_language_op';
  $handler->display->display_options['filters']['search_api_language']['expose']['identifier'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['search_api_language']['expose']['reduce'] = 0;
  $handler->display->display_options['path'] = 'questions/foret';
  $handler->display->display_options['menu']['title'] = 'Les questions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Page ZH */
  $handler = $view->new_display('page', 'Page ZH', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_questionvisuel' => 'field_questionvisuel',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_questionvisuel' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Les questions liées à la thématique "Biodiversité & milieux humides"';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="view-header">
	<p>Les pages &quot;<em>Question</em>&quot; accessibles ci-dessous ont été élaborées dans le cadre de la <a href="http://www.naturefrance.fr/actions/reunion-thematique-biodiversite-milieux-humides" target="_blank">réunion thématique &quot;<em>Biodiversité &amp; milieux humides</em>&quot;</a> dans le champ du <a href="http://indicateurs-biodiversite.naturefrance.fr/thematiques/biodiversite-milieux-humides" target="_self">périmètre défini pour cette thématique</a>.</p>
	<p>Sont également disponibles au téléchargement les <a href="http://indicateurs-biodiversite.naturefrance.fr/les-rapports-de-lobservatoire-des-milieux-humides" target="_self">rapports de l&#39;observatoire des milieux humides</a>.</p>
</div>
<p>&nbsp;</p>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    125 => '125',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['path'] = 'questions/zones-humides';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Page CDB */
  $handler = $view->new_display('page', 'Page CDB', 'page_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_questionvisuel' => 'field_questionvisuel',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_questionvisuel' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><span style="font-size: 13.008px;">Les questions ci-dessous sont issues de la <a href="http://indicateurs-biodiversite.naturefrance.fr/fr/thematiques/convention-sur-la-diversite-biologique-cdb">Convention sur la biodiversité biologique</a>.</span></p>
<p style="text-align: center;"><span style="color: rgb(9, 107, 0); font-size: 18.2112px; font-weight: bold; text-align: -webkit-center;">Les questions liées à la Convention sur la diversité biologique (CDB)</span></p>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    204 => '204',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['path'] = 'questions/cdb';
  $handler->display->display_options['menu']['title'] = 'Les questions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Page OM */
  $handler = $view->new_display('page', 'Page OM', 'page_3');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    122 => '122',
  );
  $handler->display->display_options['path'] = 'questions/outremer';
  $handler->display->display_options['menu']['title'] = 'Les questions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Page MMarinsLittoraux */
  $handler = $view->new_display('page', 'Page MMarinsLittoraux', 'page_9');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_questionvisuel' => 'field_questionvisuel',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_questionvisuel' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><span style="font-size: 13.008px;">Les questions ci-dessous ont été élaborées dans le cadre de la&nbsp;</span><a href="http://www.naturefrance.fr/actions/reunion-thematique-biodiversite-milieux-marins-et-littoraux" style="margin: 0px; padding: 0px; border: 0px; outline: 0px; vertical-align: baseline; font-variant-numeric: inherit; font-stretch: inherit; font-size: 13.008px; line-height: inherit;" target="_blank">réunion thématique &quot;<em>Biodiversité &amp; milieux marins et littoraux</em>&quot;</a><span style="font-size: 13.008px;"> dans le champ du</span><span style="font-size: 13.008px;"> </span><a href="http://indicateurs-biodiversite.naturefrance.fr/thematiques/biodiversite-milieux-marins-et-littoraux" style="margin: 0px; padding: 0px; border: 0px; outline: 0px; vertical-align: baseline; font-variant-numeric: inherit; font-stretch: inherit; font-size: 13.008px; line-height: inherit;">périmètre de la thématique définie</a><span style="font-size: 13.008px;">.</span></p>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    128 => '128',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['path'] = 'questions/milieux_marins_et_littoraux';
  $handler->display->display_options['menu']['title'] = 'Les questions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Page Milieux d'eau douce */
  $handler = $view->new_display('page', 'Page Milieux d\'eau douce', 'page_8');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_questionvisuel' => 'field_questionvisuel',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_questionvisuel' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Les questions liées à la thématique "Biodiversité & milieux d\'eau douce"';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Les questions ci-dessous ont été élaborées dans le cadre de la <a href="http://www.naturefrance.fr/actions/reunion-thematique-biodiversite-milieux-deau-douce">réunion thématique &quot;Biodiversité &amp; milieux d&#39;eau douce</a>&quot;.</p>
<p><em>Remarque </em>: il s&#39;agit de la première publication de ces questions, qui sont donc susceptibles d&#39;évoluer au fil de la maturation de la réflexion ayant servi pour la rédaction des pages &quot;<em>Question</em>&quot; ci-dessous dans le <a href="http://indicateurs-biodiversite.naturefrance.fr/thematiques/biodiversite-milieux-deau-douce">périmètre de la thématique définie</a>.</p>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Nœud: Type de contenu */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Nœud: Jeu(x) d'indicateurs */
  $handler->display->display_options['filters']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur']['value'] = array(
    130 => '130',
  );
  /* Filter criterion: Indexed Nœud: Statut */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Nœud: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_questions';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['path'] = 'questions/milieux-d-eau-douce';
  $handler->display->display_options['menu']['title'] = 'Les questions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['recherche_questions'] = $view;

  $view = new view();
  $view->name = 'recherche_thematique';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_search_thematiques';
  $view->human_name = 'Recherche thematique';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Les thématiques';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_date_de_publication_du_jeu']['id'] = 'field_date_de_publication_du_jeu';
  $handler->display->display_options['fields']['field_date_de_publication_du_jeu']['table'] = 'search_api_index_search_thematiques';
  $handler->display->display_options['fields']['field_date_de_publication_du_jeu']['field'] = 'field_date_de_publication_du_jeu';
  $handler->display->display_options['fields']['field_date_de_publication_du_jeu']['label'] = '';
  $handler->display->display_options['fields']['field_date_de_publication_du_jeu']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_de_publication_du_jeu']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_thematiques';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]<br\\>
<div class="valeurindic">Date de publication du jeu d\'indicateurs : [field_date_de_publication_du_jeu]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_search_thematiques';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_thematiques';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'thematique' => 'thematique',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'thematiques';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Les thématiques';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['recherche_thematique'] = $view;

  $view = new view();
  $view->name = 'recherche_thematiques';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_search_term_thematique';
  $view->human_name = 'Recherche Thematiques';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Les thématiques';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Relationship: Indexed Terme de taxonomie: Vocabulaire */
  $handler->display->display_options['relationships']['vocabulary']['id'] = 'vocabulary';
  $handler->display->display_options['relationships']['vocabulary']['table'] = 'search_api_index_search_term_thematique';
  $handler->display->display_options['relationships']['vocabulary']['field'] = 'vocabulary';
  /* Field: Indexed Terme de taxonomie: Visuel */
  $handler->display->display_options['fields']['field_visuel']['id'] = 'field_visuel';
  $handler->display->display_options['fields']['field_visuel']['table'] = 'search_api_index_search_term_thematique';
  $handler->display->display_options['fields']['field_visuel']['field'] = 'field_visuel';
  $handler->display->display_options['fields']['field_visuel']['label'] = '';
  $handler->display->display_options['fields']['field_visuel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visuel']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_visuel']['settings'] = array(
    'image_style' => 'square_thumbnail_80',
    'image_link' => '',
  );
  /* Field: Indexed Terme de taxonomie: Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_search_term_thematique';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_entity'] = 1;
  /* Sort criterion: Indexed Terme de taxonomie: Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'search_api_index_search_term_thematique';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_visuel' => 'field_visuel',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_visuel' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Les indicateurs développés par l&#39;observatoire national de la biodiversité sont organisés en différents&nbsp;<strong>jeux</strong>, chacun s&#39;attachant à couvrir l&#39;ensemble des aspects d&#39;une&nbsp;<strong>thématique&nbsp;</strong>particulière. Ces thématiques peuvent être de deux natures différentes :</p>
<ul>
	<li>se référer à une&nbsp;<strong>stratégie&nbsp;politique identifiée autre que la Stratégie nationale pour la biodiversité (SNB)</strong>, avec éventuellement ses questions explicites avec ses thèmes, ses orientations, ses objectifs et ses indicateurs (ou sujets d&#39;indicateurs) ;</li>
	<li>avoir pour origine le <strong>processus de réflexion et d&#39;orientation de l&#39;ONB en vue de décomposer les différents objets traités par la SNB</strong> ; ces thématiques sont identifiées par les acteurs comme ayant une importance particulièrement forte en termes d&#39;enjeux liés à la préservation et la valorisation de la biodiversité, et nécessitant par conséquent le développement d&#39;indicateurs plus spécialisés et plus nombreux sur ces thématiques.</li>
</ul>
<p>Les thématiques présentées sont organisées <strong>par échelle territoriale</strong>. L&#39;ONB développe des indicateurs essentiellement pour le niveau <strong>national</strong>, mais ses indicateurs peuvent être mobilisés pour alimenter les rapports de la France dans le cadre de conventions <strong>européennes </strong>ou <strong>internationales</strong>. De même, ses indicateurs peuvent être utilisés au niveau <strong>infra-national</strong>, par exemple au niveau <strong>régional</strong>. Il produit par ailleurs des indicateurs simples au niveau <strong>local </strong>via le Portrait de la biodiversité communale. C&#39;est pourquoi il est intéressant de présenter ces diverses stratégies ou thématiques vis-à-vis desquelles l&#39;ONB est appelé à se positionner lorsqu&#39;il élabore et renseigne ses indicateurs.</p>
<p>Les thématiques déjà examinées et documentées par l&#39;ONB concernent :</p>
<ul>
	<li>l&#39;échelle internationale :
		<ul>
			<li>la <a href="http://indicateurs-biodiversite.naturefrance.fr/fr/thematiques/convention-sur-la-diversite-biologique-cdb">Convention sur la diversité biologique (CDB)</a></li>
			<li>la <a href="http://indicateurs-biodiversite.naturefrance.fr/fr/thematiques/convention-de-ramsar-sur-les-zones-humides">Convention de RAMSAR sur les zones humides</a></li>
		</ul>
	</li>
	<li>l&#39;échelle européenne :
		<ul>
			<li>la <a href="http://indicateurs-biodiversite.naturefrance.fr/fr/thematiques/strategie-de-lunion-europeenne-pour-la-biodiversite-sueb">Stratégie de l&#39;union européenne pour la biodiversité</a></li>
		</ul>
	</li>
	<li>l&#39;échelle nationale :
		<ul>
			<li>la <a href="http://indicateurs-biodiversite.naturefrance.fr/fr/la-strategie-nationale-pour-la-biodiversite-snb">Stratégie nationale pour la biodiversité (SNB) et ses thématiques</a></li>
		</ul>
	</li>
	<li>l&#39;échelle régionale et infra-régionale (territoires de projets)</li>
	<li>l&#39;échelle locale (communale) :
		<ul>
			<li>le <a href="http://indicateurs-biodiversite.naturefrance.fr/locale-le-portrait-de-la-biodiversite-communale">Portrait de la <span class="lexicon-term" title=" Diversité des organismes vivants, qui s’apprécie en considérant la diversité des espèces, celle des gènes au sein de chaque espèce, ainsi que l’organisation et la répartition des écosystèmes.
 "><abbr title=" Diversité des organismes vivants, qui s’apprécie en considérant la diversité des espèces, celle des gènes au sein de chaque espèce, ainsi que l’organisation et la répartition des écosystèmes.
 ">biodiversité</abbr></span> communale</a></li>
		</ul>
	</li>
</ul>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Terme de taxonomie: Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'search_api_index_search_term_thematique';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Terme de taxonomie: Type de thématique */
  $handler->display->display_options['filters']['field_type_de_thematique']['id'] = 'field_type_de_thematique';
  $handler->display->display_options['filters']['field_type_de_thematique']['table'] = 'search_api_index_search_term_thematique';
  $handler->display->display_options['filters']['field_type_de_thematique']['field'] = 'field_type_de_thematique';
  $handler->display->display_options['filters']['field_type_de_thematique']['value'] = array(
    202 => '202',
    201 => '201',
  );
  $handler->display->display_options['path'] = 'thematiques/toutes';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Les thématiques';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['recherche_thematiques'] = $view;

  $view = new view();
  $view->name = 'reference_producteur';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'reference_producteur';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Pour sélectionner un producteur, cliquez sur son nom.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nom';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Contenu: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Contenu: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'producteur' => 'producteur',
  );

  /* Display: Reference dialog Search */
  $handler = $view->new_display('references_dialog', 'Reference dialog Search', 'references_dialog_1');
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attach'] = array(
    0 => 'node:field_indicateur_producteur:fiche_indicateur',
  );

  /* Display: References */
  $handler = $view->new_display('references', 'References', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['reference_producteur'] = $view;

  $view = new view();
  $view->name = 'relations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Relations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Questions liées';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_jeux_indicateur',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Entité référante */
  $handler->display->display_options['relationships']['reverse_field_sousquestion_indic_nom_field_collection_item']['id'] = 'reverse_field_sousquestion_indic_nom_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_sousquestion_indic_nom_field_collection_item']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_sousquestion_indic_nom_field_collection_item']['field'] = 'reverse_field_sousquestion_indic_nom_field_collection_item';
  /* Relationship: Field collection item: Entity with the Indicateur(s) (field_sousquestion_indicateur) */
  $handler->display->display_options['relationships']['field_sousquestion_indicateur_field_collection_item']['id'] = 'field_sousquestion_indicateur_field_collection_item';
  $handler->display->display_options['relationships']['field_sousquestion_indicateur_field_collection_item']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_sousquestion_indicateur_field_collection_item']['field'] = 'field_sousquestion_indicateur_field_collection_item';
  $handler->display->display_options['relationships']['field_sousquestion_indicateur_field_collection_item']['relationship'] = 'reverse_field_sousquestion_indic_nom_field_collection_item';
  /* Relationship: Field collection item: Entity with the Sous-question (field_sousquestion) */
  $handler->display->display_options['relationships']['field_sousquestion_node']['id'] = 'field_sousquestion_node';
  $handler->display->display_options['relationships']['field_sousquestion_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_sousquestion_node']['field'] = 'field_sousquestion_node';
  $handler->display->display_options['relationships']['field_sousquestion_node']['relationship'] = 'field_sousquestion_indicateur_field_collection_item';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_sousquestion_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Contenu: Thématique(s) */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'field_data_field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['relationship'] = 'field_sousquestion_node';
  $handler->display->display_options['fields']['field_jeux_indicateur']['label'] = '';
  $handler->display->display_options['fields']['field_jeux_indicateur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jeux_indicateur']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_jeux_indicateur']['delta_offset'] = '0';
  /* Sort criterion: Contenu: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_sousquestion_node';
  /* Sort criterion: Contenu: Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Contenu: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tous / Toutes';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Contenu: Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Questions - indicateur */
  $handler = $view->new_display('block', 'Questions - indicateur', 'block_1');

  /* Display: Sous-questions - question */
  $handler = $view->new_display('block', 'Sous-questions - question', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sous-questions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenu: Sous-question (field_sousquestion) */
  $handler->display->display_options['relationships']['field_sousquestion_value']['id'] = 'field_sousquestion_value';
  $handler->display->display_options['relationships']['field_sousquestion_value']['table'] = 'field_data_field_sousquestion';
  $handler->display->display_options['relationships']['field_sousquestion_value']['field'] = 'field_sousquestion_value';
  $handler->display->display_options['relationships']['field_sousquestion_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Titre */
  $handler->display->display_options['fields']['field_sousquestion_titre']['id'] = 'field_sousquestion_titre';
  $handler->display->display_options['fields']['field_sousquestion_titre']['table'] = 'field_data_field_sousquestion_titre';
  $handler->display->display_options['fields']['field_sousquestion_titre']['field'] = 'field_sousquestion_titre';
  $handler->display->display_options['fields']['field_sousquestion_titre']['relationship'] = 'field_sousquestion_value';
  $handler->display->display_options['fields']['field_sousquestion_titre']['label'] = '';
  $handler->display->display_options['fields']['field_sousquestion_titre']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sousquestion_titre']['element_label_colon'] = FALSE;
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="#[field_sousquestion_titre]">[field_sousquestion_titre] </a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contenu: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tous / Toutes';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  /* Filter criterion: Contenu: Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $export['relations'] = $view;

  $view = new view();
  $view->name = 'reverse_entity';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'reverse_entity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Entité référante */
  $handler->display->display_options['relationships']['reverse_field_sousquestion_indic_nom_field_collection_item']['id'] = 'reverse_field_sousquestion_indic_nom_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_sousquestion_indic_nom_field_collection_item']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_sousquestion_indic_nom_field_collection_item']['field'] = 'reverse_field_sousquestion_indic_nom_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_sousquestion_indic_nom_field_collection_item']['label'] = 'Field collection item referencing Contenu from field_sousquestion_indic_nom';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Contenu: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_sousquestion_indic_nom_target_id';
  /* Sort criterion: Contenu: Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: questionsindicateur */
  $handler = $view->new_display('entity_view', 'questionsindicateur', 'entity_view_1');
  $export['reverse_entity'] = $view;

  $view = new view();
  $view->name = 'rss';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'rss';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Contenu: Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actualite' => 'actualite',
    'fiche_indicateur' => 'fiche_indicateur',
    'page' => 'page',
    'question' => 'question',
  );

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'Le Flux RSS du site des Indicateurs de l\'ONB';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['path'] = 'rss.xml';
  $export['rss'] = $view;

  $view = new view();
  $view->name = 'tableau_croise_indicateurs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tableau croise indicateurs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tableau indicateurs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '20';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_orientations_principales' => 'field_orientations_principales',
    'field_objectifs_snb_principaux' => 'field_objectifs_snb_principaux',
    'field_axe_et_objectifs_cdb' => 'field_axe_et_objectifs_cdb',
    'field_objectifs_cdb' => 'field_objectifs_cdb',
    'field_axe_sueb' => 'field_axe_sueb',
    'field_objectif_sueb' => 'field_objectif_sueb',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_orientations_principales' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_objectifs_snb_principaux' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_axe_et_objectifs_cdb' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_objectifs_cdb' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_axe_sueb' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_objectif_sueb' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Relationship: Contenu: Termes de taxonomie du nœud */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'cdb' => 'cdb',
    'biais' => 0,
    'continuit_du_jeu_national' => 0,
    'couverture_g_ographique' => 0,
    'd_clinaisons_locales' => 0,
    'disponibilite' => 0,
    'echelle' => 0,
    'tags' => 0,
    'glossaire' => 0,
    'indicateurs_quivalents' => 0,
    'jeux_d_indicateurs' => 0,
    'media_folders' => 0,
    'milieux' => 0,
    'mots_cl_s' => 0,
    'niveau_d_appropriation' => 0,
    'objectifs_snb' => 0,
    'orientations_strat_giques' => 0,
    'pas_de_temps' => 0,
    'piste_d_indicateur' => 0,
    'qualit_' => 0,
    'rupture_de_s_rie' => 0,
    'sensibilit_' => 0,
    'sueb' => 0,
    'type_de_pr_sentation' => 0,
    'type_de_pression' => 0,
    'type_de_variable' => 0,
    'type_dpsir' => 0,
    'unit_de_mesure' => 0,
  );
  /* Relationship: Contenu: Axe CDB (field_axe_et_objectifs_cdb) */
  $handler->display->display_options['relationships']['field_axe_et_objectifs_cdb_tid']['id'] = 'field_axe_et_objectifs_cdb_tid';
  $handler->display->display_options['relationships']['field_axe_et_objectifs_cdb_tid']['table'] = 'field_data_field_axe_et_objectifs_cdb';
  $handler->display->display_options['relationships']['field_axe_et_objectifs_cdb_tid']['field'] = 'field_axe_et_objectifs_cdb_tid';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Contenu: Orientation(s) stratégique(s) concernée(s) */
  $handler->display->display_options['fields']['field_orientations_principales']['id'] = 'field_orientations_principales';
  $handler->display->display_options['fields']['field_orientations_principales']['table'] = 'field_data_field_orientations_principales';
  $handler->display->display_options['fields']['field_orientations_principales']['field'] = 'field_orientations_principales';
  $handler->display->display_options['fields']['field_orientations_principales']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_orientations_principales']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_orientations_principales']['delta_offset'] = '0';
  /* Field: Contenu: Objectif(s) concerné(s) principalement */
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['id'] = 'field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['table'] = 'field_data_field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['field'] = 'field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['delta_offset'] = '0';
  /* Field: Contenu: Axe CDB */
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['id'] = 'field_axe_et_objectifs_cdb';
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['table'] = 'field_data_field_axe_et_objectifs_cdb';
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['field'] = 'field_axe_et_objectifs_cdb';
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['alter']['text'] = '[node:field-axe-et-objectifs-cdb:1:name]';
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['delta_offset'] = '0';
  /* Field: Contenu: Objectifs CDB */
  $handler->display->display_options['fields']['field_objectifs_cdb']['id'] = 'field_objectifs_cdb';
  $handler->display->display_options['fields']['field_objectifs_cdb']['table'] = 'field_data_field_objectifs_cdb';
  $handler->display->display_options['fields']['field_objectifs_cdb']['field'] = 'field_objectifs_cdb';
  $handler->display->display_options['fields']['field_objectifs_cdb']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_objectifs_cdb']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_objectifs_cdb']['delta_offset'] = '0';
  /* Field: Contenu: Axe SUEB */
  $handler->display->display_options['fields']['field_axe_sueb']['id'] = 'field_axe_sueb';
  $handler->display->display_options['fields']['field_axe_sueb']['table'] = 'field_data_field_axe_sueb';
  $handler->display->display_options['fields']['field_axe_sueb']['field'] = 'field_axe_sueb';
  $handler->display->display_options['fields']['field_axe_sueb']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_axe_sueb']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_axe_sueb']['delta_offset'] = '0';
  /* Field: Contenu: Objectif SUEB */
  $handler->display->display_options['fields']['field_objectif_sueb']['id'] = 'field_objectif_sueb';
  $handler->display->display_options['fields']['field_objectif_sueb']['table'] = 'field_data_field_objectif_sueb';
  $handler->display->display_options['fields']['field_objectif_sueb']['field'] = 'field_objectif_sueb';
  $handler->display->display_options['fields']['field_objectif_sueb']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_objectif_sueb']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_objectif_sueb']['delta_offset'] = '0';
  /* Sort criterion: Contenu: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Contenu: Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Tableau1 */
  $handler = $view->new_display('page', 'Tableau1', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Correspondance des indicateurs avec les orientations et objectifs de la  SNB, de la SUEB et de la CBD';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'indicateurs/tableau1';

  /* Display: Tableau4 */
  $handler = $view->new_display('page', 'Tableau4', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Correspondance des indicateurs nationaux et européens avec les orientations et objectifs SUEB';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_axe_sueb',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = '[field_axe_sueb] [field_objectif_sueb]';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_axe_sueb' => 'field_axe_sueb',
    'field_objectif_sueb' => 'field_objectif_sueb',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_axe_sueb' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_objectif_sueb' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contenu: Axe SUEB */
  $handler->display->display_options['fields']['field_axe_sueb']['id'] = 'field_axe_sueb';
  $handler->display->display_options['fields']['field_axe_sueb']['table'] = 'field_data_field_axe_sueb';
  $handler->display->display_options['fields']['field_axe_sueb']['field'] = 'field_axe_sueb';
  $handler->display->display_options['fields']['field_axe_sueb']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_axe_sueb']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_axe_sueb']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_axe_sueb']['delta_offset'] = '0';
  /* Field: Contenu: Objectif SUEB */
  $handler->display->display_options['fields']['field_objectif_sueb']['id'] = 'field_objectif_sueb';
  $handler->display->display_options['fields']['field_objectif_sueb']['table'] = 'field_data_field_objectif_sueb';
  $handler->display->display_options['fields']['field_objectif_sueb']['field'] = 'field_objectif_sueb';
  $handler->display->display_options['fields']['field_objectif_sueb']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_objectif_sueb']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_objectif_sueb']['delta_offset'] = '0';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Contenu: Axe SUEB (field_axe_sueb) */
  $handler->display->display_options['sorts']['field_axe_sueb_tid']['id'] = 'field_axe_sueb_tid';
  $handler->display->display_options['sorts']['field_axe_sueb_tid']['table'] = 'field_data_field_axe_sueb';
  $handler->display->display_options['sorts']['field_axe_sueb_tid']['field'] = 'field_axe_sueb_tid';
  /* Sort criterion: Contenu: Objectif SUEB (field_objectif_sueb) */
  $handler->display->display_options['sorts']['field_objectif_sueb_tid']['id'] = 'field_objectif_sueb_tid';
  $handler->display->display_options['sorts']['field_objectif_sueb_tid']['table'] = 'field_data_field_objectif_sueb';
  $handler->display->display_options['sorts']['field_objectif_sueb_tid']['field'] = 'field_objectif_sueb_tid';
  /* Sort criterion: Contenu: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Contenu: Thématique(s) (field_jeux_indicateur) */
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['id'] = 'field_jeux_indicateur_tid';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['table'] = 'field_data_field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['field'] = 'field_jeux_indicateur_tid';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['value'] = array(
    204 => '204',
  );
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['vocabulary'] = 'jeux_d_indicateurs';
  /* Filter criterion: Contenu: Axe SUEB (field_axe_sueb) */
  $handler->display->display_options['filters']['field_axe_sueb_tid']['id'] = 'field_axe_sueb_tid';
  $handler->display->display_options['filters']['field_axe_sueb_tid']['table'] = 'field_data_field_axe_sueb';
  $handler->display->display_options['filters']['field_axe_sueb_tid']['field'] = 'field_axe_sueb_tid';
  $handler->display->display_options['filters']['field_axe_sueb_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_axe_sueb_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_axe_sueb_tid']['vocabulary'] = 'sueb';
  /* Filter criterion: Contenu: Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['path'] = 'indicateurs/tableau4';

  /* Display: Tableau3 */
  $handler = $view->new_display('page', 'Tableau3', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Correspondance des indicateurs nationaux avec les orientations et objectifs CBD';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_axe_et_objectifs_cdb',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_axe_et_objectifs_cdb' => 'field_axe_et_objectifs_cdb',
    'field_objectifs_cdb' => 'field_objectifs_cdb',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_axe_et_objectifs_cdb' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_objectifs_cdb' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenu: Termes de taxonomie du nœud */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'cdb' => 'cdb',
    'biais' => 0,
    'continuit_du_jeu_national' => 0,
    'couverture_g_ographique' => 0,
    'd_clinaisons_locales' => 0,
    'disponibilite' => 0,
    'echelle' => 0,
    'tags' => 0,
    'glossaire' => 0,
    'headline' => 0,
    'indicateurs_quivalents' => 0,
    'jeux_d_indicateurs' => 0,
    'media_folders' => 0,
    'milieux' => 0,
    'mots_cl_s' => 0,
    'niveau_d_appropriation' => 0,
    'objectifs_snb' => 0,
    'orientations_strat_giques' => 0,
    'pas_de_temps' => 0,
    'piste_d_indicateur' => 0,
    'qualit_' => 0,
    'rupture_de_s_rie' => 0,
    'sensibilit_' => 0,
    'statut_de_publication' => 0,
    'sueb' => 0,
    'type_de_pr_sentation' => 0,
    'type_de_pression' => 0,
    'type_de_th_matique' => 0,
    'type_de_variable' => 0,
    'type_dpsir' => 0,
    'unit_de_mesure' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contenu: Objectifs CDB */
  $handler->display->display_options['fields']['field_objectifs_cdb']['id'] = 'field_objectifs_cdb';
  $handler->display->display_options['fields']['field_objectifs_cdb']['table'] = 'field_data_field_objectifs_cdb';
  $handler->display->display_options['fields']['field_objectifs_cdb']['field'] = 'field_objectifs_cdb';
  $handler->display->display_options['fields']['field_objectifs_cdb']['alter']['text'] = '<a class="colorbox-inline" href="?width=500&height=500&inline=true#[description]">[field_objectifs_cdb]</a>';
  $handler->display->display_options['fields']['field_objectifs_cdb']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_objectifs_cdb']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_objectifs_cdb']['delta_offset'] = '0';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Indicateur';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Contenu: Axe CDB */
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['id'] = 'field_axe_et_objectifs_cdb';
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['table'] = 'field_data_field_axe_et_objectifs_cdb';
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['field'] = 'field_axe_et_objectifs_cdb';
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['label'] = '';
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['alter']['text'] = '[node:field-axe-et-objectifs-cdb:1:name]';
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_axe_et_objectifs_cdb']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Contenu: Axe CDB (field_axe_et_objectifs_cdb) */
  $handler->display->display_options['sorts']['field_axe_et_objectifs_cdb_tid']['id'] = 'field_axe_et_objectifs_cdb_tid';
  $handler->display->display_options['sorts']['field_axe_et_objectifs_cdb_tid']['table'] = 'field_data_field_axe_et_objectifs_cdb';
  $handler->display->display_options['sorts']['field_axe_et_objectifs_cdb_tid']['field'] = 'field_axe_et_objectifs_cdb_tid';
  /* Sort criterion: Contenu: Objectifs CDB (field_objectifs_cdb) */
  $handler->display->display_options['sorts']['field_objectifs_cdb_tid']['id'] = 'field_objectifs_cdb_tid';
  $handler->display->display_options['sorts']['field_objectifs_cdb_tid']['table'] = 'field_data_field_objectifs_cdb';
  $handler->display->display_options['sorts']['field_objectifs_cdb_tid']['field'] = 'field_objectifs_cdb_tid';
  /* Sort criterion: Contenu: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Contenu: Axe CDB (field_axe_et_objectifs_cdb) */
  $handler->display->display_options['filters']['field_axe_et_objectifs_cdb_tid']['id'] = 'field_axe_et_objectifs_cdb_tid';
  $handler->display->display_options['filters']['field_axe_et_objectifs_cdb_tid']['table'] = 'field_data_field_axe_et_objectifs_cdb';
  $handler->display->display_options['filters']['field_axe_et_objectifs_cdb_tid']['field'] = 'field_axe_et_objectifs_cdb_tid';
  $handler->display->display_options['filters']['field_axe_et_objectifs_cdb_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_axe_et_objectifs_cdb_tid']['value'] = '';
  $handler->display->display_options['filters']['field_axe_et_objectifs_cdb_tid']['vocabulary'] = 'cdb';
  /* Filter criterion: Contenu: Objectifs CDB (field_objectifs_cdb) */
  $handler->display->display_options['filters']['field_objectifs_cdb_tid']['id'] = 'field_objectifs_cdb_tid';
  $handler->display->display_options['filters']['field_objectifs_cdb_tid']['table'] = 'field_data_field_objectifs_cdb';
  $handler->display->display_options['filters']['field_objectifs_cdb_tid']['field'] = 'field_objectifs_cdb_tid';
  $handler->display->display_options['filters']['field_objectifs_cdb_tid']['value'] = array(
    164 => '164',
    165 => '165',
    166 => '166',
    160 => '160',
    170 => '170',
    171 => '171',
    172 => '172',
    173 => '173',
    174 => '174',
    175 => '175',
    176 => '176',
    177 => '177',
    178 => '178',
    161 => '161',
    179 => '179',
    162 => '162',
    163 => '163',
    167 => '167',
    168 => '168',
    169 => '169',
  );
  $handler->display->display_options['filters']['field_objectifs_cdb_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_objectifs_cdb_tid']['expose']['operator_id'] = 'field_objectifs_cdb_tid_op';
  $handler->display->display_options['filters']['field_objectifs_cdb_tid']['expose']['label'] = 'Objectifs CDB';
  $handler->display->display_options['filters']['field_objectifs_cdb_tid']['expose']['operator'] = 'field_objectifs_cdb_tid_op';
  $handler->display->display_options['filters']['field_objectifs_cdb_tid']['expose']['identifier'] = 'field_objectifs_cdb_tid';
  $handler->display->display_options['filters']['field_objectifs_cdb_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_objectifs_cdb_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_objectifs_cdb_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_objectifs_cdb_tid']['vocabulary'] = 'cdb';
  $handler->display->display_options['filters']['field_objectifs_cdb_tid']['hierarchy'] = 1;
  /* Filter criterion: Contenu: Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['path'] = 'indicateurs/tableau3';

  /* Display: Tableau2 */
  $handler = $view->new_display('page', 'Tableau2', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Orientations, objectifs et indicateurs de la SUEB ';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_axe_sueb',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = '[field_axe_sueb] [field_objectif_sueb]';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_objectif_sueb' => 'field_objectif_sueb',
    'title' => 'title',
    'field_axe_sueb' => 'field_axe_sueb',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_objectif_sueb' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_axe_sueb' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenu: Termes de taxonomie du nœud */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'cdb' => 'cdb',
    'biais' => 0,
    'continuit_du_jeu_national' => 0,
    'couverture_g_ographique' => 0,
    'd_clinaisons_locales' => 0,
    'disponibilite' => 0,
    'echelle' => 0,
    'tags' => 0,
    'glossaire' => 0,
    'indicateurs_quivalents' => 0,
    'jeux_d_indicateurs' => 0,
    'media_folders' => 0,
    'milieux' => 0,
    'mots_cl_s' => 0,
    'niveau_d_appropriation' => 0,
    'objectifs_snb' => 0,
    'orientations_strat_giques' => 0,
    'pas_de_temps' => 0,
    'piste_d_indicateur' => 0,
    'qualit_' => 0,
    'rupture_de_s_rie' => 0,
    'sensibilit_' => 0,
    'sueb' => 0,
    'type_de_pr_sentation' => 0,
    'type_de_pression' => 0,
    'type_de_variable' => 0,
    'type_dpsir' => 0,
    'unit_de_mesure' => 0,
  );
  /* Relationship: Terme de taxonomie: Contenu utilisant Axe SUEB */
  $handler->display->display_options['relationships']['reverse_field_axe_sueb_node']['id'] = 'reverse_field_axe_sueb_node';
  $handler->display->display_options['relationships']['reverse_field_axe_sueb_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_axe_sueb_node']['field'] = 'reverse_field_axe_sueb_node';
  $handler->display->display_options['relationships']['reverse_field_axe_sueb_node']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contenu: Objectif SUEB */
  $handler->display->display_options['fields']['field_objectif_sueb']['id'] = 'field_objectif_sueb';
  $handler->display->display_options['fields']['field_objectif_sueb']['table'] = 'field_data_field_objectif_sueb';
  $handler->display->display_options['fields']['field_objectif_sueb']['field'] = 'field_objectif_sueb';
  $handler->display->display_options['fields']['field_objectif_sueb']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_objectif_sueb']['delta_offset'] = '0';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Indicateur';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Contenu: Axe SUEB */
  $handler->display->display_options['fields']['field_axe_sueb']['id'] = 'field_axe_sueb';
  $handler->display->display_options['fields']['field_axe_sueb']['table'] = 'field_data_field_axe_sueb';
  $handler->display->display_options['fields']['field_axe_sueb']['field'] = 'field_axe_sueb';
  $handler->display->display_options['fields']['field_axe_sueb']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_axe_sueb']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_axe_sueb']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Contenu: Axe SUEB (field_axe_sueb) */
  $handler->display->display_options['sorts']['field_axe_sueb_tid']['id'] = 'field_axe_sueb_tid';
  $handler->display->display_options['sorts']['field_axe_sueb_tid']['table'] = 'field_data_field_axe_sueb';
  $handler->display->display_options['sorts']['field_axe_sueb_tid']['field'] = 'field_axe_sueb_tid';
  /* Sort criterion: Contenu: Objectif SUEB (field_objectif_sueb) */
  $handler->display->display_options['sorts']['field_objectif_sueb_tid']['id'] = 'field_objectif_sueb_tid';
  $handler->display->display_options['sorts']['field_objectif_sueb_tid']['table'] = 'field_data_field_objectif_sueb';
  $handler->display->display_options['sorts']['field_objectif_sueb_tid']['field'] = 'field_objectif_sueb_tid';
  /* Sort criterion: Contenu: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Contenu: Axe SUEB (field_axe_sueb) */
  $handler->display->display_options['filters']['field_axe_sueb_tid']['id'] = 'field_axe_sueb_tid';
  $handler->display->display_options['filters']['field_axe_sueb_tid']['table'] = 'field_data_field_axe_sueb';
  $handler->display->display_options['filters']['field_axe_sueb_tid']['field'] = 'field_axe_sueb_tid';
  $handler->display->display_options['filters']['field_axe_sueb_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_axe_sueb_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_axe_sueb_tid']['vocabulary'] = 'sueb';
  /* Filter criterion: Contenu: Thématique(s) (field_jeux_indicateur) */
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['id'] = 'field_jeux_indicateur_tid';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['table'] = 'field_data_field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['field'] = 'field_jeux_indicateur_tid';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['value'] = array(
    205 => '205',
  );
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['vocabulary'] = 'jeux_d_indicateurs';
  /* Filter criterion: Contenu: Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['path'] = 'indicateurs/tableau2';

  /* Display: Tableau0 */
  $handler = $view->new_display('page', 'Tableau0', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Orientations, objectifs et indicateurs de la SNB';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_orientations_principales',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = '[field_objectifs_snb_principaux] [field_orientations_principales]';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_objectifs_snb_principaux' => 'field_objectifs_snb_principaux',
    'title' => 'title',
    'field_orientations_principales' => 'field_orientations_principales',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_objectifs_snb_principaux' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_orientations_principales' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenu: Termes de taxonomie du nœud */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'cdb' => 'cdb',
    'biais' => 0,
    'continuit_du_jeu_national' => 0,
    'couverture_g_ographique' => 0,
    'd_clinaisons_locales' => 0,
    'disponibilite' => 0,
    'echelle' => 0,
    'tags' => 0,
    'glossaire' => 0,
    'indicateurs_quivalents' => 0,
    'jeux_d_indicateurs' => 0,
    'media_folders' => 0,
    'milieux' => 0,
    'mots_cl_s' => 0,
    'niveau_d_appropriation' => 0,
    'objectifs_snb' => 0,
    'orientations_strat_giques' => 0,
    'pas_de_temps' => 0,
    'piste_d_indicateur' => 0,
    'qualit_' => 0,
    'rupture_de_s_rie' => 0,
    'sensibilit_' => 0,
    'sueb' => 0,
    'type_de_pr_sentation' => 0,
    'type_de_pression' => 0,
    'type_de_variable' => 0,
    'type_dpsir' => 0,
    'unit_de_mesure' => 0,
  );
  /* Relationship: Terme de taxonomie: Contenu utilisant Axe SUEB */
  $handler->display->display_options['relationships']['reverse_field_axe_sueb_node']['id'] = 'reverse_field_axe_sueb_node';
  $handler->display->display_options['relationships']['reverse_field_axe_sueb_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_axe_sueb_node']['field'] = 'reverse_field_axe_sueb_node';
  $handler->display->display_options['relationships']['reverse_field_axe_sueb_node']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contenu: Objectif(s) concerné(s) principalement */
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['id'] = 'field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['table'] = 'field_data_field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['field'] = 'field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['label'] = 'Objectifs';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['delta_offset'] = '0';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Indicateur';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Contenu: Orientation(s) stratégique(s) concernée(s) */
  $handler->display->display_options['fields']['field_orientations_principales']['id'] = 'field_orientations_principales';
  $handler->display->display_options['fields']['field_orientations_principales']['table'] = 'field_data_field_orientations_principales';
  $handler->display->display_options['fields']['field_orientations_principales']['field'] = 'field_orientations_principales';
  $handler->display->display_options['fields']['field_orientations_principales']['label'] = 'Orientation stratégique';
  $handler->display->display_options['fields']['field_orientations_principales']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_orientations_principales']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_orientations_principales']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Contenu: Orientation(s) stratégique(s) concernée(s) (field_orientations_principales) */
  $handler->display->display_options['sorts']['field_orientations_principales_tid']['id'] = 'field_orientations_principales_tid';
  $handler->display->display_options['sorts']['field_orientations_principales_tid']['table'] = 'field_data_field_orientations_principales';
  $handler->display->display_options['sorts']['field_orientations_principales_tid']['field'] = 'field_orientations_principales_tid';
  /* Sort criterion: Contenu: Objectif(s) concerné(s) principalement (field_objectifs_snb_principaux) */
  $handler->display->display_options['sorts']['field_objectifs_snb_principaux_tid']['id'] = 'field_objectifs_snb_principaux_tid';
  $handler->display->display_options['sorts']['field_objectifs_snb_principaux_tid']['table'] = 'field_data_field_objectifs_snb_principaux';
  $handler->display->display_options['sorts']['field_objectifs_snb_principaux_tid']['field'] = 'field_objectifs_snb_principaux_tid';
  /* Sort criterion: Contenu: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Contenu: Orientation(s) stratégique(s) concernée(s) (field_orientations_principales) */
  $handler->display->display_options['filters']['field_orientations_principales_tid']['id'] = 'field_orientations_principales_tid';
  $handler->display->display_options['filters']['field_orientations_principales_tid']['table'] = 'field_data_field_orientations_principales';
  $handler->display->display_options['filters']['field_orientations_principales_tid']['field'] = 'field_orientations_principales_tid';
  $handler->display->display_options['filters']['field_orientations_principales_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_orientations_principales_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_orientations_principales_tid']['vocabulary'] = 'orientations_strat_giques';
  /* Filter criterion: Contenu: Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['path'] = 'indicateurs/tableau0';
  $export['tableau_croise_indicateurs'] = $view;

  $view = new view();
  $view->name = 'tableaux';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tableaux';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tableaux';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_objectifs_snb_principaux' => 'field_objectifs_snb_principaux',
    'field_objectifs_snb_secondaires' => 'field_objectifs_snb_secondaires',
    'field_code' => 'field_code',
    'title' => 'title',
    'nothing' => 'nothing',
    'field_intitule_court' => 'field_intitule_court',
    'field_valeurannee' => 'field_valeurannee',
    'field_couveture_geo' => 'field_couveture_geo',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_objectifs_snb_principaux' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_objectifs_snb_secondaires' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intitule_court' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_valeurannee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_couveture_geo' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Contenu: Objectif(s) concerné(s) principalement */
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['id'] = 'field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['table'] = 'field_data_field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['field'] = 'field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['type'] = 'taxonomy_objectifs_sans_texte';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['delta_offset'] = '0';
  /* Field: Contenu: Objectif(s) concerné(s) secondairement */
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['id'] = 'field_objectifs_snb_secondaires';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['table'] = 'field_data_field_objectifs_snb_secondaires';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['field'] = 'field_objectifs_snb_secondaires';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['separator'] = '</br>';
  /* Field: Contenu: Code indicateur */
  $handler->display->display_options['fields']['field_code']['id'] = 'field_code';
  $handler->display->display_options['fields']['field_code']['table'] = 'field_data_field_code';
  $handler->display->display_options['fields']['field_code']['field'] = 'field_code';
  $handler->display->display_options['fields']['field_code']['exclude'] = TRUE;
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nature de l\'indicateur';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Nature et code de l\'indicateur';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]</br>
[field_code]';
  /* Field: Contenu: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'field_data_field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = 'Intitulé exact correspondant à la valeur mentionnée pour l\'indicateur';
  /* Field: Contenu: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee']['id'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['table'] = 'field_data_field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['label'] = 'Valeur';
  $handler->display->display_options['fields']['field_valeurannee']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_valeurannee']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_valeurannee']['delta_offset'] = '0';
  /* Field: Contenu: Couverture géographique */
  $handler->display->display_options['fields']['field_couveture_geo']['id'] = 'field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo']['table'] = 'field_data_field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo']['field'] = 'field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_couveture_geo']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_couveture_geo']['separator'] = '</br>';
  /* Sort criterion: Contenu: Objectif(s) concerné(s) principalement (field_objectifs_snb_principaux) */
  $handler->display->display_options['sorts']['field_objectifs_snb_principaux_tid']['id'] = 'field_objectifs_snb_principaux_tid';
  $handler->display->display_options['sorts']['field_objectifs_snb_principaux_tid']['table'] = 'field_data_field_objectifs_snb_principaux';
  $handler->display->display_options['sorts']['field_objectifs_snb_principaux_tid']['field'] = 'field_objectifs_snb_principaux_tid';
  /* Sort criterion: Contenu: Code indicateur (field_code) */
  $handler->display->display_options['sorts']['field_code_value']['id'] = 'field_code_value';
  $handler->display->display_options['sorts']['field_code_value']['table'] = 'field_data_field_code';
  $handler->display->display_options['sorts']['field_code_value']['field'] = 'field_code_value';
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Contenu: Thématique(s) (field_jeux_indicateur) */
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['id'] = 'field_jeux_indicateur_tid';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['table'] = 'field_data_field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['field'] = 'field_jeux_indicateur_tid';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['value'] = array(
    120 => '120',
  );
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['vocabulary'] = 'jeux_d_indicateurs';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'indicateurs/synthese';

  /* Display: Page2 */
  $handler = $view->new_display('page', 'Page2', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contenu: Objectif(s) concerné(s) principalement */
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['id'] = 'field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['table'] = 'field_data_field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['field'] = 'field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['type'] = 'taxonomy_objectifs_sans_texte';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['delta_offset'] = '0';
  /* Field: Contenu: Objectif(s) concerné(s) secondairement */
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['id'] = 'field_objectifs_snb_secondaires';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['table'] = 'field_data_field_objectifs_snb_secondaires';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['field'] = 'field_objectifs_snb_secondaires';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['separator'] = '</br>';
  /* Field: Contenu: Code indicateur */
  $handler->display->display_options['fields']['field_code']['id'] = 'field_code';
  $handler->display->display_options['fields']['field_code']['table'] = 'field_data_field_code';
  $handler->display->display_options['fields']['field_code']['field'] = 'field_code';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nature de l\'indicateur';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Nature et code de l\'indicateur';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]</br>
[field_code]';
  /* Field: Contenu: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court']['id'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['table'] = 'field_data_field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['field'] = 'field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court']['label'] = 'Intitulé exact correspondant à la valeur mentionnée pour l\'indicateur';
  /* Field: Contenu: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee']['id'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['table'] = 'field_data_field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee']['label'] = 'Valeur';
  $handler->display->display_options['fields']['field_valeurannee']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_valeurannee']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_valeurannee']['delta_offset'] = '0';
  /* Field: Contenu: Couverture géographique */
  $handler->display->display_options['fields']['field_couveture_geo']['id'] = 'field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo']['table'] = 'field_data_field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo']['field'] = 'field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_couveture_geo']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_couveture_geo']['separator'] = '</br>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Contenu: Thématique(s) (field_jeux_indicateur) */
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['id'] = 'field_jeux_indicateur_tid';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['table'] = 'field_data_field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['field'] = 'field_jeux_indicateur_tid';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['value'] = array(
    123 => '123',
  );
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['vocabulary'] = 'jeux_d_indicateurs';
  $handler->display->display_options['path'] = 'indicateurs/nature';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'indicateurs.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Contenu: Abondance des données */
  $handler->display->display_options['fields']['field_abondance']['id'] = 'field_abondance';
  $handler->display->display_options['fields']['field_abondance']['table'] = 'field_data_field_abondance';
  $handler->display->display_options['fields']['field_abondance']['field'] = 'field_abondance';
  $handler->display->display_options['fields']['field_abondance']['type'] = 'taxonomy_term_reference_link';
  /* Field: Contenu: Accessibilité des données */
  $handler->display->display_options['fields']['field_accessiblite']['id'] = 'field_accessiblite';
  $handler->display->display_options['fields']['field_accessiblite']['table'] = 'field_data_field_accessiblite';
  $handler->display->display_options['fields']['field_accessiblite']['field'] = 'field_accessiblite';
  $handler->display->display_options['fields']['field_accessiblite']['type'] = 'taxonomy_term_reference_link';
  /* Field: Contenu: Code indicateur */
  $handler->display->display_options['fields']['field_code_1']['id'] = 'field_code_1';
  $handler->display->display_options['fields']['field_code_1']['table'] = 'field_data_field_code';
  $handler->display->display_options['fields']['field_code_1']['field'] = 'field_code';
  /* Field: Contenu: Continuité du jeu national SNB */
  $handler->display->display_options['fields']['field_continuite_snb']['id'] = 'field_continuite_snb';
  $handler->display->display_options['fields']['field_continuite_snb']['table'] = 'field_data_field_continuite_snb';
  $handler->display->display_options['fields']['field_continuite_snb']['field'] = 'field_continuite_snb';
  $handler->display->display_options['fields']['field_continuite_snb']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contenu: Couverture géographique */
  $handler->display->display_options['fields']['field_couveture_geo_1']['id'] = 'field_couveture_geo_1';
  $handler->display->display_options['fields']['field_couveture_geo_1']['table'] = 'field_data_field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo_1']['field'] = 'field_couveture_geo';
  $handler->display->display_options['fields']['field_couveture_geo_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_couveture_geo_1']['delta_offset'] = '0';
  /* Field: Contenu: Coût de mobilisation */
  $handler->display->display_options['fields']['field_cout']['id'] = 'field_cout';
  $handler->display->display_options['fields']['field_cout']['table'] = 'field_data_field_cout';
  $handler->display->display_options['fields']['field_cout']['field'] = 'field_cout';
  $handler->display->display_options['fields']['field_cout']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contenu: Date de publication de la première valeur de la série */
  $handler->display->display_options['fields']['field_date_publication']['id'] = 'field_date_publication';
  $handler->display->display_options['fields']['field_date_publication']['table'] = 'field_data_field_date_publication';
  $handler->display->display_options['fields']['field_date_publication']['field'] = 'field_date_publication';
  $handler->display->display_options['fields']['field_date_publication']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Contenu: Disponibilité */
  $handler->display->display_options['fields']['field_disponibilite']['id'] = 'field_disponibilite';
  $handler->display->display_options['fields']['field_disponibilite']['table'] = 'field_data_field_disponibilite';
  $handler->display->display_options['fields']['field_disponibilite']['field'] = 'field_disponibilite';
  $handler->display->display_options['fields']['field_disponibilite']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contenu: Définition */
  $handler->display->display_options['fields']['field_definition_indicateur']['id'] = 'field_definition_indicateur';
  $handler->display->display_options['fields']['field_definition_indicateur']['table'] = 'field_data_field_definition_indicateur';
  $handler->display->display_options['fields']['field_definition_indicateur']['field'] = 'field_definition_indicateur';
  /* Field: Contenu: Echelle(s) territoriale(s) de restitution */
  $handler->display->display_options['fields']['field_echelle_restitution']['id'] = 'field_echelle_restitution';
  $handler->display->display_options['fields']['field_echelle_restitution']['table'] = 'field_data_field_echelle_restitution';
  $handler->display->display_options['fields']['field_echelle_restitution']['field'] = 'field_echelle_restitution';
  $handler->display->display_options['fields']['field_echelle_restitution']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_echelle_restitution']['delta_offset'] = '0';
  /* Field: Contenu: Efficacité */
  $handler->display->display_options['fields']['field_efficacite']['id'] = 'field_efficacite';
  $handler->display->display_options['fields']['field_efficacite']['table'] = 'field_data_field_efficacite';
  $handler->display->display_options['fields']['field_efficacite']['field'] = 'field_efficacite';
  $handler->display->display_options['fields']['field_efficacite']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contenu: Fiabilité des données */
  $handler->display->display_options['fields']['field_fiabilite']['id'] = 'field_fiabilite';
  $handler->display->display_options['fields']['field_fiabilite']['table'] = 'field_data_field_fiabilite';
  $handler->display->display_options['fields']['field_fiabilite']['field'] = 'field_fiabilite';
  $handler->display->display_options['fields']['field_fiabilite']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contenu: Grain(s) de précision d'échelle */
  $handler->display->display_options['fields']['field_grain_precision_echelle']['id'] = 'field_grain_precision_echelle';
  $handler->display->display_options['fields']['field_grain_precision_echelle']['table'] = 'field_data_field_grain_precision_echelle';
  $handler->display->display_options['fields']['field_grain_precision_echelle']['field'] = 'field_grain_precision_echelle';
  $handler->display->display_options['fields']['field_grain_precision_echelle']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_grain_precision_echelle']['delta_offset'] = '0';
  /* Field: Contenu: Homogénéité des données */
  $handler->display->display_options['fields']['field_homogeneite']['id'] = 'field_homogeneite';
  $handler->display->display_options['fields']['field_homogeneite']['table'] = 'field_data_field_homogeneite';
  $handler->display->display_options['fields']['field_homogeneite']['field'] = 'field_homogeneite';
  $handler->display->display_options['fields']['field_homogeneite']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contenu: Indicateurs équivalents existant dans d'autres jeux */
  $handler->display->display_options['fields']['field_relation_indicateurs']['id'] = 'field_relation_indicateurs';
  $handler->display->display_options['fields']['field_relation_indicateurs']['table'] = 'field_data_field_relation_indicateurs';
  $handler->display->display_options['fields']['field_relation_indicateurs']['field'] = 'field_relation_indicateurs';
  $handler->display->display_options['fields']['field_relation_indicateurs']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_relation_indicateurs']['delta_offset'] = '0';
  /* Field: Contenu: Intitulé court */
  $handler->display->display_options['fields']['field_intitule_court_1']['id'] = 'field_intitule_court_1';
  $handler->display->display_options['fields']['field_intitule_court_1']['table'] = 'field_data_field_intitule_court';
  $handler->display->display_options['fields']['field_intitule_court_1']['field'] = 'field_intitule_court';
  /* Field: Contenu: Thématique(s) */
  $handler->display->display_options['fields']['field_jeux_indicateur']['id'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['table'] = 'field_data_field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['field'] = 'field_jeux_indicateur';
  $handler->display->display_options['fields']['field_jeux_indicateur']['label'] = 'Jeu(x) d\'indicateurs';
  $handler->display->display_options['fields']['field_jeux_indicateur']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_jeux_indicateur']['delta_offset'] = '0';
  /* Field: Contenu: Habitat(s) concerné(s) */
  $handler->display->display_options['fields']['field_milieux_concernes']['id'] = 'field_milieux_concernes';
  $handler->display->display_options['fields']['field_milieux_concernes']['table'] = 'field_data_field_milieux_concernes';
  $handler->display->display_options['fields']['field_milieux_concernes']['field'] = 'field_milieux_concernes';
  $handler->display->display_options['fields']['field_milieux_concernes']['label'] = 'Milieu(x) concerné(s)';
  $handler->display->display_options['fields']['field_milieux_concernes']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_milieux_concernes']['delta_offset'] = '0';
  /* Field: Contenu: Modalités d'interprétation de l'indicateur */
  $handler->display->display_options['fields']['field_mod_interpretation']['id'] = 'field_mod_interpretation';
  $handler->display->display_options['fields']['field_mod_interpretation']['table'] = 'field_data_field_mod_interpretation';
  $handler->display->display_options['fields']['field_mod_interpretation']['field'] = 'field_mod_interpretation';
  $handler->display->display_options['fields']['field_mod_interpretation']['type'] = 'text_plain';
  /* Field: Contenu: Méthodologie de construction */
  $handler->display->display_options['fields']['field_methodologie']['id'] = 'field_methodologie';
  $handler->display->display_options['fields']['field_methodologie']['table'] = 'field_data_field_methodologie';
  $handler->display->display_options['fields']['field_methodologie']['field'] = 'field_methodologie';
  $handler->display->display_options['fields']['field_methodologie']['type'] = 'text_plain';
  /* Field: Contenu: Niveau d'appropriation */
  $handler->display->display_options['fields']['field_niveau']['id'] = 'field_niveau';
  $handler->display->display_options['fields']['field_niveau']['table'] = 'field_data_field_niveau';
  $handler->display->display_options['fields']['field_niveau']['field'] = 'field_niveau';
  $handler->display->display_options['fields']['field_niveau']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contenu: Objectif(s) concerné(s) principalement */
  $handler->display->display_options['fields']['field_objectifs_snb_principaux_1']['id'] = 'field_objectifs_snb_principaux_1';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux_1']['table'] = 'field_data_field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux_1']['field'] = 'field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux_1']['delta_offset'] = '0';
  /* Field: Contenu: Objectif(s) concerné(s) secondairement */
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires_1']['id'] = 'field_objectifs_snb_secondaires_1';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires_1']['table'] = 'field_data_field_objectifs_snb_secondaires';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires_1']['field'] = 'field_objectifs_snb_secondaires';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires_1']['delta_offset'] = '0';
  /* Field: Contenu: Orientation(s) stratégique(s) concernée(s) */
  $handler->display->display_options['fields']['field_orientations_principales']['id'] = 'field_orientations_principales';
  $handler->display->display_options['fields']['field_orientations_principales']['table'] = 'field_data_field_orientations_principales';
  $handler->display->display_options['fields']['field_orientations_principales']['field'] = 'field_orientations_principales';
  $handler->display->display_options['fields']['field_orientations_principales']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_orientations_principales']['delta_offset'] = '0';
  /* Field: Contenu: Origine et description des données sources */
  $handler->display->display_options['fields']['field_origine_source']['id'] = 'field_origine_source';
  $handler->display->display_options['fields']['field_origine_source']['table'] = 'field_data_field_origine_source';
  $handler->display->display_options['fields']['field_origine_source']['field'] = 'field_origine_source';
  $handler->display->display_options['fields']['field_origine_source']['type'] = 'text_plain';
  /* Field: Contenu: Pas de temps de disponibilité des valeurs */
  $handler->display->display_options['fields']['field_pas_tps_disponibilite']['id'] = 'field_pas_tps_disponibilite';
  $handler->display->display_options['fields']['field_pas_tps_disponibilite']['table'] = 'field_data_field_pas_tps_disponibilite';
  $handler->display->display_options['fields']['field_pas_tps_disponibilite']['field'] = 'field_pas_tps_disponibilite';
  $handler->display->display_options['fields']['field_pas_tps_disponibilite']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contenu: Pas de temps de restitution */
  $handler->display->display_options['fields']['field_pas_tps_restitution']['id'] = 'field_pas_tps_restitution';
  $handler->display->display_options['fields']['field_pas_tps_restitution']['table'] = 'field_data_field_pas_tps_restitution';
  $handler->display->display_options['fields']['field_pas_tps_restitution']['field'] = 'field_pas_tps_restitution';
  $handler->display->display_options['fields']['field_pas_tps_restitution']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_pas_tps_restitution']['delta_offset'] = '0';
  /* Field: Contenu: Pistes de travail et d'amélioration */
  $handler->display->display_options['fields']['field_pistes']['id'] = 'field_pistes';
  $handler->display->display_options['fields']['field_pistes']['table'] = 'field_data_field_pistes';
  $handler->display->display_options['fields']['field_pistes']['field'] = 'field_pistes';
  $handler->display->display_options['fields']['field_pistes']['type'] = 'text_plain';
  /* Field: Contenu: Possibilité de rétro-calcul */
  $handler->display->display_options['fields']['field_retro_calcul']['id'] = 'field_retro_calcul';
  $handler->display->display_options['fields']['field_retro_calcul']['table'] = 'field_data_field_retro_calcul';
  $handler->display->display_options['fields']['field_retro_calcul']['field'] = 'field_retro_calcul';
  /* Field: Contenu: Principales limites */
  $handler->display->display_options['fields']['field_limites']['id'] = 'field_limites';
  $handler->display->display_options['fields']['field_limites']['table'] = 'field_data_field_limites';
  $handler->display->display_options['fields']['field_limites']['field'] = 'field_limites';
  $handler->display->display_options['fields']['field_limites']['type'] = 'text_plain';
  /* Field: Contenu: Principaux avantages */
  $handler->display->display_options['fields']['field_avantages']['id'] = 'field_avantages';
  $handler->display->display_options['fields']['field_avantages']['table'] = 'field_data_field_avantages';
  $handler->display->display_options['fields']['field_avantages']['field'] = 'field_avantages';
  $handler->display->display_options['fields']['field_avantages']['type'] = 'text_plain';
  /* Field: Contenu: Producteur */
  $handler->display->display_options['fields']['field_indicateur_producteur']['id'] = 'field_indicateur_producteur';
  $handler->display->display_options['fields']['field_indicateur_producteur']['table'] = 'field_data_field_indicateur_producteur';
  $handler->display->display_options['fields']['field_indicateur_producteur']['field'] = 'field_indicateur_producteur';
  $handler->display->display_options['fields']['field_indicateur_producteur']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_indicateur_producteur']['delta_offset'] = '0';
  /* Field: Contenu: Précision */
  $handler->display->display_options['fields']['field_precision']['id'] = 'field_precision';
  $handler->display->display_options['fields']['field_precision']['table'] = 'field_data_field_precision';
  $handler->display->display_options['fields']['field_precision']['field'] = 'field_precision';
  $handler->display->display_options['fields']['field_precision']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contenu: Pérennité des données */
  $handler->display->display_options['fields']['field_perennite']['id'] = 'field_perennite';
  $handler->display->display_options['fields']['field_perennite']['table'] = 'field_data_field_perennite';
  $handler->display->display_options['fields']['field_perennite']['field'] = 'field_perennite';
  $handler->display->display_options['fields']['field_perennite']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contenu: Qualité des données */
  $handler->display->display_options['fields']['field_qualite']['id'] = 'field_qualite';
  $handler->display->display_options['fields']['field_qualite']['table'] = 'field_data_field_qualite';
  $handler->display->display_options['fields']['field_qualite']['field'] = 'field_qualite';
  /* Field: Contenu: Relations avec le(s) objectif(s) renseigné(s) */
  $handler->display->display_options['fields']['field_relation_objectifs']['id'] = 'field_relation_objectifs';
  $handler->display->display_options['fields']['field_relation_objectifs']['table'] = 'field_data_field_relation_objectifs';
  $handler->display->display_options['fields']['field_relation_objectifs']['field'] = 'field_relation_objectifs';
  $handler->display->display_options['fields']['field_relation_objectifs']['type'] = 'text_plain';
  /* Field: Contenu: Remarques */
  $handler->display->display_options['fields']['field_pas_tps_remarques']['id'] = 'field_pas_tps_remarques';
  $handler->display->display_options['fields']['field_pas_tps_remarques']['table'] = 'field_data_field_pas_tps_remarques';
  $handler->display->display_options['fields']['field_pas_tps_remarques']['field'] = 'field_pas_tps_remarques';
  /* Field: Contenu: Remarques rétro-calcul */
  $handler->display->display_options['fields']['field_retro_calcul_remarques']['id'] = 'field_retro_calcul_remarques';
  $handler->display->display_options['fields']['field_retro_calcul_remarques']['table'] = 'field_data_field_retro_calcul_remarques';
  $handler->display->display_options['fields']['field_retro_calcul_remarques']['field'] = 'field_retro_calcul_remarques';
  /* Field: Contenu: Robustesse */
  $handler->display->display_options['fields']['field_robustesse']['id'] = 'field_robustesse';
  $handler->display->display_options['fields']['field_robustesse']['table'] = 'field_data_field_robustesse';
  $handler->display->display_options['fields']['field_robustesse']['field'] = 'field_robustesse';
  $handler->display->display_options['fields']['field_robustesse']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contenu: Robustesse - remarques  */
  $handler->display->display_options['fields']['field_robustesse_remarques']['id'] = 'field_robustesse_remarques';
  $handler->display->display_options['fields']['field_robustesse_remarques']['table'] = 'field_data_field_robustesse_remarques';
  $handler->display->display_options['fields']['field_robustesse_remarques']['field'] = 'field_robustesse_remarques';
  /* Field: Contenu: Rupture de série */
  $handler->display->display_options['fields']['field_rupture_serie']['id'] = 'field_rupture_serie';
  $handler->display->display_options['fields']['field_rupture_serie']['table'] = 'field_data_field_rupture_serie';
  $handler->display->display_options['fields']['field_rupture_serie']['field'] = 'field_rupture_serie';
  $handler->display->display_options['fields']['field_rupture_serie']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_rupture_serie']['delta_offset'] = '0';
  /* Field: Contenu: Sensiblité */
  $handler->display->display_options['fields']['field_sensibilite']['id'] = 'field_sensibilite';
  $handler->display->display_options['fields']['field_sensibilite']['table'] = 'field_data_field_sensibilite';
  $handler->display->display_options['fields']['field_sensibilite']['field'] = 'field_sensibilite';
  $handler->display->display_options['fields']['field_sensibilite']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contenu: Type de variable */
  $handler->display->display_options['fields']['field_type_variable']['id'] = 'field_type_variable';
  $handler->display->display_options['fields']['field_type_variable']['table'] = 'field_data_field_type_variable';
  $handler->display->display_options['fields']['field_type_variable']['field'] = 'field_type_variable';
  $handler->display->display_options['fields']['field_type_variable']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contenu: Type(s) de pression */
  $handler->display->display_options['fields']['field_type_pression']['id'] = 'field_type_pression';
  $handler->display->display_options['fields']['field_type_pression']['table'] = 'field_data_field_type_pression';
  $handler->display->display_options['fields']['field_type_pression']['field'] = 'field_type_pression';
  $handler->display->display_options['fields']['field_type_pression']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_type_pression']['delta_offset'] = '0';
  /* Field: Contenu: Type(s) DPSIR */
  $handler->display->display_options['fields']['field_type_dpsir']['id'] = 'field_type_dpsir';
  $handler->display->display_options['fields']['field_type_dpsir']['table'] = 'field_data_field_type_dpsir';
  $handler->display->display_options['fields']['field_type_dpsir']['field'] = 'field_type_dpsir';
  $handler->display->display_options['fields']['field_type_dpsir']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_type_dpsir']['delta_offset'] = '0';
  /* Field: Contenu: Unité de mesure */
  $handler->display->display_options['fields']['field_unite_mesure']['id'] = 'field_unite_mesure';
  $handler->display->display_options['fields']['field_unite_mesure']['table'] = 'field_data_field_unite_mesure';
  $handler->display->display_options['fields']['field_unite_mesure']['field'] = 'field_unite_mesure';
  $handler->display->display_options['fields']['field_unite_mesure']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contenu: Valeur par période */
  $handler->display->display_options['fields']['field_valeurannee_1']['id'] = 'field_valeurannee_1';
  $handler->display->display_options['fields']['field_valeurannee_1']['table'] = 'field_data_field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee_1']['field'] = 'field_valeurannee';
  $handler->display->display_options['fields']['field_valeurannee_1']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_valeurannee_1']['delta_offset'] = '0';
  /* Field: Contenu: Valeur(s) cible(s) */
  $handler->display->display_options['fields']['field_valeur_cible']['id'] = 'field_valeur_cible';
  $handler->display->display_options['fields']['field_valeur_cible']['table'] = 'field_data_field_valeur_cible';
  $handler->display->display_options['fields']['field_valeur_cible']['field'] = 'field_valeur_cible';
  /* Field: Contenu: Valeur(s) cible(s) renseignement */
  $handler->display->display_options['fields']['field_valeur_cible_renseignement']['id'] = 'field_valeur_cible_renseignement';
  $handler->display->display_options['fields']['field_valeur_cible_renseignement']['table'] = 'field_data_field_valeur_cible_renseignement';
  $handler->display->display_options['fields']['field_valeur_cible_renseignement']['field'] = 'field_valeur_cible_renseignement';
  $handler->display->display_options['fields']['field_valeur_cible_renseignement']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Contenu: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'indicateurs.xls';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_orientations_principales',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_objectifs_snb_principaux' => 'field_objectifs_snb_principaux',
    'field_objectifs_snb_secondaires' => 'field_objectifs_snb_secondaires',
    'title' => 'title',
    'field_orientations_principales' => 'field_orientations_principales',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_objectifs_snb_principaux' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_objectifs_snb_secondaires' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_orientations_principales' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contenu: Objectif(s) concerné(s) principalement */
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['id'] = 'field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['table'] = 'field_data_field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['field'] = 'field_objectifs_snb_principaux';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['type'] = 'taxonomy_objectifs_sans_texte';
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_objectifs_snb_principaux']['delta_offset'] = '0';
  /* Field: Contenu: Objectif(s) concerné(s) secondairement */
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['id'] = 'field_objectifs_snb_secondaires';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['table'] = 'field_data_field_objectifs_snb_secondaires';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['field'] = 'field_objectifs_snb_secondaires';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_objectifs_snb_secondaires']['separator'] = '</br>';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Contenu: Orientation(s) stratégique(s) concernée(s) */
  $handler->display->display_options['fields']['field_orientations_principales']['id'] = 'field_orientations_principales';
  $handler->display->display_options['fields']['field_orientations_principales']['table'] = 'field_data_field_orientations_principales';
  $handler->display->display_options['fields']['field_orientations_principales']['field'] = 'field_orientations_principales';
  $handler->display->display_options['fields']['field_orientations_principales']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_orientations_principales']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_orientations_principales']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_orientations_principales']['delta_reversed'] = TRUE;
  $handler->display->display_options['fields']['field_orientations_principales']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Contenu: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fiche_indicateur' => 'fiche_indicateur',
  );
  /* Filter criterion: Contenu: Thématique(s) (field_jeux_indicateur) */
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['id'] = 'field_jeux_indicateur_tid';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['table'] = 'field_data_field_jeux_indicateur';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['field'] = 'field_jeux_indicateur_tid';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['value'] = array(
    120 => '120',
    125 => '125',
  );
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_jeux_indicateur_tid']['vocabulary'] = 'jeux_d_indicateurs';
  $handler->display->display_options['path'] = 'indicateurs/verification';
  $export['tableaux'] = $view;

  return $export;
}
