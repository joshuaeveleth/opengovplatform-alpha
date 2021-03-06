<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ogpl_metadata_template_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ogpl_metadata_template_node_info() {
  $items = array(
    'access_type_downloadable' => array(
      'name' => t('Downloadable'),
      'module' => 'features',
      'description' => t('EXTENSION-Access Type: Downloadable-specific metadata'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'agency' => array(
      'name' => t('Agency'),
      'module' => 'features',
      'description' => t('A department of a local or national government responsible for the oversight and administration of a specific function.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'catalog_type_data_apps' => array(
      'name' => t('Data Apps'),
      'module' => 'features',
      'description' => t('EXTENSION-Catalog type: Data Apps-specific Metadata'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'catalog_type_data_service' => array(
      'name' => t('Data Service'),
      'module' => 'features',
      'description' => t('EXTENSION-Catalog type: Data Service-specific Metadata'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'catalog_type_data_tools' => array(
      'name' => t('Data Tools'),
      'module' => 'features',
      'description' => t('EXTENSION-Catalog type: Data Tools-specific Metadata'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'catalog_type_document' => array(
      'name' => t('Document'),
      'module' => 'features',
      'description' => t('EXTENSION-Catalog type: Document-specific Metadata'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'catalog_type_raw_data' => array(
      'name' => t('Raw Data'),
      'module' => 'features',
      'description' => t('EXTENSION-Catalog type: Raw Data-specific Metadata'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'dataset' => array(
      'name' => t('Dataset'),
      'module' => 'features',
      'description' => t('An organized collection of data.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('Please provide a detailed description of the dataset or tool (e.g., an abstract) such that the user would be able to determine the nature and purpose of the data.'),
    ),
    'geospatial_metadata' => array(
      'name' => t('Geospatial Metadata'),
      'module' => 'features',
      'description' => t('EXTENSION-Category Designation: Additional Geospatial Metadata required for Geospatial Data Set'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'policy_program_data_quality' => array(
      'name' => t('U.S. Data Quality Act'),
      'module' => 'features',
      'description' => t('EXTENSION: Policy/Program Goal-specific Metadata - U.S. Data Quality Act'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'policy_program_open_government' => array(
      'name' => t('U.S. Open Government Directive'),
      'module' => 'features',
      'description' => t('EXTENSION: Policy/Program Goal-specific Metadata - U.S. Open Government Directive'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'policy_program_privacy' => array(
      'name' => t('U.S. Privacy Protection Statutes, Policies'),
      'module' => 'features',
      'description' => t('EXTENSION: Policy/Program Goal-specific Metadata -  U.S. privacy protection statutes, policies'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'profile' => array(
      'name' => t('Profile'),
      'module' => 'features',
      'description' => t('A user profile built as content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'sector' => array(
      'name' => t('Sector'),
      'module' => 'features',
      'description' => t('Categories of data assets'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'statistical_metadata' => array(
      'name' => t('Statistical Metadata'),
      'module' => 'features',
      'description' => t('EXTENSION-Category Designation: Additional Statistical Metadata required for Statistical Data Set.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'sub_agency' => array(
      'name' => t('Sub Agency'),
      'module' => 'features',
      'description' => t('Bureau or Sub-Agency or operating unit.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'sub_sector' => array(
      'name' => t('Sub-Sector'),
      'module' => 'features',
      'description' => t('Sub category of a sector'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'subject_keyword' => array(
      'name' => t('Subject Keyword'),
      'module' => 'features',
      'description' => t('Searchable keywords help users discover your datasets from different perspectives.  They also provide ways of identifying other datasets that are similar to yours.  Please include terms that would be used by both technical and non-technical users.  If the item being described is a \'data mining and/or extraction tool," then please provide keywords that describe the underlying dataset.   Agencies are encouraged to include as many keywords as possible.  Please use commas to separate keywords.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'target_audience' => array(
      'name' => t('Target Audience'),
      'module' => 'features',
      'description' => t('Target Audience of the data asset.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
