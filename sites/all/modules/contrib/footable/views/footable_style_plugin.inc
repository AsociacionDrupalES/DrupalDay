<?php
/**
 * @file
 * Contains the footable style plugin.
 */

/**
 * Style plugin to render each item as a row in a responsive table.
 *
 * @ingroup views_style_plugins
 */
class footable_style_plugin extends views_plugin_style_table {
  /**
   * Provide default options.
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['footable'] = array('default' => array());

    return $options;
  }

  /**
   * Adds FooTable configuration form options.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // Check if fields have been added.  Table style plugin will set
    // error_markup if fields are not added.
    // @see views_plugin_style_table::options_form()
    if (isset($form['error_markup'])) {
      return;
    }

    $columns = $this->display->handler->get_field_labels();
    $form['footable'] = array(
      '#type' => 'fieldset',
      '#title' => t('FooTable settings'),
      '#collapsible' => FALSE,
      '#collapsed' => FALSE,
    );

    $field_names = $this->display->handler->get_field_labels();

    $form['footable']['expand'] = array(
      '#title' => t('Expandable column'),
      '#type' => 'select',
      '#options' => $field_names,
      '#default_value' => isset($this->options['footable']['expand']) ? $this->options['footable']['expand'] : '',
      '#description' => t('Select the column where a plus/minus icon should appear.'),
    );

    $form['footable']['icon'] = array(
      '#type' => 'select',
      '#title' => t('Toggle icon style'),
      '#default_value' => isset($this->options['footable']['icon']) ? $this->options['footable']['icon'] : '',
      '#options' => array(
        '' => t('Plus/Minus'),
        'toggle-circle' => t('Circle'),
        'toggle-circle-filled' => t('Circle filled'),
        'toggle-square' => t('Square'),
        'toggle-square-filled' => t('Square filled'),
        'toggle-arrow' => t('Arrow'),
        'toggle-arrow-small' => t('Arrow small'),
        'toggle-arrow-circle' => t('Arrow circle'),
        'toggle-arrow-circle-filled' => t('Arrow circle filled'),
        'toggle-arrow-tiny' => t('Arrow tiny'),
        'toggle-arrow-alt' => t('Arrow alt')
      ),
      '#description' => t('Change the toggle icon stlye. The toggle icons are displayed using icon-fonts, which makes for easier styling to fit in with your existing theme.'),
    );

    $form['footable']['icon_size'] = array(
      '#type' => 'select',
      '#title' => t('Toggle icon size'),
      '#default_value' => isset($this->options['footable']['icon_size']) ? $this->options['footable']['icon_size'] : '',
      '#options' => array(
        '' => t('Default'),
        'toggle-medium' => t('Medium'),
        'toggle-large' => t('Large')
      ),
      '#description' => t('Change the toggle icon size'),
    );

    $form['footable']['hide'] = array(
      '#type' => 'fieldset',
      '#title' => t('Collapsed columns'),
      '#collapsible' => FALSE,
      '#collapsed' => FALSE,
      '#description' => t('Select the "breakpoints" where a particular column should be hidden.'),
    );

    foreach ($columns as $column_name => $column_label) {
      $safe = str_replace(array('][', '_', ' '), '-', $column_name);
      // the $id of the column for dependency checking.

      $form['footable']['hide'][$column_name] = array(
        '#type' => 'checkboxes',
        '#multiple' => TRUE,
        '#title' => check_plain($column_label),
        '#default_value' => isset($this->options['footable']['hide'][$column_name]) ? $this->options['footable']['hide'][$column_name] : array('phone' => 0, 'tablet' => 0),
        '#options' => array('phone' => 'Phone', 'tablet' => 'Tablet'),
      );
    }
  }
}
