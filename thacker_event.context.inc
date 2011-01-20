<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function thacker_event_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event';
  $context->description = 'The Thacker.com.br Events and Calendar overview';
  $context->tag = 'section';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'dt_event_page' => 'dt_event_page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'thacker_event-0' => array(
          'module' => 'thacker_event',
          'delta' => 0,
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views--exp-dt_event_page-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-dt_event_page-page_1',
          'region' => 'preface_top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('The Thacker.com.br Events and Calendar overview');
  t('section');

  $export['event'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_node';
  $context->description = 'Event node view';
  $context->tag = 'node';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'dt_event' => 'dt_event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-dt_event_signup_block-block' => array(
          'module' => 'views',
          'delta' => 'dt_event_signup_block-block',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-dt_event_signup_block-block_1' => array(
          'module' => 'views',
          'delta' => 'dt_event_signup_block-block_1',
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
        'views-dt_project_skills-block_1' => array(
          'module' => 'views',
          'delta' => 'dt_project_skills-block_1',
          'region' => 'sidebar_last',
          'weight' => 2,
        ),
        'views-dt_event_promo-block_1' => array(
          'module' => 'views',
          'delta' => 'dt_event_promo-block_1',
          'region' => 'preface_top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Event node view');
  t('node');

  $export['event_node'] = $context;
  return $export;
}
