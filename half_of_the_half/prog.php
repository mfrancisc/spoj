<?php

$lines = file('php://stdin');
$maxLines = $lines[0];
for($i = 1; $i <= $maxLines; $i++){
  $halfSentence = substr($lines[$i], 0, (strlen($lines[$i])-1) / 2);
  $letters = str_split($halfSentence);
  $even = '';
  $odd = '';
  foreach ($letters as $k => $v) {
    if ($k % 2 == 0) {
      $even.= $v;
    }
    else {
      $odd.= $v;
    }
  }

  fwrite(STDOUT, $even . "\n");
} 


