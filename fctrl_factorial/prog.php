<?php
$lines = file('php://stdin');
$maxLines = $lines[0];
$factorials = array();
for($i = 1; $i <= $maxLines; $i++){
  $number = $lines[$i];
  $resultsArr = array();
  for($e = 5; $number > 0; $e=5){
    $number = $number / $e;
    $number = intval($number);
    if($number <= 0){
      break;
    }

    $resultsArr[] = $number;
  } 
  $trailingZeros = 0;
  foreach($resultsArr as $fiveFact){
    $trailingZeros += $fiveFact; 
  }
  fwrite(STDOUT, $trailingZeros . "\n");
}
