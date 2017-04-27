# onb
A Drupal 7 project (web) 
http://indicateurs-biodiversite.naturefrance.fr/

Penser à ajouter un "settings.local.php" et ajouter les identifiants à la bdd, ex :
<?php
$databases = array (
  'default' =>
  array (
    'default' =>
    array (
      'database' => '',
      'username' => '',
      'password' => '',
      'host' => '',
      'port' => '',
      'driver' => '',
      'prefix' => '',
    ),
  ),
);
?>  

