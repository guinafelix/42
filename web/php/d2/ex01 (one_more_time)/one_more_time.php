#!/usr/bin/php
<?php

    function getMonth($month) {
        $monthArray = array("janvier", "fevrier", "mars", "avril", 
        "mai",  "juin", "juillet", "aout", "septembre", "octobre",
        "novembre", "decembre");

        $index = array_search(strtolower($month), $monthArray);

        if ($index !== false)
            return $index + 1;
        return -1;
    }

    $full_date = explode(" ", trim($argv[1]));
    $month = getMonth($full_date[2]);

    if ($month == -1) {
        echo "Wrong Format\n";
        return;
    }

    $string_date = $full_date[3] . "-" . $month . "-" . $full_date[1] . " " . $full_date[4];

    $timestamp = strtotime($string_date);

    $milliseconds = $timestamp * 1000;

    echo $milliseconds . "\n";
?>