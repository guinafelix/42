#!/usr/bin/php
<?php
    $count = 0;
    $array = array();
    foreach($argv as $str) {
        if ($count == 0) {
            $count++;
            continue;
        }
        $temp = preg_split("/ +/", trim($str));
        if ($temp[0] != "")
            $array = array_merge($array, $temp);
    }
    sort($array);
    foreach($array as $data)
        echo $data . "\n";
?>