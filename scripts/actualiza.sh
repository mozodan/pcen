#!/bin/bash 


drush fr drpl_paragraphs -y
drush fr drpl_terms -y
drush fr drpl_regulations -y
drush fr drpl_news -y
drush fr drpl_events -y
drush fr drpl_videos -y
drush fr drpl_frequent_questions -y
drush fr drpl_publications -y
drush fr drpl_formalities -y
drush fr drpl_press_releases -y
drush fr drpl_main_information -y
drush fr drpl_landing -y
drush fr drpl_translations -y


drush field-delete field_counseling

drush en drpl_press_conferences -y
drush en drpl_persons -y
