<?php
/**
 * @file
 * book_review.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function book_review_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function book_review_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function book_review_node_info() {
  $items = array(
    'book_review' => array(
      'name' => t('Book Review'),
      'base' => 'node_content',
      'description' => t('Template for individual book review by Jon'),
      'has_title' => '1',
      'title_label' => t('Book title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
