#!/usr/bin/php
<?php
    $str = preg_replace('/ +/', ' ', $argv[1]);
    echo $str . "\n";
?>