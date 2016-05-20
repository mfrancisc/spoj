<?php
$lines = file('php://stdin');
foreach ($lines as $line_num => $line){
  $number = explode(" ", $line);
  if(!isset($number[1]) || $maxLines < $line_count){
    $line_count = 0;
    $maxLines = intval($number[0]);
    continue;
  }
  $m = (int)$number[0];
  $n = (int)$number[1];
  $primeLimit = sqrt($n);
  $primeLimit = intval($primeLimit);
  $primes = array();
  for($x = $m; $x <= $primeLimit; $x++){
    if($x === 1)continue;
    for($i = $x; $i <= $primeLimit; $i++){
      $prime = true;

      $result = $x / $i;
      //echo $x . ' / ' . $i . PHP_EOL;
      if(!is_float($result) && $result > 1 && $result !== $x )
      {
        $prime = false;
       // echo 'false' . $result . PHP_EOL;
        break;
      }

      if($prime === true && !in_array($x, $primes)){

        $primes[]= $x;
      }

    }
  }

foreach ($primes as $key => $prime ){
  $s = $m/$prime;
  $s*=$prime;
  for($j= $s; $j <= $n; $j++){
  
  }
  //fwrite(STDOUT, $prime . "\n");
}
fwrite(STDOUT, "\n");
}
