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
hide($content['field_tabbed_content']);
debug_template_start(__FILE__, $theme_hook_suggestions);
// die('<pre>' . print_r( $content['field_tabbed_content'], 1) . '</pre>');
?>

<div id="node-<?php echo $node->nid; ?>" class="rdf-info <?php echo $classes; ?>"<?php echo $attributes; ?>>
  <div class="page-header">
    <?php if (isset($content['field_header_image']) && $view_mode == 'full'): ?>
    <style type="text/css">
      .page-header .page-banner {
        background-image: url("<?php echo file_create_url($content['field_header_image']['#items']['0']['uri']) ?>");
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
            <hr />
            <div class="attribution">
              <?php echo $variables['attribution']; ?>
            </div>
            </div>
          </div>
        </div>
      </div>
    </section>
    <?php endif; ?>
  </div>

  <div class="main-content">
    <div class="main-content__container" ng-app="cosComponentApp" ng-cloak>
      <?php if ($view_mode == 'full'): ?>
        <div class="columns">
          <div class="column">
            <div class="page-share">
              <?php echo render($content['sharethis']); ?>
            </div>
            <?php echo theme('breadcrumb', array('breadcrumb' => drupal_get_breadcrumb()));?>
          </div>
        </div>
      <?php endif ?>
      <div class="columns columns--reversed">
        <div class="column column--25">
          <div class="contact-sb js-contact-sb js-accordion-module component">
            <h2 class="accordion-link js-accordion-link">Contact</h2>
            <div class="contact-sb__accordion-content js-accordion-content">
              <?php echo render($content['field_contact_information']); ?>
              <a class="cta-secondary" href="/staff-contact-directory">View All Staff Contacts</a>
            </div>
          </div>
          <?php echo render($content['field_org_unit_cross_promotion']); ?>
          <?php echo render($content['field_sidebar_links']); ?>
          <?php echo render($region['sidebar_25']); ?>
        </div>
        <div class="column column--75">
          <div class="rich-text-editor component">
            <?php if (isset($content['field_programs_subtitle'])): ?>
              <h2><?php echo render($content['field_programs_subtitle']); ?></h2>
            <?php else: ?>
              <h2>About <?php echo render($title); ?></h2>
            <?php endif ?>
            <div>
            <?php if (isset($content['body']['#items'][0]['safe_summary'])): ?>
              <?php echo render($content['body']['#items'][0]['safe_summary']); ?>
              <div class="rich-text-editor">
            <?php endif ?>
            <?php echo render($content['body']); ?>
            <?php if (isset($content['body']['#items'][0]['safe_summary'])): ?>
              </div>
            <?php endif ?>
            </div>
          </div>
          <div class="tabbed-content component" ng-controller="TabCtrl as tab" >
            <?php echo render($content['field_tabbed_content']); ?>
          </div>
          <div class="content content_below_75 component">
            <?php echo render($region['content_below_75']); ?>
          </div>
        </div>
        <div class="column">
          <div class="column column--50 page_left_50">
            <?php echo render($region['page_left_50']); ?>
          </div>
          <div class="column column--50 page_right_50">
            <?php echo render($region['page_right_50']); ?>
          </div>
        </div>
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
