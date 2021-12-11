#include "colors.inc"
  camera {
    location <0, 1, -10>
    look_at 0
    angle 35
  }
  light_source { <500,500,-1000> White }
  plane {
    y,0
    pigment { checker Red White }
  }
  
    text {
    ttf "timrom.ttf" "WESOLYCH" 1, 0
    pigment { Green }
    translate -3*x
    translate 15*z
  }             
      text {
    ttf "timrom.ttf" "SWIAT" 1, 0
    pigment { Green }
    translate -1.5*x
    translate -4*z
  }