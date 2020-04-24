<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<div id="page">

  <header class="header" id="header" role="banner">
	  <div class="inner-container">

    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
    <?php endif; ?>

    <div class="user-nav-container"> 
       <div class="user-nav" >
           <style type="text/css">
               .imls-sr-only {
                   display:none;
               }
           </style>
           <script type="text/javascript">
               //<![CDATA[
               var usasearch_config = {siteHandle: "imls"};
               var script = document.createElement("script");
               script.type = "text/javascript";
               script.src = "//search.usa.gov/javascripts/remote.loader.js";
               document.getElementsByTagName("head")[0].appendChild(script);
               //]]>
           </script>
           <form class="imls-search imls-search-small js-search-form imls-sr-only" accept-charset="UTF-8" action="https://search.usa.gov/search" id="search_form" method="get">
               <div role="search">
                   <div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;"/></div>
                   <input id="affiliate" name="affiliate" type="hidden" value="imls"/>
                   <label class="imls-sr-only" for="Hidden Search Field">Search small</label>
                   <input autocomplete="off" class="usagov-search-autocomplete" id="Hidden Search Field" name="query" type="text" name="query">
                   <button type="submit">
                       <span class="usa-sr-only"><i class="fa fa-search" aria-hidden="true"></i> <span class="hide-text">Search</span></span>
                   </button>
               </div>
           </form>
        <ul>
          <li>
          	<button id="hidden-search" class="usa-header-search-button js-search-button" role="button"><i class="fa fa-search" aria-hidden="true"></i><span class="hide-text">Search</span></button></li>
        </ul>
       </div>
    </div>

    <?php if ($site_name || $site_slogan): ?>
      <div class="header__name-and-slogan" id="name-and-slogan">
        <?php if ($site_name): ?>
          <h1 class="header__site-name" id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>
      </div>
    <?php endif; ?>

    <?php if ($secondary_menu): ?>
      <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
        <?php print theme('links__system_secondary_menu', array(
          'links' => $secondary_menu,
          'attributes' => array(
            'class' => array('links', 'inline', 'clearfix'),
          ),
          'heading' => array(
            'text' => $secondary_menu_heading,
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>
      </nav>
    <?php endif; ?>

    <?php print render($page['header']); ?>
	  </div>
  </header>

  
	<?php
	  if(user_is_logged_in()) {
	  	print '<div class="header-social-media" style="right:275px;"> <a href="/user"> My Account</a> | <a href="/user/logout"> Log out</a></div>';
	  }
	?>

  <a name="main-menu" class="tabstop-processed"></a>
  <div id="navigation">
	  <div class="inner-container">
	    <?php if ($main_menu): ?>
	      <nav id="main-menu" role="navigation" tabindex="-1">
	        <?php
	        // This code snippet is hard to modify. We recommend turning off the
	        // "Main menu" on your sub-theme's settings form, deleting this PHP
	        // code block, and, instead, using the "Menu block" module.
	        // @see https://drupal.org/project/menu_block
	        print theme('links__system_main_menu', array(
	          'links' => $main_menu,
	          'attributes' => array(
	            'class' => array('links', 'inline', 'clearfix'),
	          ),
	          'heading' => array(
	            'text' => t('Main menu'),
	            'level' => 'h2',
	            'class' => array('element-invisible'),
	          ),
	        )); ?>
	      </nav>
	    <?php endif; ?>
	
	
	    <?php print render($page['navigation']); ?>
	  </div>
  </div>

  <div id="main">
		<div class="inner-container">
	    <div id="content" class="column" role="main">
	      <div class="content-inner">
	        <?php print render($page['highlighted']); ?>
	        <?php print $breadcrumb; ?>
	        <a id="main-content"></a>
	        <?php print render($title_prefix); ?>
	        <?php if ($title): ?>
	          <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
	        <?php endif; ?>
	        <?php print render($title_suffix); ?>
	        <?php print $messages; ?>
	        <?php print render($tabs); ?>
	        <?php print render($page['help']); ?>
	        <?php if ($action_links): ?>
	          <ul class="action-links"><?php print render($action_links); ?></ul>
	        <?php endif; ?>
	        <?php print render($page['content']); ?>
	        <?php print $feed_icons; ?>
	      </div>
	    </div>
	
	    <?php
	      // Render the sidebars to see if there's anything in them.
	      $sidebar_first = render($page['sidebar_first']);
	      $sidebar_second = render($page['sidebar_second']);
	      ?>
	
	      <?php if ($sidebar_first || $sidebar_second): ?>
	          <aside class="sidebars">
	            <?php print $sidebar_first; ?>
	            <?php print $sidebar_second; ?>
	          </aside>
	      <?php endif; ?>
	
	    </div>
  </div>
  
</div>


<div class="content-bottom-wrapper">
	<div class="content-bottom-inner inner-container">
		<?php print render($page['content_bottom']); ?>
	</div>
</div>


<div class="superfooter-wrapper">
	<div class="superfooter-inner">
		<?php print render($page['superfooter']); ?>
	</div>
</div>


<div class="footer-wrapper">
	<div class="footer-inner">
		<?php print render($page['footer']); ?>
	</div>
</div>

<div class="bottom-container">
  <div class="bottom-section">  
		<?php print render($page['bottom']); ?>
  </div>
</div>
