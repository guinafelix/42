<?php
  include_once("Jaime.class.php");
  include_once("test.php");
  include_once("Lannister.class.php");

  Class Tyrion {
    public function sleepWith($p) {
      if ($p instanceof Jaime)
        print("Not event if I'm drunk !" .PHP_EOL);
      else if ($p instanceof Sansa)
        print("Let's do this." .PHP_EOL);
      else if ($p instanceof Cersei)
        print("Not event if I'm drunk !" .PHP_EOL);
    }
  }
?>