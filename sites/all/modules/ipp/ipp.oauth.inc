<?php
function hook_oauth_info() {
  return array(
    'ipp' => array(
      'name' => t('Intuit Partner Platform'),
      'base' => 'ipp',
      'description' => 'Adds integration with the QuickBooks API.',
      'version' => '1.0',
      'token table' => array(
        'token length' => 64,
      ),
    ),
  );
}
