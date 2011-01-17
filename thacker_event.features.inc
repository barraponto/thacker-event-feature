<?php

/**
 * Implementation of hook_node_info().
 */
function thacker_event_node_info() {
  $items = array(
    'dt_event' => array(
      'name' => t('Event'),
      'module' => 'features',
      'description' => t('A geo-referenced event'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
