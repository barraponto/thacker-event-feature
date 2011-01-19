<?php

/**
 * Implementation of hook_strongarm().
 */
function thacker_event_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_dt_event';
  $strongarm->value = 0;

  $export['comment_anonymous_dt_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_dt_event';
  $strongarm->value = '3';

  $export['comment_controls_dt_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_dt_event';
  $strongarm->value = '4';

  $export['comment_default_mode_dt_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_dt_event';
  $strongarm->value = '1';

  $export['comment_default_order_dt_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_dt_event';
  $strongarm->value = '30';

  $export['comment_default_per_page_dt_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_dt_event';
  $strongarm->value = '2';

  $export['comment_dt_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_dt_event';
  $strongarm->value = '1';

  $export['comment_form_location_dt_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_dt_event';
  $strongarm->value = '0';

  $export['comment_preview_dt_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_dt_event';
  $strongarm->value = '1';

  $export['comment_subject_field_dt_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_dt_event';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_dt_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_date_field_dt_event';
  $strongarm->value = 'field_event_date';

  $export['signup_date_field_dt_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_node_default_state_dt_event';
  $strongarm->value = 'enabled_on';

  $export['signup_node_default_state_dt_event'] = $strongarm;
  return $export;
}
