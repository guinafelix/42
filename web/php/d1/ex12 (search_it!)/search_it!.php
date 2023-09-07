#!/usr/bin/php
<?php
    $find = $argv[1];
    array_shift($argv);
    array_shift($argv);
    foreach ($argv as $arg) {
        $arr = explode(":", $arg);
        if (in_array($find, $arr)) {
            echo $arr[1] . "\n";
            break;
        }
    }
?>