<?php

/**
 * @file
 * nomination_form.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nomination_form_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_annual_budget|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_annual_budget';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '12. Nominated Organization’s Annual Operating Budget',
    'weight' => '21',
    'children' => array(
      0 => 'field_nominated_organization_s_a',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-annual-budget field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_annual_budget|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audit|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_audit';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '15. If no, has the nominated organization had a financial statement audit in the past three years?',
    'weight' => '26',
    'children' => array(
      0 => 'field_if_no_has_the_nominated_or',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-audit field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_audit|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ceo_name|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_ceo_name';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '5. Name of Nominated Organization’s Director/CEO',
    'weight' => '14',
    'children' => array(
      0 => 'field_ceo_email',
      1 => 'field_ceo_telephone_number',
      2 => 'field_ceo_title',
      3 => 'field_name_of_nominated_organiza',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '5. Name of Nominated Organization’s Director/CEO',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ceo-name field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_ceo_name|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_congressional_district|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_congressional_district';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '11. Congressional District of Nominated Organization',
    'weight' => '20',
    'children' => array(
      0 => 'field_congressional_district_of_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-congressional-district field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_congressional_district|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_deficit|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_deficit';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '14. Deficit and A-133 audit',
    'weight' => '23',
    'children' => array(
      0 => 'field_if_the_nominated_organizat',
      1 => 'field_has_the_nominated_organiza',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '14. Deficit and A-133 audit',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-deficit field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_deficit|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_duns_number|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_duns_number';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '9. Nominated Organization’s D-U-N-S® Number',
    'weight' => '18',
    'children' => array(
      0 => 'field_nominated_organization_s_d',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-duns-number field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_duns_number|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ein_tin|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_ein_tin';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '10. Nominated Organization’s Employer/Taxpayer Number (EIN/TIN):',
    'weight' => '19',
    'children' => array(
      0 => 'field_nominated_organization_s_e',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ein-tin field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ein_tin|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_governing_control|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_governing_control';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '8. Governing Control',
    'weight' => '17',
    'children' => array(
      0 => 'field_governing_control_check_on',
      1 => 'field_gov_other_please_specify',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '8. Governing Control',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-governing-control field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_governing_control|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_material_weakness_explain|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_material_weakness_explain';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '17. If yes, please explain',
    'weight' => '29',
    'children' => array(
      0 => 'field_material_weakeness_explain',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-material-weakness-explain field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_material_weakness_explain|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_material_weakness|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_material_weakness';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '16. Material Weaknesses',
    'weight' => '28',
    'children' => array(
      0 => 'field_were_there_any_material_we',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '16. Material Weaknesses',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-material-weakness field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_material_weakness|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_most_recently_completed_fy|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_most_recently_completed_fy';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_org_financial_information';
  $field_group->data = array(
    'label' => 'Most recently completed FY',
    'weight' => '39',
    'children' => array(
      0 => 'field_most_recently_completed_fy',
      1 => 'field_most_recent_revenue',
      2 => 'field_most_recent_expense',
      3 => 'field_most_recent_difference',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-most-recently-completed-fy field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_most_recently_completed_fy|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nominated_organization|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_nominated_organization';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '1. Nominated Organization',
    'weight' => '10',
    'children' => array(
      0 => 'field_legal_name_of_the_nominate',
      1 => 'field_organizational_unit_if_dif',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '1. Nominated Organization',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-nominated-organization field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_nominated_organization|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nominator_information|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_nominator_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '20. Nominator',
    'weight' => '32',
    'children' => array(
      0 => 'field_name_of_nominator',
      1 => 'field_nominator_title',
      2 => 'field_nominator_email',
      3 => 'field_relationship_to_organizati',
      4 => 'field_nominator_telephone_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '20. Nominator',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-nominator-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_nominator_information|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_open_to_public|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_open_to_public';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '19. Total number of days the nominated organization was open to the public for the past 12-month period prior to application',
    'weight' => '31',
    'children' => array(
      0 => 'field_total_number_of_days_the_n',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-open-to-public field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_open_to_public|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_financial_information|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_org_financial_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '13. Nominated Organization’s Financial Information',
    'weight' => '22',
    'children' => array(
      0 => 'group_most_recently_completed_fy',
      1 => 'group_second_most_recent',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '13. Nominated Organization’s Financial Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-org-financial-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_org_financial_information|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization_address|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_organization_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '2. Nominated Organization Address',
    'weight' => '11',
    'children' => array(
      0 => 'field_nominated_organization_add',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '2. Nominated Organization Address',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-organization-address field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_organization_address|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_completing|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_person_completing';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '6. Name of Person Completing This Form',
    'weight' => '15',
    'children' => array(
      0 => 'field_name_of_person_completing_',
      1 => 'field_person_completing_title',
      2 => 'field_person_completing_e_mail',
      3 => 'field_person_completing_telephon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-completing field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_person_completing|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_second_most_recent|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_second_most_recent';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_org_financial_information';
  $field_group->data = array(
    'label' => 'Second most recently completed FY',
    'weight' => '40',
    'children' => array(
      0 => 'field_second_most_recent_revenue',
      1 => 'field_second_most_recently_compl',
      2 => 'field_second_most_recent_expense',
      3 => 'field_second_most_recent_diff',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-second-most-recent field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_second_most_recent|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_a|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_section_a';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section A',
    'weight' => '0',
    'children' => array(
      0 => 'group_governing_control',
      1 => 'group_ceo_name',
      2 => 'group_nominated_organization',
      3 => 'group_telephone_number',
      4 => 'group_type_of_organization',
      5 => 'group_web_address',
      6 => 'group_org_financial_information',
      7 => 'group_staff',
      8 => 'group_nominator_information',
      9 => 'group_organization_address',
      10 => 'group_person_completing',
      11 => 'group_duns_number',
      12 => 'group_ein_tin',
      13 => 'group_congressional_district',
      14 => 'group_annual_budget',
      15 => 'group_open_to_public',
      16 => 'group_deficit',
      17 => 'group_audit',
      18 => 'group_material_weakness',
      19 => 'group_material_weakness_explain',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-section-a field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_section_a|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_b_overview|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_section_b_overview';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section B. Overview (maximum of 500 words)',
    'weight' => '1',
    'children' => array(
      0 => 'field_section_b_overview',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Section B. Overview (maximum of 500 words)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-section-b-overview field-group-fieldset',
        'description' => '<ul>
<li>Summarize the nominated organization’s mission or statement of purpose.</li>
<li>Provide a brief history of the nominated organization.</li>
<li>Explain why you believe the nominated organization deserves to win the National Medal for Museum and Library Service.</li>
</ul>',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_section_b_overview|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_c_narrative|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_section_c_narrative';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section C. Narrative (maximum of 2500 words)',
    'weight' => '2',
    'children' => array(
      0 => 'field_narrative_maximum_of_2500_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Section C. Narrative (maximum of 2500 words)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-section-c-narrative field-group-fieldset',
        'description' => '1. Community and Community Needs
<ul>
<li> Describe your community including its demographics.</li>
<li> Describe the community’s major needs and how you identified them.</li>
<li> In what ways does your staff work with the community to craft solutions?</li>
</ul>
2. Programs and Services
<ul>
<li> Referring to the community and its major needs you identified in Section C.1, describe
the specific programs and services that have been developed to address one or more of
those needs. </li>
<li> Provide a brief description of your full portfolio of programs and services as context for
those described above.</li>
<li> How have you constructed community partnerships to increase your ability to connect
with targeted population groups within your community?</li>
<li> Describe how you serve community members with special needs [varying abilities].</li>
Note: Organizations identified as Digital Libraries should address:
o services to your community including services to other organizations and
services to end users;
o how an understanding of audiences, either current or potential, has driven the
approach to providing access to your organization\'s programs and resources;
o sustainability and preservation plans for the digital library; and
o accessibility for people with disabilities.
</ul>
3. Impact
<ul>
<li> Describe the impact your organization’s programs and services have on the identified
community needs. Be specific, using qualitative, quantitative, or both types of
descriptors as appropriate.</li>
<li> How does your organization track the cumulative impact of its programs and services
through time?</li>
<li> How has this information informed continuing and/or new programs and services?</li>
</ul>
4. Financial Sustainability
<ul>
<li> List your organization’s three primary sources of revenue.</li>
<li> What proportion of your organization’s annual revenue is devoted to the programs and
services described above?</li>
<li> Does your organization have a sustainable funding model that will enable the growth of
these programs and services? Describe how your organization financially supports them.</li>
<li> Identify any private or non-profit groups that support your organization’s mission and
activities and describe the extent of their support.</li>
</ul>',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_section_c_narrative|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_d_letters|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_section_d_letters';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section D. Letters of Support (required: three maximum, uploaded with the Nomination Form or emailed to nationalmedals@imls.gov)',
    'weight' => '4',
    'children' => array(
      0 => 'field_section_d_letters_of_suppo',
      1 => 'field_section_d_letters',
      2 => 'field_section_d_letters_of',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Section D. Letters of Support (required: three maximum, uploaded with the Nomination Form or emailed to nationalmedals@imls.gov)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-section-d-letters field-group-fieldset',
        'description' => '<ul>
<li>These letters should come from community members who have direct knowledge of the
nominated organization’s community service and the particular programs identified in the
nomination. We recommend that the letters come from different segments of the broader
community served by the organizations and from individuals who have either witnessed or
experienced first-hand a particular program or service.</li>
<li>In addition to the three letters of support, letters from members of Congress are welcome.
They may be uploaded with your nomination form or emailed to nationalmedals@imls.gov.</li>
<li>Address letters to the Director of the Institute of Museum and Library Services and upload
them with this Nomination Form or email them to nationalmedals@imls.gov.</li>
</ul>',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_section_d_letters|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_staff|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_staff';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '18. Staff',
    'weight' => '30',
    'children' => array(
      0 => 'field_number_of_full_time_paid_o',
      1 => 'field_number_of_full_time_unpaid',
      2 => 'field_number_of_part_time_paid_o',
      3 => 'field_number_of_part_time_unpaid',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '18. Staff',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-staff field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_staff|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_telephone_number|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_telephone_number';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '3. Telephone Number',
    'weight' => '12',
    'children' => array(
      0 => 'field_telephone_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '3. Telephone Number',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-telephone-number field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_telephone_number|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_of_organization|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_type_of_organization';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '7. Type of Organization (check one)',
    'weight' => '16',
    'children' => array(
      0 => 'field_org_other_please_specify',
      1 => 'field_type_of_organization_check',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '7. Type of Organization (check one)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-type-of-organization field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_type_of_organization|entityform|2021_nomination_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_web_address|entityform|2021_nomination_form|form';
  $field_group->group_name = 'group_web_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = '2021_nomination_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_section_a';
  $field_group->data = array(
    'label' => '4. Web Address',
    'weight' => '13',
    'children' => array(
      0 => 'field_web_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '4. Web Address',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-web-address field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_web_address|entityform|2021_nomination_form|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('1. Nominated Organization');
  t('10. Nominated Organization’s Employer/Taxpayer Number (EIN/TIN):');
  t('11. Congressional District of Nominated Organization');
  t('12. Nominated Organization’s Annual Operating Budget');
  t('13. Nominated Organization’s Financial Information');
  t('14. Deficit and A-133 audit');
  t('15. If no, has the nominated organization had a financial statement audit in the past three years?');
  t('16. Material Weaknesses');
  t('17. If yes, please explain');
  t('18. Staff');
  t('19. Total number of days the nominated organization was open to the public for the past 12-month period prior to application');
  t('2. Nominated Organization Address');
  t('20. Nominator');
  t('3. Telephone Number');
  t('4. Web Address');
  t('5. Name of Nominated Organization’s Director/CEO');
  t('6. Name of Person Completing This Form');
  t('7. Type of Organization (check one)');
  t('8. Governing Control');
  t('9. Nominated Organization’s D-U-N-S® Number');
  t('Most recently completed FY');
  t('Second most recently completed FY');
  t('Section A');
  t('Section B. Overview (maximum of 500 words)');
  t('Section C. Narrative (maximum of 2500 words)');
  t('Section D. Letters of Support (required: three maximum, uploaded with the Nomination Form or emailed to nationalmedals@imls.gov)');

  return $field_groups;
}
