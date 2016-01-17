<?php
 
/**
 * Example secret settings PHP file for making site run on your local install.
 * 
 * http://www.thirdandgrove.com/the-drupal-settings-file-done-right/
 * 
 */
 
$databases['default']['default'] = array(
  'driver' => 'mysql',
  'database' => 'dbname',
  'username' => 'root',
  'password' => '',
  'host' => '127.0.0.1',
  'prefix' => '',
  'collation' => 'utf8_general_ci',
);
 
// This allows us to use Drush without a Drush alias.
if (php_sapi_name() == 'cli') {
  $databases['default']['default']['port'] = '3307';
 
  $conf['memcache_servers'] = array(
    '127.0.0.1:11212' => 'default',
  );
}
 
// For local development we need to make the local solr server is the default.
$conf['apachesolr_default_environment'] = 'solr';
 
// Force showing PHP errors.
error_reporting(E_ALL);
ini_set('display_errors', '1');
 
$conf['file_temporary_path'] = '/tmp';
 
$conf['securepages_basepath'] = 'http://127.0.0.1:8080';
$conf['securepages_basepath_ssl'] = 'https://127.0.0.1:8443';
 
// If we didn't set this than base_url would be used for the cookie domain and
// that is different on http v https when both use different non-standard port
// numbers.
$cookie_domain = 'localhost';