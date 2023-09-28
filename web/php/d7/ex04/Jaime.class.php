<?php
  include_once("Tyrion.class.php");
  include_once("test.php");
  include_once("Lannister.class.php");

  Class Jaime {
    public function sleepWith($p) {
      if ($p instanceof Tyrion)
        print("Not event if I'm drunk !" .PHP_EOL);
      else if ($p instanceof Sansa)
        print("Let's do this." .PHP_EOL);
      else if ($p instanceof Cersei)
        print("With pleasure, but only in a tower in Winterfell, them." .PHP_EOL);
    }
  }
?>