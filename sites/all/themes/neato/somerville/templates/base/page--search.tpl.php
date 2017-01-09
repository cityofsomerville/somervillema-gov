<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
debug_template_start(__FILE__, $theme_hook_suggestions);
//dpm('foo');
?>
<!--.page -->

<div role="document" class="page">
  <?php echo render($page['body_top']); ?>
  <div class="share-tools-container">
    <div class="share-tools-wrapper">
      <div class="header-social">
        <ul class="header-social__items">
          <li class="header-social__item">
            <a href="http://www.facebook.com/SomervilleCity" target="new">
              <span class="header-social__icon fa-stack fa-lg">
                <i class="fa fa-circle fa-stack-2x"></i>
                <i class="fa fa-facebook fa-stack-1x inner"></i>
              </span>
            </a>
          </li>
          <li class="header-social__item">
            <a href="http://twitter.com/#!/Somervillecity" target="new">
              <span class="header-social__icon fa-stack fa-lg">
                <i class="fa fa-circle fa-stack-2x"></i>
                <i class="fa fa-twitter fa-stack-1x inner"></i>
              </span>
            </a>
          </li>
          <li class="header-social__item">
            <a href="http://instagram.com/somervillecity">
              <span class="header-social__icon fa-stack fa-lg">
                <i class="fa fa-circle fa-stack-2x"></i>
                <i class="fa fa-instagram fa-stack-1x inner"></i>
              </span>
            </a>
          </li>
          <li class="header-social__item">
            <a href="/video" target="new">
              <span class="header-social__icon fa-stack fa-lg">
                <i class="fa fa-circle fa-stack-2x"></i>
                <i class="fa fa-youtube-play fa-stack-1x inner"></i>
              </span>
            </a>
          </li>
          <li class="header-social__item">
            <a href="https://www.flickr.com/groups/somervillema" target="new">
              <span class="header-social__icon fa-stack fa-lg">
                <i class="fa fa-circle fa-stack-2x"></i>
                <i class="fa fa-circle fa-stack-1x inner"></i>
                <i class="fa fa-circle-o fa-stack-1x inner"></i>
              </span>
            </a>
          </li>
          <li class="header-social__item">
            <a href="http://www.somervillema.gov/departments/constituent-services" target="new">
              <span class="header-social__icon fa-stack fa-lg">
                <i class="fa fa-circle fa-stack-2x"></i>
                <span class="fa constituent-services fa-stack-1x inner">311</span>
              </span>
            </a>
          </li>
        </ul>
      </div>
      <?php echo render($header_text_zoom); ?>
      <div class="google-translate">
        <svg class="header-social__icon header-social__icon--globe">
          <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="/sites/all/themes/neato/somerville/img/svg-sprite.svg#globe"></use>
        </svg>
        <div id="google_translate_element"></div>
      </div>
    </div>
  </div>
  <header class="site-header">
    <div class="site-header__container">
      <div class="site-header__logo">
      <?php echo render($linked_logo); ?>
      </div>
      <a class="site-header__skip-nav screen-reader-only" href="#after-navigation">skip navigation</a>
      <div class="site-header__search">
        <?php echo render($search_box); ?>
        <!-- <form action="search.php" method="GET">
          <input type="text" name="keyword" class="site-header__search--input" placeholder="Search">
          <button class="site-header__search--button"><i class="fa fa-search"></i></button>
        </form> -->
      </div>
      <div class="global-nav">
        <a class="global-nav__menu-link js-global-nav-menu-link" href="#menu" title="menu">
          <i class="global-nav__menu-icon fa fa-bars"></i>
          <h3 class="global-nav__menu-text">menu</h3>
        </a>
        <nav class="global-nav__item-wrapper">
          <?php echo render($main_menu_expanded); ?><div class="share-tools-container">
            <div class="header-social-mobile">
              <ul class="header-social__items">
                <li class="header-social__item">
                  <a href="http://www.facebook.com/SomervilleCity" target="new">
                    <span class="header-social__icon fa-stack fa-lg">
                      <i class="fa fa-circle fa-stack-2x"></i>
                      <i class="fa fa-facebook fa-stack-1x inner"></i>
                    </span>
                  </a>
                </li>
                <li class="header-social__item">
                  <a href="http://twitter.com/#!/Somervillecity" target="new">
                    <span class="header-social__icon fa-stack fa-lg">
                      <i class="fa fa-circle fa-stack-2x"></i>
                      <i class="fa fa-twitter fa-stack-1x inner"></i>
                    </span>
                  </a>
                </li>
                <li class="header-social__item">
                  <a href="http://www.somervillema.gov/departments/constituent-services" target="new">
                    <span class="header-social__icon fa-stack fa-lg">
                      <i class="fa fa-circle fa-stack-2x"></i>
                      <span class="fa constituent-services fa-stack-1x inner">311</span>
                    </span>
                  </a>
                </li>
                <li class="mobile-more-link global-nav__main-items has-sub-nav" data-menu-parent="main-menu-1"><a href="/social" title="" class="global-nav__main-items-link">More</a></li>
              </ul>
              <?php echo render($header_text_zoom); ?>
            </div>
          </div>
        </nav>
      </div>
      <a id="after-navigation"></a>
    </div>
  </header>
  <section class="sub-header-container">
    <?php echo render($page['sub_header']); ?>
  </section>
  <?php echo $messages; ?>
  <!-- <div class="page-header">
      <section class="page-banner">
        <div class="page-banner__inner">
          <div class="page-banner__content-area">
            <div class="page-banner__content">
              <hr />
              <?php //if($page['page_header']) {
                //print render($page['page_header']);
              //} else { ?>
                <h1 class="page-banner__title"><?php //print render($title); ?></h1>
              <?php //} ?>
              <hr />
            </div>
          </div>
        </div>
      </section>

  </div> -->

  <div class="main outer-wrapper">
    <div class="main-content main-content__container">
      <div class="columns">
        <div class="column">
          <div class="page-share">
            <?php echo render($sharethis); ?>
          </div>
          <?php echo theme('breadcrumb', array('breadcrumb' => drupal_get_breadcrumb()));?>
        </div>
        <div class="column">
          <h1><?php echo render($title); ?></h1>
          <?php //print render($page['page_top_100']); ?>
        </div>
        <?php if (!empty($page['sidebar_left_25'])): ?>
          <aside id="sidebar-first" role="complementary" class="column column--25 sidebar">
            <?php echo render($page['sidebar_left_25']); ?>
          </aside>
        <?php endif; ?>
        <div class="main column column--<?php echo $main_width; ?>">
          <?php if (!empty($tabs)): ?>
            <?php echo render($tabs); ?>
            <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
          <?php endif; ?>

          <?php if ($action_links): ?>
            <ul class="action-links">
              <?php echo render($action_links); ?>
            </ul>
          <?php endif; ?>

          <?php echo render($page['content_wrapper']); ?>
        </div>
        <?php if (!empty($page['sidebar_second']) || !empty($page['sidebar_25'])): ?>
          <aside id="sidebar-second" role="complementary" class="column column--25 sidebar">
            <?php echo render($page['sidebar_25']); ?>
            <?php echo render($page['sidebar_second']); ?>
          </aside>
        <?php endif; ?>
      </div>
    </div>
  </div>

  <footer class="footer">
    <div class="footer-content">
      <div class="footer-top-container">
        <?php echo render($page['footer_top']); ?>
      </div>
      <div class="footer-bottom">
        <div class="footer-apps__wrapper">
          <div class="footer-apps">
            <h3 class="footer-apps__title">Download Mobile Apps</h3>
            <ul class="footer-apps__items">
              <li class="footer-apps__item">
                <a href="https://itunes.apple.com/us/app/311somerville/id1086636902?mt=8">
                  <i class="footer-apps__icon footer-apps__icon--apple fa fa-apple"></i>
                </a>
              </li>
              <li class="footer-apps__item">
                <a href="https://play.google.com/store/apps/details?id=com.qscend.report2gov.somerville311">
                  <i class="footer-apps__icon footer-apps__icon--android fa fa-android"></i>
                </a>
              </li>
            </ul>
          </div>
          <?php echo render($footer_enews_form); ?>
        </div>
        <div>
          <div class="footer-social">
            <h3 class="footer-social__title">Connect With Us On</h3>
            <ul class="footer-social__items">
              <li class="footer-social__item">
                <a href="http://www.facebook.com/SomervilleCity" target="new">
                  <span class="footer-social__icon fa-stack fa-lg">
                    <i class="fa fa-circle fa-stack-2x"></i>
                    <i class="fa fa-facebook fa-stack-1x inner"></i>
                  </span>
                </a>
              </li>
              <li class="footer-social__item">
                <a href="http://twitter.com/#!/Somervillecity" target="new">
                  <span class="footer-social__icon fa-stack fa-lg">
                    <i class="fa fa-circle fa-stack-2x"></i>
                    <i class="fa fa-twitter fa-stack-1x inner"></i>
                  </span>
                </a>
              </li>
              <li class="footer-social__item">
                <a href="http://instagram.com/somervillecity">
                  <span class="footer-social__icon fa-stack fa-lg">
                    <i class="fa fa-circle fa-stack-2x"></i>
                    <i class="fa fa-instagram fa-stack-1x inner"></i>
                  </span>
                </a>
              </li>
              <li class="footer-social__item">
                <a href="http://www.youtube.com/user/SomervilleCityTV" target="new">
                  <span class="footer-social__icon fa-stack fa-lg">
                    <i class="fa fa-circle fa-stack-2x"></i>
                    <i class="fa fa-youtube-play fa-stack-1x inner"></i>
                  </span>
                </a>
              </li>
              <li class="footer-social__item">
                <a href="https://www.flickr.com/groups/somervillema" target="new">
                  <span class="footer-social__icon fa-stack fa-lg">
                    <i class="fa fa-circle fa-stack-2x"></i>
                    <i class="fa fa-circle fa-stack-1x inner"></i>
                    <i class="fa fa-circle-o fa-stack-1x inner"></i>
                  </span>
                </a>
              </li>
              <li class="footer-social__item">
                <a href="http://www.somervillema.gov/departments/constituent-services" target="new">
                  <span class="footer-social__icon fa-stack fa-lg">
                    <i class="fa fa-circle fa-stack-2x"></i>
                    <span class="fa fa-stack-1x inner">311</span>
                  </span>
                </a>
              </li>
            </ul>
          </div>
          <div class="footer-copyright"><?php echo t('somv-copyright'); ?></div>
        </div>
      </div>
    </div>
  </footer>
</div>
<script data-main="/sites/all/themes/neato/somerville/js/main" src="/sites/all/themes/neato/somerville/js/lib/require.js"></script>
<!-- breakpoint markers -->
<div class="breakpoint-xxl-min">&nbsp;</div>
<div class="breakpoint-xl-min">&nbsp;</div>
<div class="breakpoint-l-min">&nbsp;</div>
<div class="breakpoint-m-min">&nbsp;</div>
<div class="breakpoint-s-min">&nbsp;</div>
<div class="breakpoint-xs-min">&nbsp;</div>
<!--/.page -->
<?php debug_template_end(__FILE__); ?>
