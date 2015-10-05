<?php

if(isset($argv[1])){
  $number = (int)$argv[1];
}else{
  die('no imput value');
}
if($number === 42){

  die();
}
echo $number;
