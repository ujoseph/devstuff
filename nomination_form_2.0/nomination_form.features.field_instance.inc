<?php

/**
 * @file
 * nomination_form.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function nomination_form_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-2021_nomination_form-field_ceo_email'.
  $field_instances['entityform-2021_nomination_form-field_ceo_email'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_ceo_email',
    'label' => 'E-mail',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_ceo_telephone_number'.
  $field_instances['entityform-2021_nomination_form-field_ceo_telephone_number'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone',
        'weight' => 8,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_ceo_telephone_number',
    'label' => 'Telephone Number',
    'required' => 0,
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'description_display' => 'after',
      'phone_country_code' => 0,
      'phone_default_country_code' => 1,
      'phone_int_max_length' => 15,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'entityform-2021_nomination_form-field_ceo_title'.
  $field_instances['entityform-2021_nomination_form-field_ceo_title'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_ceo_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_congressional_district_of_'.
  $field_instances['entityform-2021_nomination_form-field_congressional_district_of_'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_congressional_district_of_',
    'label' => 'Congressional District of Nominated Organization',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_gov_other_please_specify'.
  $field_instances['entityform-2021_nomination_form-field_gov_other_please_specify'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_gov_other_please_specify',
    'label' => 'Other, please specify',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_governing_control_check_on'.
  $field_instances['entityform-2021_nomination_form-field_governing_control_check_on'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_governing_control_check_on',
    'label' => 'Governing Control (check one):',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_has_the_nominated_organiza'.
  $field_instances['entityform-2021_nomination_form-field_has_the_nominated_organiza'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_has_the_nominated_organiza',
    'label' => 'Has the nominated organization had an A-133 audit in the past three years?',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_if_no_has_the_nominated_or'.
  $field_instances['entityform-2021_nomination_form-field_if_no_has_the_nominated_or'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_if_no_has_the_nominated_or',
    'label' => 'If no, has the nominated organization had a financial statement audit in the past three years?',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 27,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_if_the_nominated_organizat'.
  $field_instances['entityform-2021_nomination_form-field_if_the_nominated_organizat'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the nominated organization had a deficit greater than 10% of your annual operating budget for either of the fiscal
years listed above, please explain the circumstances of this deficit.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_if_the_nominated_organizat',
    'label' => 'If the nominated organization had a deficit greater than 10% of your annual operating budget for either of the fiscal years list',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_legal_name_of_the_nominate'.
  $field_instances['entityform-2021_nomination_form-field_legal_name_of_the_nominate'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If your organization is not eligible on its own, then enter the name and address of the eligible entity under “Legal Name.” For example, if a library that is part of a parent organization such as a university is being nominated, it would enter the university under “Legal Name” and the library under “Organizational Unit.” ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_legal_name_of_the_nominate',
    'label' => 'Legal Name of the Nominated Organization',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_material_weakeness_explain'.
  $field_instances['entityform-2021_nomination_form-field_material_weakeness_explain'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_material_weakeness_explain',
    'label' => 'If yes, please explain.',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 29,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_most_recent_difference'.
  $field_instances['entityform-2021_nomination_form-field_most_recent_difference'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 42,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_most_recent_difference',
    'label' => 'Difference between B. Total Revenue and C. Total Expenses',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_most_recent_expense'.
  $field_instances['entityform-2021_nomination_form-field_most_recent_expense'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_most_recent_expense',
    'label' => 'C. List Total Expense/ Outlays',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_most_recent_revenue'.
  $field_instances['entityform-2021_nomination_form-field_most_recent_revenue'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_most_recent_revenue',
    'label' => 'B. List Total Revenue/ Support Income',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_most_recently_completed_fy'.
  $field_instances['entityform-2021_nomination_form-field_most_recently_completed_fy'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_most_recently_completed_fy',
    'label' => 'A. Most recently completed FY',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_name_of_nominated_organiza'.
  $field_instances['entityform-2021_nomination_form-field_name_of_nominated_organiza'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_name_of_nominated_organiza',
    'label' => 'Name of Nominated Organization’s Director/CEO',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_name_of_nominator'.
  $field_instances['entityform-2021_nomination_form-field_name_of_nominator'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 26,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_name_of_nominator',
    'label' => 'Name of Nominator',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_name_of_person_completing_'.
  $field_instances['entityform-2021_nomination_form-field_name_of_person_completing_'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 44,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_name_of_person_completing_',
    'label' => 'Name of Person Completing This Form',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 39,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_narrative_maximum_of_2500_'.
  $field_instances['entityform-2021_nomination_form-field_narrative_maximum_of_2500_'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 32,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_narrative_maximum_of_2500_',
    'label' => 'Narrative (maximum of 2500 words)',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 34,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_nominated_organization_add'.
  $field_instances['entityform-2021_nomination_form-field_nominated_organization_add'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_nominated_organization_add',
    'label' => 'Nominated Organization Address',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_nominated_organization_s_a'.
  $field_instances['entityform-2021_nomination_form-field_nominated_organization_s_a'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_nominated_organization_s_a',
    'label' => 'Nominated Organization’s Annual Operating Budget:',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_nominated_organization_s_d'.
  $field_instances['entityform-2021_nomination_form-field_nominated_organization_s_d'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_nominated_organization_s_d',
    'label' => 'Nominated Organization’s D-U-N-S® Number',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_nominated_organization_s_e'.
  $field_instances['entityform-2021_nomination_form-field_nominated_organization_s_e'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 48,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_nominated_organization_s_e',
    'label' => 'Nominated Organization’s Employer/Taxpayer Number (EIN/TIN):',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_nominator_email'.
  $field_instances['entityform-2021_nomination_form-field_nominator_email'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 28,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_nominator_email',
    'label' => 'E-mail',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 26,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_nominator_telephone_number'.
  $field_instances['entityform-2021_nomination_form-field_nominator_telephone_number'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone',
        'weight' => 30,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_nominator_telephone_number',
    'label' => 'Telephone Number',
    'required' => 0,
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'description_display' => 'after',
      'phone_country_code' => 0,
      'phone_default_country_code' => 1,
      'phone_int_max_length' => 15,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 30,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_nominator_title'.
  $field_instances['entityform-2021_nomination_form-field_nominator_title'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 27,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_nominator_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_number_of_full_time_paid_o'.
  $field_instances['entityform-2021_nomination_form-field_number_of_full_time_paid_o'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_number_of_full_time_paid_o',
    'label' => 'Number of full-time paid organization staff',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_number_of_full_time_unpaid'.
  $field_instances['entityform-2021_nomination_form-field_number_of_full_time_unpaid'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_number_of_full_time_unpaid',
    'label' => 'Number of full-time unpaid organization staff (including volunteers)',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_number_of_part_time_paid_o'.
  $field_instances['entityform-2021_nomination_form-field_number_of_part_time_paid_o'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_number_of_part_time_paid_o',
    'label' => 'Number of part-time paid organization staff',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_number_of_part_time_unpaid'.
  $field_instances['entityform-2021_nomination_form-field_number_of_part_time_unpaid'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_number_of_part_time_unpaid',
    'label' => 'Number of part-time unpaid organization staff (including volunteers)',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_org_other_please_specify'.
  $field_instances['entityform-2021_nomination_form-field_org_other_please_specify'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_org_other_please_specify',
    'label' => 'Other, please specify',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_organizational_unit_if_dif'.
  $field_instances['entityform-2021_nomination_form-field_organizational_unit_if_dif'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_organizational_unit_if_dif',
    'label' => 'Organizational Unit (if different from Legal Name)',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_person_completing_e_mail'.
  $field_instances['entityform-2021_nomination_form-field_person_completing_e_mail'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 46,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_person_completing_e_mail',
    'label' => 'E-mail',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 41,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_person_completing_telephon'.
  $field_instances['entityform-2021_nomination_form-field_person_completing_telephon'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone',
        'weight' => 47,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_person_completing_telephon',
    'label' => 'Telephone Number',
    'required' => 0,
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'description_display' => 'after',
      'phone_country_code' => 0,
      'phone_default_country_code' => 1,
      'phone_int_max_length' => 15,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 42,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_person_completing_title'.
  $field_instances['entityform-2021_nomination_form-field_person_completing_title'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_person_completing_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 40,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_relationship_to_organizati'.
  $field_instances['entityform-2021_nomination_form-field_relationship_to_organizati'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 29,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_relationship_to_organizati',
    'label' => 'Relationship to Organization',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 29,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_second_most_recent_diff'.
  $field_instances['entityform-2021_nomination_form-field_second_most_recent_diff'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 43,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_second_most_recent_diff',
    'label' => 'Difference between B. Total Revenue and C. Total Expenses',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_second_most_recent_expense'.
  $field_instances['entityform-2021_nomination_form-field_second_most_recent_expense'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_second_most_recent_expense',
    'label' => 'C. List Total Expense/ Outlays',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_second_most_recent_revenue'.
  $field_instances['entityform-2021_nomination_form-field_second_most_recent_revenue'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 38,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_second_most_recent_revenue',
    'label' => 'B. List Total Revenue/ Support Income',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_second_most_recently_compl'.
  $field_instances['entityform-2021_nomination_form-field_second_most_recently_compl'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_second_most_recently_compl',
    'label' => 'A. Second most recently completed FY',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_section_b_overview'.
  $field_instances['entityform-2021_nomination_form-field_section_b_overview'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 31,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_section_b_overview',
    'label' => 'Overview (maximum of 500 words)',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 33,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_section_d_letters'.
  $field_instances['entityform-2021_nomination_form-field_section_d_letters'] = array(
    'bundle' => '2021_nomination_form',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_section_d_letters',
    'label' => 'Letter #1',
    'required' => FALSE,
    'settings' => array(
      'description_field' => 0,
      'description_field_default' => '',
      'file_directory' => '',
      'file_extensions' => 'txt pdf doc docx png jpeg bmp',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 36,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_section_d_letters_of'.
  $field_instances['entityform-2021_nomination_form-field_section_d_letters_of'] = array(
    'bundle' => '2021_nomination_form',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_section_d_letters_of',
    'label' => 'Letter #3',
    'required' => FALSE,
    'settings' => array(
      'description_field' => 0,
      'description_field_default' => '',
      'file_directory' => '',
      'file_extensions' => 'txt pdf doc docx png jpeg bmp',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 38,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_section_d_letters_of_suppo'.
  $field_instances['entityform-2021_nomination_form-field_section_d_letters_of_suppo'] = array(
    'bundle' => '2021_nomination_form',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_section_d_letters_of_suppo',
    'label' => 'Letter #2',
    'required' => FALSE,
    'settings' => array(
      'description_field' => 0,
      'description_field_default' => '',
      'file_directory' => '',
      'file_extensions' => 'txt pdf doc docx png jpeg bmp',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'file',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'image' => 'image',
        ),
        'browser_plugins' => array(),
        'filefield_sources' => array(
          'filefield_sources' => array(),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 37,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_telephone_number'.
  $field_instances['entityform-2021_nomination_form-field_telephone_number'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_telephone_number',
    'label' => 'Telephone Number',
    'required' => 0,
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'description_display' => 'after',
      'phone_country_code' => 0,
      'phone_default_country_code' => 1,
      'phone_int_max_length' => 15,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_total_number_of_days_the_n'.
  $field_instances['entityform-2021_nomination_form-field_total_number_of_days_the_n'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 25,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_total_number_of_days_the_n',
    'label' => 'Total number of days the nominated organization was open to the public for the past 12-month period prior to application',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 30,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_type_of_organization_check'.
  $field_instances['entityform-2021_nomination_form-field_type_of_organization_check'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_type_of_organization_check',
    'label' => 'Type of Organization (check one)',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_web_address'.
  $field_instances['entityform-2021_nomination_form-field_web_address'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_web_address',
    'label' => 'Web Address',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'description_display' => 'after',
      'display' => array(
        'url_cutoff' => 800,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'none',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'entityform-2021_nomination_form-field_were_there_any_material_we'.
  $field_instances['entityform-2021_nomination_form-field_were_there_any_material_we'] = array(
    'bundle' => '2021_nomination_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '(A material weakness is a deficiency, or combination of deficiencies, in internal control, such that there is a
reasonable possibility that a material misstatement of the entity’s financial statements will not be prevented or
detected and corrected on a timely basis.)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_were_there_any_material_we',
    'label' => 'Were there any material weaknesses identified in the nominated organization’s prior year’s audit report?',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 28,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('(A material weakness is a deficiency, or combination of deficiencies, in internal control, such that there is a
reasonable possibility that a material misstatement of the entity’s financial statements will not be prevented or
detected and corrected on a timely basis.)');
  t('A. Most recently completed FY');
  t('A. Second most recently completed FY');
  t('B. List Total Revenue/ Support Income');
  t('C. List Total Expense/ Outlays');
  t('Congressional District of Nominated Organization');
  t('Difference between B. Total Revenue and C. Total Expenses');
  t('E-mail');
  t('Governing Control (check one):');
  t('Has the nominated organization had an A-133 audit in the past three years?');
  t('If no, has the nominated organization had a financial statement audit in the past three years?');
  t('If the nominated organization had a deficit greater than 10% of your annual operating budget for either of the fiscal
years listed above, please explain the circumstances of this deficit.');
  t('If the nominated organization had a deficit greater than 10% of your annual operating budget for either of the fiscal years list');
  t('If yes, please explain.');
  t('If your organization is not eligible on its own, then enter the name and address of the eligible entity under “Legal Name.” For example, if a library that is part of a parent organization such as a university is being nominated, it would enter the university under “Legal Name” and the library under “Organizational Unit.” ');
  t('Legal Name of the Nominated Organization');
  t('Letter #1');
  t('Letter #2');
  t('Letter #3');
  t('Name of Nominated Organization’s Director/CEO');
  t('Name of Nominator');
  t('Name of Person Completing This Form');
  t('Narrative (maximum of 2500 words)');
  t('Nominated Organization Address');
  t('Nominated Organization’s Annual Operating Budget:');
  t('Nominated Organization’s D-U-N-S® Number');
  t('Nominated Organization’s Employer/Taxpayer Number (EIN/TIN):');
  t('Number of full-time paid organization staff');
  t('Number of full-time unpaid organization staff (including volunteers)');
  t('Number of part-time paid organization staff');
  t('Number of part-time unpaid organization staff (including volunteers)');
  t('Organizational Unit (if different from Legal Name)');
  t('Other, please specify');
  t('Overview (maximum of 500 words)');
  t('Relationship to Organization');
  t('Telephone Number');
  t('Title');
  t('Total number of days the nominated organization was open to the public for the past 12-month period prior to application');
  t('Type of Organization (check one)');
  t('Web Address');
  t('Were there any material weaknesses identified in the nominated organization’s prior year’s audit report?');

  return $field_instances;
}
