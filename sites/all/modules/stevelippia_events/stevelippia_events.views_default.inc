<?php
/**
 * @file
 * stevelippia_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stevelippia_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no upcoming events with the chosen filters. Please refine your selections and try again.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'stevelippia_event_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
  $handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_1']['settings'] = array(
    'format_type' => 'stevelippia_event_month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Specific Show */
  $handler->display->display_options['fields']['field_specific_show']['id'] = 'field_specific_show';
  $handler->display->display_options['fields']['field_specific_show']['table'] = 'field_data_field_specific_show';
  $handler->display->display_options['fields']['field_specific_show']['field'] = 'field_specific_show';
  $handler->display->display_options['fields']['field_specific_show']['label'] = '';
  $handler->display->display_options['fields']['field_specific_show']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_specific_show']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_specific_show']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="event-wrapper">
  <div class="event-date">
    <div class="event-month">[field_date_1]</div>
    <div class="event-day">[field_date]</div>
  </div>
  <div class="event-content">
    <div class="event-title">[title]</div>
    <div class="event-body">[body]</div>
    <span class="event-location">[field_location]</span>&nbsp;<span class="event-show">[field_specific_show]</span>
  </div>
<hr />
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Location (field_location) */
  $handler->display->display_options['filters']['field_location_tid']['id'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_tid']['field'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_tid']['expose']['operator_id'] = 'field_location_tid_op';
  $handler->display->display_options['filters']['field_location_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_location_tid']['expose']['operator'] = 'field_location_tid_op';
  $handler->display->display_options['filters']['field_location_tid']['expose']['identifier'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_tid']['vocabulary'] = 'location';
  /* Filter criterion: Content: Specific Show (field_specific_show) */
  $handler->display->display_options['filters']['field_specific_show_tid']['id'] = 'field_specific_show_tid';
  $handler->display->display_options['filters']['field_specific_show_tid']['table'] = 'field_data_field_specific_show';
  $handler->display->display_options['filters']['field_specific_show_tid']['field'] = 'field_specific_show_tid';
  $handler->display->display_options['filters']['field_specific_show_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_specific_show_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_specific_show_tid']['expose']['operator_id'] = 'field_specific_show_tid_op';
  $handler->display->display_options['filters']['field_specific_show_tid']['expose']['label'] = 'Specific Show';
  $handler->display->display_options['filters']['field_specific_show_tid']['expose']['operator'] = 'field_specific_show_tid_op';
  $handler->display->display_options['filters']['field_specific_show_tid']['expose']['identifier'] = 'field_specific_show_tid';
  $handler->display->display_options['filters']['field_specific_show_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_specific_show_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_specific_show_tid']['vocabulary'] = 'specific_show';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('page', 'Upcoming', 'page');
  $handler->display->display_options['path'] = 'events';
  $export['events'] = $view;

  return $export;
}
