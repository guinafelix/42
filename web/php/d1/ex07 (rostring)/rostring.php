#!/usr/bin/php
<?php
    $str = $argv[1];

    $str = preg_split("/ +/", trim($str));
    $temp = $str[0];
    array_shift($str);
    array_push($str, $temp);
    foreach ($str as $data)
        echo $data . " ";
    echo "\n";
?>