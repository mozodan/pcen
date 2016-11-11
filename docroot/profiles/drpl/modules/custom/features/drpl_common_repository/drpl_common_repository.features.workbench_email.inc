<?php
/**
 * @file
 * drpl_common_repository.features.workbench_email.inc
 */

/**
 * Implements hook_workbench_email_export().
 */
function drpl_common_repository_workbench_email_export() {
  $items = array(
    'draft:needs_review:revisor' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
      'author' => 0,
      'automatic' => 1,
      'subject' => 'New content to review',
      'message' => 'There is new content to review',
      'role' => 'revisor',
    ),
    'needs_review:draft:original author' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
      'author' => 1,
      'automatic' => 1,
      'subject' => 'Content rejected',
      'message' => 'Your content has been rejected',
      'role' => 'original author',
    ),
  );
  return $items;
}
