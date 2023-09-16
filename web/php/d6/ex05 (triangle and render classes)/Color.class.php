<?php
  Class Color {
    public $red;
    public $blue;
    public $green;
    static $verbose = false;

    public function __construct($color){
      if (isset($color['red']) && isset($color['green']) && isset($color['blue'])){
        $this->red = intval($color['red']);
        $this->blue = intval($color['blue']);
        $this->green = intval($color['green']);
      } else if (isset($color['rgb'])) {
        $rgb = intval($color['rgb']);
        $this->red = ($rgbValue >> 16) & 0xFF;
        $this->green = ($rgbValue >> 8) & 0xFF;
        $this->blue = $rgbValue & 0xFF;
      }

      if (Self::$verbose) {
        printf("Color( red: %3d, green: %3d, blue: %3d ) constructed.\n", $this->red, $this->green, $this->blue);
      }
    }

    function __destruct() {
      if (Self::$verbose)
        printf("Color( red: %3d, green: %3d, blue: %3d ) destructed.\n", $this->red, $this->green, $this->blue);
    }

    function __toString() {
      return (vsprintf("Color( red: %3d, green: %3d, blue: %3d )", array($this->red, $this->green, $this->blue)));
    }

    public static function doc() {
      $read = fopen("Color.doc.txt", 'r');
      echo "\n";
      while ($read && !feof($read))
        echo fgets($read);
      echo "\n";
    }

    public function add($color) {
      return (new Color(array('red' => $this->red + $color->red, 'green' => $this->green + $color->green, 'blue' => $this->blue + $color->blue)));
    }

    public function sub($color) {
      return (new Color(array('red' => $this->red - $color->red, 'green' => $this->green - $color->green, 'blue' => $this->blue - $color->blue)));
    }

    public function mult($color) {
      return (new Color(array('red' => $this->red + $color->red, 'green' => $this->green + $color->green, 'blue' => $this->blue + $color->blue)));
    }
  }
?>