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
//die('<pre>'. print_r($content['field_status_trash_recycling'], 1) .'</pre>');
?>

<section class="status-bar-wrapper">
  <section class="status-bar component <?php echo $classes; ?>"<?php echo $attributes; ?>>
    <div class="somv_calendar calendar--sr status-bar__item--date">
      <h6 class="calendar__title">Today:</h6>
      <div class="date-display">
        <span class="date-display--month"><?php echo date('M'); ?></span>
        <span class="date-display--day"><?php echo date('d'); ?></span>
      </div>
      <a href="/events">
        <span class="status-bar__calendar-icon fa-stack fa-lg">
          <i class="fa fa-square fa-stack-1x bottom"></i>
          <i class="fa fa-square fa-stack-1x fa-inverse middle"></i>
          <i class="fa fa-calendar fa-stack-1x"></i>
        </span>
      </a>
    </div>
    <ul class="status-bar__items">
      <li class="status-bar__item">
        <a class="status-bar__wrapper" href="/wizard">
          <h3 class="status-bar__title js-equal-height"><?php echo render($content['field_status_trash_recycling']['#title']); ?></h3>
          <svg class="status-bar__icon">
            <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="sites/all/themes/neato/somerville/img/svg-sprite.svg#trash-can"></use>
          </svg>
          <div class="status-bar__status">
            <?php echo render($content['field_status_trash_recycling']); ?>
            <svg class="status-bar__<?php echo render($content['field_status_trash_recycling']['#items']['0']['value']); ?>">
              <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="sites/all/themes/neato/somerville/img/svg-sprite.svg#<?php echo render($content['field_status_trash_recycling']['#items']['0']['value']); ?>"></use>
            </svg>
          </div>
        </a>
      </li>
      <li class="status-bar__item">
        <a class="status-bar__wrapper" href="/sweeping">
          <h3 class="status-bar__title js-equal-height"><?php echo render($content['field_status_street_sweeping']['#title']); ?></h3>
          <svg class="status-bar__icon">
            <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="sites/all/themes/neato/somerville/img/svg-sprite.svg#streetsweeping-icon"></use>
          </svg>
          <div class="status-bar__status">
            <?php echo render($content['field_status_street_sweeping']); ?>
            <svg class="status-bar__<?php echo render($content['field_status_street_sweeping']['#items']['0']['value']); ?>">
              <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="sites/all/themes/neato/somerville/img/svg-sprite.svg#<?php echo render($content['field_status_street_sweeping']['#items']['0']['value']); ?>"></use>
            </svg>
          </div>
        </a>
      </li>
      <li class="status-bar__item">
        <a class="status-bar__wrapper" href="/departments/school-department">
          <h3 class="status-bar__title js-equal-height"><?php echo render($content['field_status_schools']['#title']); ?></h3>
          <svg class="status-bar__icon">
            <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="sites/all/themes/neato/somerville/img/svg-sprite.svg#backpack"></use>
          </svg>
          <div class="status-bar__status">
            <?php echo render($content['field_status_schools']); ?>
            <svg class="status-bar__<?php echo render($content['field_status_schools']['#items']['0']['value']); ?>">
              <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="sites/all/themes/neato/somerville/img/svg-sprite.svg#<?php echo render($content['field_status_schools']['#items']['0']['value']); ?>"></use>
            </svg>
          </div>
        </a>
      </li>
      <li class="status-bar__item">
        <a class="status-bar__wrapper" href="/snow">
          <h3 class="status-bar__title js-equal-height"><?php echo render($content['field_status_snow_emergency']['#title']); ?></h3>
          <svg class="status-bar__icon">
            <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="sites/all/themes/neato/somerville/img/svg-sprite.svg#snowflake"></use>
          </svg>
          <div class="status-bar__status">
            <?php echo render($content['field_status_snow_emergency']); ?>
            <svg class="status-bar__<?php echo render($content['field_status_snow_emergency']['#items']['0']['value']); ?>">
              <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="sites/all/themes/neato/somerville/img/svg-sprite.svg#<?php echo render($content['field_status_snow_emergency']['#items']['0']['value']); ?>"></use>
            </svg>
          </div>
        </a>
      </li>
      <li class="status-bar__mores">
        <div class="status-bar__more-wrapper">
          <div class="status-bar__more">
            <svg class="status-bar__icon">
              <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="sites/all/themes/neato/somerville/img/svg-sprite.svg#cone13"></use>
            </svg>
            <h3 class="status-bar__title"><a href="/detours">Detour & Construction Updates</a></h3>
          </div>
          <div class="status-bar__more">
            <svg class="status-bar__icon">
              <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="sites/all/themes/neato/somerville/img/svg-sprite.svg#bar-chart"></use>
            </svg>
            <h3 class="status-bar__title"><a href="http://www.somervillema.gov/datafarm">Somerville Data Farm</a></h3>
          </div>
        </div>
      </li>
    </ul>
  </section>
</section>
