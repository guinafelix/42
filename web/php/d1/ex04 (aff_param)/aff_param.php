#!/usr/bin/php
<?php
    $count = 1;
    while (isset($argv[$count])) {
        echo $argv[$count++] . "\n";
    }
?>