<?php
/**
 * @file
 * onb_global.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function onb_global_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'HP Acces questions biodiversite';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'hp_acces_question_biodiversite';
  $fe_block_boxes->body = '<div style="text-align: center;">
	<h6>&nbsp;</h6>
</div>
<div style="text-align: center;"><a class="bouton-questions" href="questions/toutes">Biodiversity in France</a></div>
<div style="text-align: center;">&nbsp;</div>
<h2 style="text-align: center; "><a href="questions/toutes">Access to questions</a></h2>
';

  $export['hp_acces_question_biodiversite'] = $fe_block_boxes;

  return $export;
}
