<?php

  include_once("test.php");

  Class UnholyFactory {
    protected $fighters = array();

    public function absorb($t) {
      if (get_parent_class($t)) {
        if (isset($this->fighters[$t->getName()])) {
          print("(Factory already absorbed a fighter of type " . $t->getName() . ")" . PHP_EOL);
        } else {
          print("(Factory absorbed a fighter of type " . $t->getName() . ")" . PHP_EOL);
          $this->fighters[$t->getName()] = $t;
        }
      } else {
        print("(Factory) can't absorb this, it's not a fighter." . PHP_EOL);
      }
    }

    public function fabricate($rf) {
      if (array_key_exists($rf, $this->fighters)) {
        print("(Factory fabricates a fighter of type " . $rf . ")" . PHP_EOL);
          return (clone $this->fighters[$rf]);
      }
      print("(Factory hasn't absorbed any fighter of type " . $rf. ")" . PHP_EOL);
      return null;
    }
  }
?>