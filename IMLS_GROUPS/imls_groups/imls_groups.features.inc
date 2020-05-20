<?php

/**
 * @file
 * imls_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imls_groups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function imls_groups_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function imls_groups_node_info() {
  $items = array(
    'community' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => t('Community of Practice'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'document' => array(
      'name' => t('Group Document'),
      'base' => 'node_content',
      'description' => t('Document content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'group_event' => array(
      'name' => t('Group Event'),
      'base' => 'node_content',
      'description' => t('Group Event Content Type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'group_post' => array(
      'name' => t('Group Post'),
      'base' => 'node_content',
      'description' => t('Group Post Content Type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
