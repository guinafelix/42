#!/usr/bin/php
<?php
    $str = fopen("php://stdin", "r");
    while ($str && !feof($str)) {
        echo "Enter a number: ";
        $input = fgets($str);

        if ($input) {
            $input = str_replace("\n", "", $input);
            if (is_numeric($input)) {
                if ($input % 2 == 0){
                    echo "The number " . $input . " is even\n";
                } else {
                    echo "The number " . $input . " is odd\n";
                }
            } else {
                echo "'" . $input . "'" . " is not a number\n";
            }
        }
    }
?>