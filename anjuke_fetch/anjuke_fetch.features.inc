<?php
/**
 * @file
 * anjuke_fetch.features.inc
 */

/**
 * Implements hook_views_api().
 */
function anjuke_fetch_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function anjuke_fetch_node_info() {
  $items = array(
    'house' => array(
      'name' => t('House'),
      'base' => 'node_content',
      'description' => t('House information.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
