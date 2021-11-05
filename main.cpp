#include <iostream>
#include "imageio.h"
#include "funcs.h"

int main(){
  std::string input_file = "inImage.pgm";
  int image[MAX_H][MAX_W];
  int height, width;
  //Task A
  invert(input_file, image);

  //Task B
  rightInvert(input_file, image);

  //Task C
  whiteBox(input_file, image);


  //Task D
  addFrame(input_file, image);

  //Task E
  scale(input_file, image);

  //Task F
  pixelate(input_file, image);

  return 0;
}
