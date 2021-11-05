/*
Author: Evan Huang
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 08
  - Creating the images from funcs.cpp (TASKS A-F).
*/


#include <iostream>
#include "imageio.h"
#include "funcs.h"

int main(){
  std::string imgs = "inImage.pgm";
  int image[MAX_H][MAX_W];

  invert(imgs, image);
  rightInvert(imgs, image);
  whiteBox(imgs, image);
  addFrame(imgs, image);
  scale(imgs, image);
  pixelate(imgs, image);

  return 0;
}
