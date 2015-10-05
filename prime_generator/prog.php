<?php
$lines = file('php://stdin');
$lineH = 0;
foreach ($lines as $line_num => $line) {
  $number = explode(" ", $line);
  if(!isset($number[1]) ){
    $maxLines = intval($number[0]);
    $lineH = 0;
    continue;
  }
  $lineH++;
  if(10 < $maxLines || $maxLines <= 0){
    continue;
  }
  if($maxLines < $lineH){
    continue;
  }
  $m = intval($number[0]);
  $n = intval($number[1]);
  if($m < 1 ||$n< 1 || $n < $m || 1000000000 < $n || 100000 < $n - $m){
    continue;
  }
  $primes = array();
  echo 'm ' . $m . PHP_EOL;
  echo 'n ' . $n . PHP_EOL;
  for($m ; $m <= $n; $m++){
    $prime = true;
    $limit = sqrt($m);
    for($i = 2;$i <= $limit; $i++){
      echo ' limit ' . $limit . PHP_EOL;
      echo ' m ' . $m . PHP_EOL;
      $result = $m % $i;
      if(!is_float($result))
      {
        $prime = false;
      }
    }
      if($prime === true && $m !== 1){
        $primes[]= $m;
      }
  }
  foreach ($primes as $key => $prime ){
    fwrite(STDOUT, $prime . "\n");
  }
  fwrite(STDOUT, "\n");
}
