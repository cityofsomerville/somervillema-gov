<?php

debug_template_start(__FILE__, $theme_hook_suggestions);
?>
<!--.page -->
<div role="document" class="page home ">
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
          <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="sites/all/themes/neato/somerville/img/svg-sprite.svg#globe"></use>
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
  </section>
  <?php echo $messages; ?>
  <div class="main-content">
    <?php // print render($page['content']); ?>
    <!-- Homepage Site Header Image and Search -->
    <style>
      .page-header .page-banner.hp-site-search {
        background-image:url('sites/default/files/banner-homepage.jpg');
      }
      @media screen and (min-width: 691px){
        .page-header .page-banner.hp-site-search {
          background-image:url('sites/default/files/banner-homepage.jpg');
        }
      }
    </style>
    <div class="page-header">
      <section class="hp-site-search page-banner js-hp-site-search component">
        <div class="page-banner__inner">
          <div class="hp-site-search__content-area page-banner__content-area">
            <div class="hp-site-search__content">
              <h1 class="hp-site-search__title">What can we help you find?</h1>
              <?php echo render($search_box); ?>
              <!-- <form action="search.php" method="GET">
                <input type="text" name="keyword" class="hp-site-search__input" placeholder="Search" />
                <button class="hp-site-search__button go-button">GO</button>
                <div class="hp-site-search__select-wrapper">
                <span class="searchIn">Search in:</span>
                  <select name="domain" class="hp-site-search__select js-custom-select screen-reader-only">
                    <option value="City of Somerville">SomervilleMA.gov</option>
                    <option value="ParkSomerville">ParkSomerville</option>
                    <option value="Domain Name">Domain Name</option>
                  </select>
                </div>
              </form> -->
              <div class="attribution">
              <p>Photo © <a href="https://www.flickr.com/photos/ekilby/" target="_blank">Eric Kilby</a> 2014 via <a href="https://flic.kr/p/nUDtvT" target="_blank">Flickr</a></p>
              </div>
            </div>
          </div>
        </div>
      </section>
    </div>
    <!-- // End Homepage Site Header Image and Search -->
    <!-- Homepage Status Bar - Dashboard -->
    <div class="sub-header">
      <?php echo render($page['sub_header']); ?>
    </div>
    <!-- // End Homepage Status Bar - Dashboard -->
    <!-- Key Services - Latest News -->
    <div class="main-content__top-container component">
      <div class="columns">
        <div class="column column--50">
        <?php echo render($page['home_top_left_50']); ?>
        </div>
        <div class="column column--50">
        <?php echo render($page['home_top_right_50']); ?>
        </div>
      </div>
    </div>
    <!-- // End Key Services - Latest News -->
    <!-- Programs - Newsletter - Events Gallery - Hours -->
    <div class="main-content__container" ng-app="cosComponentApp" ng-cloak>
      <div class="columns">
        <div class="column column--50">
          <?php echo render($page['home_mid_left_50']); ?>
        </div>
        <div class="column column--50">
        <?php echo render($page['home_mid_right_50']); ?>
        </div>
      </div>
      <?php echo render($page['page_bottom_100']); ?>
    </div>
    <!-- //End Programs - Newsletter - Events Gallery - Hours -->
  </div>
  <!-- // End Main Content -->
  <section class="google-map js-google-map"></section>
  <section class="leave-feedback js-leave-feedback">
    <div class="leave-feedback__link-wrapper js-leave-feedback-link">
      <h3 class="leave-feedback__link">Feedback</h3>
      <span class="leave-feedback__close"></span>
    </div>
    <?php echo render($page['block_feedback']); ?>
  </section>
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
