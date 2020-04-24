<?php
/**
 * @file
 * Returns the HTML for comments.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728216
 */

$user_c = user_load($comment->uid);
$full_name = $user_c->mail;
$comment_links = comment_links($comment, $node);

?>
<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

<style>
.<?php print 'comment-' . $comment->cid; ?>-overall-wrapper .user-picture img {
    border-radius: 50%;
    overflow: hidden;
    height: 40px;
    width: 40px;
    border: 0;
}

.<?php print 'comment-' . $comment->cid; ?>-overall-wrapper .inline-items {
  display: inline;
  width: initial;
  font-size: 12px;
}

.<?php print 'comment-' . $comment->cid; ?>-overall-wrapper  .user-picture {
  display: inline;
  float: left;
}

.<?php print 'comment-' . $comment->cid; ?>-overall-wrapper .comment-action-items ul li {
    text-transform: capitalize;
    margin: 3px 5px 0 0;
}

.<?php print 'comment-' . $comment->cid; ?>-overall-wrapper .field-name-field-comment-video .field-item{
  background-color: #ebedf0;
  padding: 20px;
}
</style>

<div class="<?php print $classes; ?> clearfix <?php print 'comment-'. $comment->cid; ?>-overall-wrapper"<?php print $attributes; ?>>
  <?php print $picture ?>
  <?php 
    print '<div class="inline-items" style="vertical-align: top;">';
    print '<div class="action-items comment-action-items pull-right">';
    print '</div>';
    print '<div class="inline-items-header" style="min-height: 40px;background-color: #ebedf0; border-radius: 18px; display: block; line-height: 16px;    padding: 8px 10px;">';
    print '<span style="margin-left: 10px;"> <b><a href="/user/' . $comment->uid . '">' . $full_name . '</a></b></span>';
    print isset($comment->comment_body['und'][0]['value']) ? '<div class="inline-items-comment" style="display:inline-block;width:initial;margin-left: 10px;font-size: 12px;">' . $comment->comment_body['und'][0]['value'] . '</div>' : '';

    print '<div class="inline-items-content" style="color: #616770;">' . date("m-d-Y g:i a", $comment->created) . '</div>';

    print render($content['links']);

    print '</div>';
    
    print '</div><p></p>';
  ?>

</div>


</article>
