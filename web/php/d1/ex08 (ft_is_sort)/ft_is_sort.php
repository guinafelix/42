#!/usr/bin/php
<?php
    function ft_is_sort($array) {
        $temp = $array;
        sort($temp);
        if ($temp == $array)
            return (TRUE);
        else
            return(FALSE);
    }
?>