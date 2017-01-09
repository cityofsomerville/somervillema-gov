<?php
/**
 * @file
 * Default theme implementation for beans.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) entity label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-{ENTITY_TYPE}
 *   - {ENTITY_TYPE}-{BUNDLE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>

<section class="key-services component <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <ul>
      <li class="key-services__item js-clickable">
        <div class="key-services__icon">
          <svg>
            <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="/sites/all/themes/neato/somerville/img/svg-sprite.svg#<?php print render($content['field_block_services_icon']['#items']['0']['value']); ?>"></use>
          </svg>
        </div>
        <a href="<?php print render($content['field_block_services_url']['#items']['0']['value']); ?>" class="key-services__content js-clickable-link">
          <?php print render($content['field_block_services_label']['#items']['0']['value']); ?>
        </a>
      </li>
      <li class="key-services__item js-clickable">
        <div class="key-services__icon">
          <svg>
            <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="/sites/all/themes/neato/somerville/img/svg-sprite.svg#<?php print render($content['field_block_services_icon_2']['#items']['0']['value']); ?>"></use>
          </svg>
        </div>
        <a href="<?php print render($content['field_block_services_url_2']['#items']['0']['value']); ?>" class="key-services__content js-clickable-link">
          <?php print render($content['field_block_services_label_2']['#items']['0']['value']); ?>
        </a>
      </li>
      <li class="key-services__item js-clickable">
        <div class="key-services__icon">
          <svg>
            <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="/sites/all/themes/neato/somerville/img/svg-sprite.svg#<?php print render($content['field_block_services_icon_3']['#items']['0']['value']); ?>"></use>
          </svg>
        </div>
        <a href="<?php print render($content['field_block_services_url_3']['#items']['0']['value']); ?>" class="key-services__content js-clickable-link">
          <?php print render($content['field_block_services_label_3']['#items']['0']['value']); ?>
        </a>
      </li>
      <li class="key-services__item js-clickable">
        <div class="key-services__icon">
          <svg>
            <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="/sites/all/themes/neato/somerville/img/svg-sprite.svg#<?php print render($content['field_block_services_icon_4']['#items']['0']['value']); ?>"></use>
          </svg>
        </div>
        <a href="<?php print render($content['field_block_services_url_4']['#items']['0']['value']); ?>" class="key-services__content js-clickable-link">
          <?php print render($content['field_block_services_label_4']['#items']['0']['value']); ?>
        </a>
      </li>
      <li class="key-services__item js-clickable">
        <div class="key-services__icon">
          <svg>
            <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="/sites/all/themes/neato/somerville/img/svg-sprite.svg#<?php print render($content['field_block_services_icon_5']['#items']['0']['value']); ?>"></use>
          </svg>
        </div>
        <a href="<?php print render($content['field_block_services_url_5']['#items']['0']['value']); ?>" class="key-services__content js-clickable-link">
          <?php print render($content['field_block_services_label_5']['#items']['0']['value']); ?>
        </a>
      </li>
      <li class="key-services__item js-clickable">
        <div class="key-services__icon">
          <svg>
            <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="/sites/all/themes/neato/somerville/img/svg-sprite.svg#<?php print render($content['field_block_services_icon_6']['#items']['0']['value']); ?>"></use>
          </svg>
        </div>
        <a href="<?php print render($content['field_block_services_url_6']['#items']['0']['value']); ?>" class="key-services__content js-clickable-link">
          <?php print render($content['field_block_services_label_6']['#items']['0']['value']); ?>
        </a>
      </li>
      <li class="key-services__item js-clickable">
        <div class="key-services__icon">
          <svg>
            <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="/sites/all/themes/neato/somerville/img/svg-sprite.svg#<?php print render($content['field_block_services_icon_7']['#items']['0']['value']); ?>"></use>
          </svg>
        </div>
        <a href="<?php print render($content['field_block_services_url_7']['#items']['0']['value']); ?>" class="key-services__content js-clickable-link">
          <?php print render($content['field_block_services_label_7']['#items']['0']['value']); ?>
        </a>
      </li>
      <li class="key-services__item js-clickable">
        <div class="key-services__icon">
          <svg>
            <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="/sites/all/themes/neato/somerville/img/svg-sprite.svg#<?php print render($content['field_block_services_icon_8']['#items']['0']['value']); ?>"></use>
          </svg>
        </div>
        <a href="<?php print render($content['field_block_services_url_8']['#items']['0']['value']); ?>" class="key-services__content js-clickable-link">
          <?php print render($content['field_block_services_label_8']['#items']['0']['value']); ?>
        </a>
      </li>
    </ul>
  </div>
  <div class="cta-primary-wrapper">
    <a class="cta-primary" href="/services-by-topic">View All City Services</a>
  </div>
</section>