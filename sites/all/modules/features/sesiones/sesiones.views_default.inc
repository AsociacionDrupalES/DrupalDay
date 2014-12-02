<?php
/**
 * @file
 * sesiones.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sesiones_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sesiones';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sesiones';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sesiones propuestas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_speaker' => 'field_speaker',
    'field_nivel_experiencia' => 'field_nivel_experiencia',
    'field_audiencia' => 'field_audiencia',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speaker' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nivel_experiencia' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_audiencia' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'expand' => 'title',
    'hide' => array(
      'title' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_speaker' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_nivel_experiencia' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_audiencia' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
    ),
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Ponente */
  $handler->display->display_options['fields']['field_speaker']['id'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_speaker']['delta_offset'] = '0';
  /* Campo: Contenido: Nivel experiencia */
  $handler->display->display_options['fields']['field_nivel_experiencia']['id'] = 'field_nivel_experiencia';
  $handler->display->display_options['fields']['field_nivel_experiencia']['table'] = 'field_data_field_nivel_experiencia';
  $handler->display->display_options['fields']['field_nivel_experiencia']['field'] = 'field_nivel_experiencia';
  /* Campo: Contenido: Audiencia */
  $handler->display->display_options['fields']['field_audiencia']['id'] = 'field_audiencia';
  $handler->display->display_options['fields']['field_audiencia']['table'] = 'field_data_field_audiencia';
  $handler->display->display_options['fields']['field_audiencia']['field'] = 'field_audiencia';
  $handler->display->display_options['fields']['field_audiencia']['delta_offset'] = '0';
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sesion' => 'sesion',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Criterios de filtrado: Campo: Estado sesión (field_estado_sesion) */
  $handler->display->display_options['filters']['field_estado_sesion_value']['id'] = 'field_estado_sesion_value';
  $handler->display->display_options['filters']['field_estado_sesion_value']['table'] = 'field_data_field_estado_sesion';
  $handler->display->display_options['filters']['field_estado_sesion_value']['field'] = 'field_estado_sesion_value';
  $handler->display->display_options['filters']['field_estado_sesion_value']['value'] = array(
    'Propuesta' => 'Propuesta',
  );
  $handler->display->display_options['filters']['field_estado_sesion_value']['group'] = 1;
  /* Criterios de filtrado: Contenido: Nivel experiencia (field_nivel_experiencia) */
  $handler->display->display_options['filters']['field_nivel_experiencia_value']['id'] = 'field_nivel_experiencia_value';
  $handler->display->display_options['filters']['field_nivel_experiencia_value']['table'] = 'field_data_field_nivel_experiencia';
  $handler->display->display_options['filters']['field_nivel_experiencia_value']['field'] = 'field_nivel_experiencia_value';
  $handler->display->display_options['filters']['field_nivel_experiencia_value']['group'] = 1;
  $handler->display->display_options['filters']['field_nivel_experiencia_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nivel_experiencia_value']['expose']['operator_id'] = 'field_nivel_experiencia_value_op';
  $handler->display->display_options['filters']['field_nivel_experiencia_value']['expose']['label'] = 'Nivel experiencia';
  $handler->display->display_options['filters']['field_nivel_experiencia_value']['expose']['operator'] = 'field_nivel_experiencia_value_op';
  $handler->display->display_options['filters']['field_nivel_experiencia_value']['expose']['identifier'] = 'field_nivel_experiencia_value';
  $handler->display->display_options['filters']['field_nivel_experiencia_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Criterios de filtrado: Contenido: Audiencia (field_audiencia) */
  $handler->display->display_options['filters']['field_audiencia_value']['id'] = 'field_audiencia_value';
  $handler->display->display_options['filters']['field_audiencia_value']['table'] = 'field_data_field_audiencia';
  $handler->display->display_options['filters']['field_audiencia_value']['field'] = 'field_audiencia_value';
  $handler->display->display_options['filters']['field_audiencia_value']['group'] = 1;
  $handler->display->display_options['filters']['field_audiencia_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_audiencia_value']['expose']['operator_id'] = 'field_audiencia_value_op';
  $handler->display->display_options['filters']['field_audiencia_value']['expose']['label'] = 'Audiencia';
  $handler->display->display_options['filters']['field_audiencia_value']['expose']['operator'] = 'field_audiencia_value_op';
  $handler->display->display_options['filters']['field_audiencia_value']['expose']['identifier'] = 'field_audiencia_value';
  $handler->display->display_options['filters']['field_audiencia_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Criterios de filtrado: Contenido: Versión de Drupal (field_version_drupal) */
  $handler->display->display_options['filters']['field_version_drupal_value']['id'] = 'field_version_drupal_value';
  $handler->display->display_options['filters']['field_version_drupal_value']['table'] = 'field_data_field_version_drupal';
  $handler->display->display_options['filters']['field_version_drupal_value']['field'] = 'field_version_drupal_value';
  $handler->display->display_options['filters']['field_version_drupal_value']['group'] = 1;
  $handler->display->display_options['filters']['field_version_drupal_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_version_drupal_value']['expose']['operator_id'] = 'field_version_drupal_value_op';
  $handler->display->display_options['filters']['field_version_drupal_value']['expose']['label'] = 'Versión de Drupal';
  $handler->display->display_options['filters']['field_version_drupal_value']['expose']['operator'] = 'field_version_drupal_value_op';
  $handler->display->display_options['filters']['field_version_drupal_value']['expose']['identifier'] = 'field_version_drupal_value';
  $handler->display->display_options['filters']['field_version_drupal_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sesiones-propuestas';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sesiones propuestas';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['sesiones'] = array(
    t('Master'),
    t('Sesiones propuestas'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Elementos por página'),
    t('- Todos -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Ponente'),
    t('Nivel experiencia'),
    t('Audiencia'),
    t('Versión de Drupal'),
    t('Page'),
  );
  $export['sesiones'] = $view;

  return $export;
}
