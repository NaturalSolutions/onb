<?php
/**
 * @file
 * onb_global.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function onb_global_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: full_html
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'Strike' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'JustifyBlock' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Image' => 1,
          'Superscript' => 1,
          'Subscript' => 1,
          'RemoveFormat' => 1,
          'SpecialChar' => 1,
          'Format' => 1,
          'Table' => 1,
          'SpellChecker' => 1,
          'Scayt' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'none',
      'css_path' => '',
      'simple_source_formatting' => 0,
      'resize_enabled' => 1,
      'toolbarLocation' => 'top',
      'forcePasteAsPlainText' => 0,
      'stylesSet' => '',
    ),
    'preferences' => array(
      'add_to_summaries' => NULL,
      'default' => 1,
      'show_toggle' => 1,
      'user_choose' => 0,
      'version' => '3.1.0.4891',
    ),
    'name' => 'formatfull_html',
    'rdf_mapping' => array(),
  );

  return $profiles;
}
