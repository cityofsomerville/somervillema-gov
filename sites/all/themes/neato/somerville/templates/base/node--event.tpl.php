<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $terms: the themed list of taxonomy term links output from theme_links().
 * - $display_submitted: whether submission information should be displayed.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>

<script type="text/javascript" src="https://addevent.com/libs/atc/1.6.1/atc.min.js" async defer></script>

<div id="node-<?php echo $node->nid; ?>" class="rdf-info <?php echo $classes; ?>"<?php echo $attributes; ?>>
  <div class="page-header">
    <?php if (isset($content['field_event_header_image']) && $view_mode == 'full'): ?>
    <style type="text/css">
      .page-header .page-banner {
        background-image: url("<?php echo file_create_url($content['field_event_header_image']['#items']['0']['uri']) ?>");
      }
    </style>
    <section class="page-banner">
      <div class="page-banner__inner">
        <div class="page-banner__content-area">
          <div class="page-banner__content">
            <hr />
            <?php echo render($title_prefix); ?>
              <h1 class="page-banner__title"<?php echo $title_attributes; ?>><?php echo render($title); ?></h1>
            <?php echo render($title_suffix); ?>
            <!-- <div class="page-banner__details"> -->
              <?php // if(isset($content['field_event_date'])): ?>
                <?php // echo render($content['field_event_date']); ?>
              <?php // endif; ?>
            <!-- </div> --><!-- Hiding the repeat date details for now. -->
            <hr />
            <div class="attribution">
              <?php echo $variables['attribution']; ?>
            </div>
          </div>
        </div>
      </div>
    </section>
    <?php endif; ?>
  </div>

  <div class="main-content">
    <div class="main-content__container" ng-app="cosComponentApp" ng-cloak>
      <div class="columns columns">
        <?php if ($view_mode == 'full'): ?>
        <div class="column">
          <div class="page-share">
            <?php echo render($content['sharethis']); ?>
          </div>
          <?php echo theme('breadcrumb', array('breadcrumb' => drupal_get_breadcrumb()));?>
        </div>
        <?php endif ?>
        <div class="column column page_top_100">
          <?php echo render($region['page_top_100']); ?>
        </div>
      </div>
      <div class="columns calendar-detail">
        <div class="column column--75">
          <div class="columns">
            <div class="column column--50">
              <h2 class="calendar-detail__title">About the Event</h2>
            </div>
            <div class="column column--50">
              <div class="calendar-detail__print">
                <a class="calendar-detail__print--button button-secondary" href="javascript:window.print()">Print</a>
              </div>
            </div>
          </div>
          <div class="content_main_75 component calendar-content">
            <div class="calendar-content__main">
              <div class="calendar-content__event-details">
                <span class="calendar-content__event-type">Event</span>
                <span class="calendar-content__occurrence"><?php echo render($content['field_event_date']); ?></span>
              <?php if (isset($content['field_event_location'])): ?>
              <div class="calendar-content__event-location">
                <h3>Location</h3>
              	<?php if ($node->field_event_location['und'][0]['name']): ?>
  	            <?php echo $node->field_event_location['und'][0]['name'];?><br/>
  	            <?php endif; ?>
  	            <?php if ($node->field_event_location['und'][0]['street']): ?>
  	            <?php echo $node->field_event_location['und'][0]['street'];?><br/>
  	            <?php endif; ?>
  	            <?php if ($node->field_event_location['und'][0]['additional']): ?>
  	            <?php echo $node->field_event_location['und'][0]['additional'];?><br/>
  	            <?php endif; ?>
  	            <?php if (($node->field_event_location['und'][0]['city']) && ($node->field_event_location['und'][0]['province']) && ($node->field_event_location['und'][0]['postal_code'])): ?>
  	            <?php echo $node->field_event_location['und'][0]['city'];?>, <?php echo $node->field_event_location['und'][0]['province']; ?> <?php echo $node->field_event_location['und'][0]['postal_code']; ?>
  	            <?php endif; ?>
              </div>
              <?php endif; ?>
              </div>
              <div class="rich-text-editor">
              <?php echo render($content['body']); ?>
              </div>
              <?php if (isset($content['field_event_attachments'])): ?>
                <section class="key-services__items component clearfix">
                  <div class="key-services__item event-flyer js-clickable">
                    <div class="key-services__icon">
                      <svg>
                        <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="/sites/all/themes/neato/somerville/img/svg-sprite.svg#note"></use>
                      </svg>
                    </div>
                    <a href="<?php echo render($content['field_event_attachments']); ?>" class="key-services__content js-clickable-link">
                      View Event Flyer (PDF)
                    </a>
                  </div>
                </section>
              <?php endif ?>
              <?php echo $event_documents_link; ?>
            </div>
            <div class="calendar-content__side">
              <p class="calendar-content__cost-wrapper">
                <span class="calendar-content__cost">Cost:</span> <span class="calendar-content__price"><?php echo render($content['field_event_cost']); ?></span>
              </p>
              <?php if (isset($content['field_event_is_accesible']['#items']['0']['value']) && ($content['field_event_is_accesible']['#items']['0']['value']) == 1): ?>
                <div class="calendar-content__accessibility">
                  <svg class="calendar-content__icon">
                    <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="/sites/all/themes/neato/somerville/img/svg-sprite.svg#wheelchair"></use>
                  </svg>
                  <span class="calendar-content__accessibility-text">Accessible</span>
                  <svg class="calendar-content__icon--check">
                    <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="/sites/all/themes/neato/somerville/img/svg-sprite.svg#check-mark-3"></use>
                  </svg>
                </div>
              <?php endif; ?>
              <!-- TODO // special assistance link -->
              <p class="calendar-content__accommodations">
                Need special assistance? <a href="#" class="link-secondary">Request accommodations</a>
              </p>
              <div class="calendar__add-embed calendar-detail component">
                <section class="calendar-detail__embed">
                  <div title="Add to Calendar" class="addeventatc">
                    Add to Calendar
                      <span class="start"><?php echo format_date(strtotime($node->field_event_date['und'][0]['value']), 'custom', 'm/d/Y h:i A', 'America/Anchorage'); ?></span>
                      <span class="end"><?php echo format_date(strtotime($node->field_event_date['und'][0]['value2']), 'custom', 'm/d/Y h:i A', 'America/Anchorage'); ?></span>
                      <span class="timezone">America/New_York</span>
                      <span class="title"><?php echo render($title); ?></span>
                      <span class="description"><?php echo render($content['body']); ?></span>
                      <span class="location">
                        <?php if ($node->field_event_location['und'][0]['name']): ?>
                          <?php echo $node->field_event_location['und'][0]['name'];?><br/>
                        <?php endif; ?>
                      </span>
                      <span class="organizer"><?php if (isset($content['field_event_contact_name'])): print render($content['field_event_contact_name']); endif; ?></span>
                      <span class="organizer_email"><?php if (isset($content['field_event_contact_email'])): print render($content['field_event_contact_email']); endif;  ?></span>
                      <span class="date_format">MM/DD/YYYY</span>
                  </div>
                </section>
            <section class="calendar-detail__add form-elements hidden">
              <h3>Embed:</h3>
              <input type="text" value="Triple-click this text to select all inside of this read-only textbox, so you can easily copy it out. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Ducimus magnam dolores accusamus quo facilis ab, consequatur perspiciatis nam eaque fugiat. Distinctio at velit esse dolorem nulla accusamus expedita perferendis ducimus!">
            </section>
          </div>

            </div>
            <?php // print render($content); ?>
          </div>
          <!-- TODO // Embed options -->
          <!-- End TODO -->
          <!-- TODO // I'm Going RSVP -->
          <!-- NOTE: This button is duplicated on this page -->
          <!-- <a href="#" class="button-primary calendar-detail__register-button">I'm Going!</a> -->
          <?php echo render($content['webform']); ?>
          <!-- End TODO -->
          <?php if (isset($content['field_event_location'])): ?>
            <section class="location component">
              <h2>Location</h2>
              <!-- <p class="location__map-address"><a href="https://www.google.com/maps/place/Eat+At+Jumbo's/@42.399633,-71.111835,17z/data=!3m1!4b1!4m2!3m1!1s0x89e376d87ec940a9:0x9ba6ce598ab6e892?hl=en-US" target="_blank">Eat At Jumbo's - 688 Broadway, Somerville, MA 02144</a></p> -->
              <div class="location__map-container">
                <!-- height and width attributes are required for IE9 -->
                <!-- <iframe height="380" width="900" src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d1473.1600791767114!2d-71.11173307606117!3d42.39962705789038!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x89e376d87ec940a9%3A0x9ba6ce598ab6e892!2sEat+At+Jumbo&#39;s!5e0!3m2!1sen!2sus!4v1433872692090" frameborder="0" style="border:0"></iframe> -->
                <?php echo render($content['field_event_location']); ?>
              </div>
            </section>
          <?php endif; ?>
          <div class="content content_below_75 component">
            <?php echo render($region['content_below_75']); ?>
          </div>
        </div>
        <div class="column column--25">
          <!-- TODO // I'm Going RSVP -->
          <!-- NOTE: This button is duplicated on this page -->
          <!-- <a href="#" class="button-primary calendar-detail__register-button">I'm Going!</a> -->
          <?php echo render($content['webform']); ?>
          <!-- End TODO -->
          <div class="contact-sb js-contact-sb js-accordion-module component">
            <h2 class="accordion-link js-accordion-link">Contact</h2>
            <div class="contact-sb__accordion-content js-accordion-content">
            <?php if (isset($content['field_event_contact_name'])): ?>
              <section class="contact-sb__names">
                <?php echo render($content['field_event_contact_name']); ?>
              </section>
            <?php endif; ?>
            <?php if (isset($content['field_event_contact_hours'])): ?>
              <section class="contact-sb__hours">
                <h3>Hours</h3>
                <?php echo render($content['field_event_contact_hours']); ?>
              </section>
            <?php endif; ?>
            <?php if (isset($content['field_event_contact_phone_number'])): ?>
              <section class="contact-sb__phones">
                <h3>Phone</h3>
                <?php echo render($content['field_event_contact_phone_number']); ?>
              </section>
            <?php endif; ?>
            <?php if (isset($content['field_event_contact_email'])): ?>
              <section class="contact-sb__emails">
                <h3>Email</h3>
                <?php echo render($content['field_event_contact_email']); ?>
              </section>
            <?php endif; ?>
            <?php if (isset($content['field_event_contact_location'])): ?>
              <section>
                <h3>Address</h3>
                <?php echo render($content['field_event_contact_location']); ?>
              </section>
            <?php endif ?>
              <a class="cta-secondary" href="/staff-contact-directory">View All Staff Contacts</a>
            </div>
          </div>
          <?php if (isset($content['field_event_department'])): ?>
          <div class="department-sb component">
            <h2 class="">Presented by</h2>
            <div class="department-sb__content">
              <section>
                <?php echo render($content['field_event_department']); ?>
              </section>
            </div>
          </div>
          <?php endif; ?>
          <?php echo render($region['sidebar_25']); ?>
        </div>
      </div>
      <div class="columns">
        <div class="column">
          <div class="column column--50 page_left_50">
            <?php echo render($region['page_left_50']); ?>
          </div>
          <div class="column column--50 page_right_50">
            <?php echo render($region['page_right_50']); ?>
          </div>
        </div>
      </div>
      <div class="columns">
        <div class="column column--100 page_bottom_100">
          <?php echo render($region['page_bottom_100']); ?>
        </div>
      </div>
    </div>
  </div>
  <span property="dc:type" content="<?php echo $node_content_type; ?>" class="rdf-meta element-hidden"></span>
  <?php echo $depts; ?>
</div>
<?php debug_template_end(__FILE__); ?>
