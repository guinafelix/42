<?php
  Class Triangle {
    private $_a;
    private $_b;
    private $_c;
    static $verbose = false;

    public function __construct($array) {
      if ($array['a'] instanceof Vertex && $array['b'] instanceof Vertex && $array['c'] instanceof Vertex) {
        $this->_a = $array['a'];
        $this->_b = $array['b'];
        $this->_c = $array['c'];
      } else {
        $this->__destruct();
      }
    }

    public function __destruct() {
			if (self::$verbose) {
				print("Triangle instance destructed\n");
			}
		}

    function __toString(){
      if (Self::$verbose)
        return (vsprintf("Vertex( x: %0.2f, y: %0.2f, z:%0.2f, w:%0.2f, Color( red: %3d, green: %3d, blue: %3d ) )", array($this->_x, $this->_y, $this->_z, $this->_w, $this->_color->red, $this->_color->green, $this->_color->blue)));
      return (vsprintf("Vertex( x: %0.2f, y: %0.2f, z:%0.2f, w:%0.2f )", array($this->_x, $this->_y, $this->_z, $this->_w)));
    }

    public function doc() {
			if ($str = file_get_contents('Triangle.doc.txt')) {
				echo "$str";
			} else {
				echo "Error: .doc file doesn't exist.\n";
			}
		}

    public function getA() {
      return $this->_a;
    }

    public function getB() {
      return $this->_b;
    }

    public function getC() {
      return $this->_c;
    }
  }
?>