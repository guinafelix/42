<?php
  Class Matrix {
    const IDENTITY = "IDENTITY";
    const SCALE = "SCALE";
    const RX = "Ox ROTATION";
    const RY = "Oy ROTATION";
    const RZ = "Oz ROTATION";
    const TRANSLATION = "TRANSLATION";
    const PROJECTION = "PROJECTION";
    static $verbose = false;
    protected $matrix = array();
    private $_preset;
    private $_scale;
    private $_angle;
    private $_vtc;
    private $_fov;
    private $_ratio;
    private $_near;
    private $_far;

    public function __construct($matrix){
      if (isset($array['preset']))
        $this->_preset = $array['preset'];
      if (isset($array['scale']))
        $this->_scale = $array['scale'];
      if (isset($array['angle']))
        $this->_angle = $array['angle'];
      if (isset($array['vtc']))
        $this->_vtc = $array['vtc'];
      if (isset($array['fov']))
        $this->_fov = $array['fov'];
      if (isset($array['ratio']))
        $this->_ratio = $array['ratio'];
      if (isset($array['near']))
        $this->_near = $array['near'];
      if (isset($array['far']))
        $this->_far = $array['far'];
      $this->check();
      $this-createMatrix();
      if (self::$verbose) {
        if ($this->_preset == Self::IDENTITY)
          echo "Matrix " . $this->_preset . " instance constructed\n";
        else
          echo "Matrix " . $this->_preset . " preset instance constructed\n";
      } 
      $this->dispatch();
    }

    public function __destruct() {
			if (self::$verbose) {
				print("Matrix instance destructed\n");
			}
		}

    function __toString() {
      $tmp = "M | vtcX | vtcY | vtcZ | vtxO\n";
      $tmp .= "-----------------------------\n";
      $tmp .= "x | %0.2f | %0.2f | %0.2f | %0.2f\n";
      $tmp .= "y | %0.2f | %0.2f | %0.2f | %0.2f\n";
      $tmp .= "z | %0.2f | %0.2f | %0.2f | %0.2f\n";
      $tmp .= "w | %0.2f | %0.2f | %0.2f | %0.2f";
      return (vsprintf($tmp, array($this->matrix[0], $this->matrix[1], $this->matrix[2], $this->matrix[3], $this->matrix[4], $this->matrix[5], $this->matrix[6], $this->matrix[7], $this->matrix[8], $this->matrix[9], $this->matrix[10], $this->matrix[11], $this->matrix[12], $this->matrix[13], $this->matrix[14], $this->matrix[15])));
    }


    public function doc() {
			if ($str = file_get_contents('Matrix.doc.txt')) {
				echo "$str";
			}
			else {
				echo "Error: .doc file doesn't exist.\n";
			}
		}

    private function check() {
      if (empty($this->_preset))
        return "error";
      if ($this->_preset == self::SCALE && empty($this->_scale))
        return "error";
      if (($this->_preset == self::RX || $this->_preset == self::RY || $this->_preset == self::RZ) && empty($this->_angle))
        return "error";
      if ($this->_preset == self::TRANSLATION && empty($this->_vtc))
        return "error";
      if ($this->_preset == self::PROJECTION && (empty($this->_fov) || empty($this->_radio) || empty($this->_near) || empty($this->_far)))
        return "error";
    }

    private function createMatrix() {
      for ($i = 0; $i < 16; $i++) {
        $this->matrix[$i] = 0;
      }
    }

    private function dispatch() {
      switch ($this->_preset) {
        case (self::IDENTITY) :
            $this->identity(1);
            break;
        case (self::TRANSLATION) :
            $this->translation();
            break;
        case (self::SCALE) :
            $this->identity($this->_scale);
            break;
        case (self::RX) :
            $this->rotation_x();
            break;
        case (self::RY) :
            $this->rotation_y();
            break;
        case (self::RZ) :
            $this->rotation_z();
            break;
        case (self::PROJECTION) :
            $this->projection();
            break;
      }
    }

    private function identity($scale) {
      $this->matrix[0] = $scale;
      $this->matrix[5] = $scale;
      $this->matrix[10] = $scale;
      $this->matrix[15] = 1;
    }

    private function translation() {
      $this->identity(1);
      $this->matrix[3] = $this->_vtc->getX();
      $this->matrix[7] = $this->_vtc->getY();
      $this->matrix[11] = $this->_vtc->getZ();
    }

    private function rotation_x() {
      $this->identity(1);
      $this->matrix[0] = 1;
      $this->matrix[5] = cos($this->_angle);
      $this->matrix[6] = -sin($this->_angle);
      $this->matrix[9] = sin($this->_angle);
      $this->matrix[10] = cos($this->_angle);
    }

    private function rotation_y() {
      $this->identity(1);
      $this->matrix[0] = cos($this->_angle);
      $this->matrix[2] = sin($this->_angle);
      $this->matrix[5] = 1;
      $this->matrix[8] = -sin($this->_angle);
      $this->matrix[10] = cos($this->_angle);
    }

    private function rotation_z() {
      $this->identity(1);
      $this->matrix[0] = cos($this->_angle);
      $this->matrix[1] = -sin($this->_angle);
      $this->matrix[4] = sin($this->_angle);
      $this->matrix[5] = cos($this->_angle);
      $this->matrix[10] = 1;
    }

    private function projection() {
      $this->identity(1);
      $this->matrix[5] = 1 / tan(0.5 * deg2rad($this->_fov));
      $this->matrix[0] = $this->matrix[5] / $this->_ratio;
      $this->matrix[10] = -1 * (-$this->_near - $this->_far) / ($this->_near - $this->_far);
      $this->matrix[14] = -1;
      $this->matrix[11] = (2 * $this->_near * $this->_far) / ($this->_near - $this->_far);
      $this->matrix[15] = 0;
    }

    public function mult(Matrix $rhs) {
        $tmp = array();
        for ($i = 0; $i < 16; $i += 4) {
          for ($j = 0; $j < 4; $j++) {
            $tmp[$i + $j] = 0;
            $tmp[$i + $j] += $this->matrix[$i + 0] * $rhs->matrix[$j + 0];
            $tmp[$i + $j] += $this->matrix[$i + 1] * $rhs->matrix[$j + 4];
            $tmp[$i + $j] += $this->matrix[$i + 2] * $rhs->matrix[$j + 8];
            $tmp[$i + $j] += $this->matrix[$i + 3] * $rhs->matrix[$j + 12];
          }
        }
        $matrix = new Matrix();
        $matrix->matrix = $tmp;
        return $matrix;
    }

    public function transformVertex(Vertex $vtx) {
      $tmp = array();
      $tmp['x'] = ($vtx->_x * $this->_matrix[0]) +
      ($vtx->_y * $this->_matrix[1]) + ($vtx->_z * $this->_matrix[2]) +
      ($vtx->_w * $this->_matrix[3]);
      $tmp['y'] = ($vtx->_x * $this->_matrix[4]) +
      ($vtx->_y * $this->_matrix[5]) + ($vtx->_z * $this->_matrix[6]) +
      ($vtx->_w * $this->_matrix[7]);
      $tmp['z'] = ($vtx->_x * $this->_matrix[8]) +
      ($vtx->_y * $this->_matrix[9]) + ($vtx->_z * $this->_matrix[10]) +
      ($vtx->_w * $this->_matrix[11]);
      $tmp['w'] = ($vtx->_x * $this->_matrix[11]) +
      ($vtx->_y * $this->_matrix[13]) + ($vtx->_z * $this->_matrix[14]) +
      ($vtx->_w * $this->_matrix[15]);
      $tmp['color'] = $vtx->_color;
      $vertex = new Vertex($tmp);
      return $vertex;
    }
  }
?>
