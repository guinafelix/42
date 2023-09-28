<?php
  include_once("test.php");
  include_once("IFighter.class.php");

  Class NightsWatch {
    public $fighters = array();

    public function recruit($p) {
      if ($p instanceof IFighter) {
        array_push($this->fighters, $p);
      }
    }

    public function fight(){
      foreach($this->fighters as $fighter) {
        $fighter->fight();
      } 
    }
  }
?>