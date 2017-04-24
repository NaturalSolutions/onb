<?php

/**
 * @file
 * Display Suite 2 column stacked template.
 */
?>
<div class="ds-2col-stacked <?php print $content['field_niveau_de_pr_sentation']['#items']['0']['value']; ?> <?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php if ($header): ?>
    <div class="group-header<?php print $header_classes; ?>">
    <?php
       if (isset($content['field_sousquestion_phrasezoom']['#items']['0']['value'])) {
        print $content['field_sousquestion_phrasezoom']['#items']['0']['value'];
    }
?>
</div>
     <?php endif; ?>
<div class="group-center"> 
  <?php if ($left): ?>
    <div class="group-left<?php print $left_classes; ?>">
      <?php print $left; ?>
    </div>
  <?php endif; ?>

  <?php if ($right): ?>
    <div class="group-right<?php print $right_classes; ?>">
      <?php print $right; ?>
    </div>
  <?php endif; ?>
</div>
  <?php if ($footer): ?>
    <div class="group-footer<?php print $footer_classes; ?>">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>
</div>