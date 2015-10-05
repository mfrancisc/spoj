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
  //split int in array
  $firstIntArray = str_split($number[0]);  
  $secondIntArray = str_split($number[1]);  
  //reverse integers
  krsort($firstIntArray);
  krsort($secondIntArray);
  //concat reversed first number
  $reversedFirstNumber = '';
  foreach ($firstIntArray as $int){
    $reversedFirstNumber .= $int;
  }
  //concat reversed second number
  $reversedSecondNumber = '';
  foreach ($secondIntArray as $int){
    $reversedSecondNumber .= $int;
  }
  //total calc
  $total = (int)$reversedFirstNumber + (int)$reversedSecondNumber;
  $totalIntArray = str_split($total);
  krsort($totalIntArray);
  //concat reversed total
  $reversedTotal = '';
  foreach ($totalIntArray as $int){
    $reversedTotal .= $int;
  }
  //OUTPUT
  fwrite(STDOUT, (int)$reversedTotal . "\n");
}
