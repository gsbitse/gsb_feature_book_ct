<?php
/**
 * @file
 * gsb_feature_book_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_book_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__book';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'event_listing' => array(
        'custom_settings' => FALSE,
      ),
      'event_upcoming' => array(
        'custom_settings' => FALSE,
      ),
      'featured' => array(
        'custom_settings' => FALSE,
      ),
      'megamenu' => array(
        'custom_settings' => FALSE,
      ),
      'people_fpp' => array(
        'custom_settings' => FALSE,
      ),
      'phd_job_market_candidate' => array(
        'custom_settings' => FALSE,
      ),
      'media_contact' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_listing' => array(
        'custom_settings' => TRUE,
      ),
      'views_content_pane' => array(
        'custom_settings' => TRUE,
      ),
      'idea_story_related' => array(
        'custom_settings' => TRUE,
      ),
      'insight_featured_card' => array(
        'custom_settings' => TRUE,
      ),
      'news_listing' => array(
        'custom_settings' => TRUE,
      ),
      'idea_story_latest_stories' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_top_stories' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_featured_content' => array(
        'custom_settings' => TRUE,
      ),
      'alumni_reunion_agenda_list' => array(
        'custom_settings' => FALSE,
      ),
      'act_project_by_criteria' => array(
        'custom_settings' => FALSE,
      ),
      'act_project_listing' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_name' => array(
        'custom_settings' => FALSE,
      ),
      'compact' => array(
        'custom_settings' => TRUE,
      ),
      'expanded' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '17',
        ),
        'title' => array(
          'weight' => '2',
        ),
        'path' => array(
          'weight' => '16',
        ),
        'workbench_access' => array(
          'weight' => '1',
        ),
        'redirect' => array(
          'weight' => '19',
        ),
      ),
      'display' => array(
        'gsb_feature_book_ct_faculty_authors' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'teaser_listing' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'idea_story_related' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'insight_featured_card' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'news_listing' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'alumni_featured_content' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'views_content_pane' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'compact' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'expanded' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'gsb_feature_base_fields_faculty_authors' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'teaser_listing' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'idea_story_related' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'insight_featured_card' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'news_listing' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'alumni_featured_content' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'views_content_pane' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'compact' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'expanded' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_book';
  $strongarm->value = array();
  $export['menu_options_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_book';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_book';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_book';
  $strongarm->value = '0';
  $export['node_preview_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_book';
  $strongarm->value = 0;
  $export['node_submitted_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_book_pattern';
  $strongarm->value = 'faculty-research/books/[node:title]';
  $export['pathauto_node_book_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_book';
  $strongarm->value = 0;
  $export['workbench_access_node_type_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_book';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_book';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_book'] = $strongarm;

  return $export;
}
