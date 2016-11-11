Este módulo se ha creado con el fín de desplegar el profile DRPL junto con el profile de comunidad de madrid, deberemos seguir los siguientes pasos:

1 - En la feature common_repository, en el features.field_base.inc deberemos buscar el field "municipality" y cambiar el target_type por 'node' en vez de 'taxonomy_term'

2 - Lanzar deploy mediante drush en custom_drpl_deploy

3 - Es posible que los menús de gestión no se hayan importado mediante menu_import y drush, deberemos crear una nueva versión de update con esos menus y ejecutarlos desde update.php