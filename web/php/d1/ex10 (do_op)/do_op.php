#!/usr/bin/php
<?php
    $size = count($argv);

    if ($size != 4) {
        echo "Incorrect parameters";
        return;
    }

    $op = trim($argv[2]);
    $nb1 = trim($argv[1]);
    $nb2 = trim($argv[3]);

    if ($op == "+")
        echo ($nb1 + $nb2) . "\n";
    else if ($op == "-")
        echo ($nb1 - $nb2) . "\n";
    else if ($op == "*")
        echo ($nb1 * $nb2) . "\n";
    else if ($op == "/")
        echo ($nb1 / $nb2) . "\n";
    else if ($op == "%")
        echo ($nb1 % $nb2) . "\n";
?>