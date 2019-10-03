# Drupal Day 

Esta es la base para las webs de Drupal Day.

# Instalación

Esta instalación esta lista para poder subirse a donde corresponda de manera publica.

En estos momentos se esta debatiendo cual es el mejor proceso para llevar a cabo estas tareas.

# Desarrollo
Crea `settings.local.php` y pega esto:
```
<?php
$databases = [
  'default' =>
    [
      'default' =>
        [
          'database' => 'db',
          'username' => 'db',
          'password' => 'db',
          'host' => 'dday_mariadb',
          'port' => '',
          'driver' => 'mysql',
          'prefix' => '',
        ],
    ],
];

$conf['https'] = TRUE;
$conf['theme_debug'] = TRUE;
$conf['page_compression'] = 0;
$conf['preprocess_js'] = 0;
$conf['preprocess_css'] = 0;
```
El sitio viene con el dockerizador ya configurado ( https://frontid.github.io/dockerizer/ ) con lo que solo necesitas hacer un `dk start` despues de configurar el proyecto en tu local. O bien puedes personalizar el nombre, usuario y clave de la db e instalarlo en otro tipo de solución.

Drush ya viene configurado con unos comandos utiles. Para habilitarlos copia `drush/example.config.local.php` a `drush/config.local.php` y personalizalo.
A partir de ese momento podrás traerte la DB y files de desarrollo usando los comandos `drush files_from_dev`, `drush db_from_dev` y `drush all_from_dev`

NOTA: Ten en cuenta que para poder usar estos comandos debes tener tu clave publica en el servidor de la AED. Pídela a drupalday@drupal.es.

# Peculiaridades

Se ha actualizado a jquery versión 1.7 para que funcione responsive_menu junto a nice_menus. Hay que decirle a responsive menu cual el id de la capa a ponerle responsive, en este caso *navigation* y voila. Zen tiene un region *navigation*, lo que se hace es desactivar "main menu" y en la región *navigation*  se pone un nice menú 1 y con el menú "main menu".

* Revisar las features:
  * content_sesion
    * Con los permisos de los campos hacia que estuviese el call for papers abierto o no.
    * Se pudiesen editar ciertos campos y otros no etc.


# Contribuidores

* keopx 
* ckrina
* karmen
* David Hernandez
* jansete
* capynet
