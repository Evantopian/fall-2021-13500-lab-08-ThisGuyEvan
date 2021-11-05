#include <iostream>
#include "imageio.h"

void invert(std::string img_file, int image[][MAX_W]){
  int height, width;
  readImage(img_file, image, height, width);

  for (int row = 0; row < height; row++){
    for (int col = 0; col < width; col++){
      image[row][col] = 255 - image[row][col];
    }
  }

  writeImage("taskA.pgm", image, height, width);
}

void rightInvert(std::string img_file, int image[][MAX_W]){
  int height, width;
  readImage(img_file, image, height, width);
  
  for (int row = 0; row < height; row++){
    for (int col = width/2; col < width; col++){
      image[row][col] = 255 - image[row][col];
    }
  }

  writeImage("taskB.pgm", image, height, width); 
}

void whiteBox(std::string img_file, int image[][MAX_W]){
  int height, width;
  readImage(img_file, image, height, width);

  for (int row = height/4-1; row < height * 3/4; row++){
    for (int col = width/4-1; col < width * 3/4; col++){
      image[row][col] = 255;
    }
  }

  writeImage("taskC.pgm", image, height, width);
}

void addFrame(std::string img_file, int image[][MAX_W]){
  int height, width;
  readImage(img_file, image, height, width); 

  for (int row = height/4-1; row < height*3/4; row++){
    for (int col = width/4-1; col < width*3/4; col++){
      if (row == height/4-1 || row == height*3/4-1 || col == width/4-1 || col == width*3/4-1){
        image[row][col] = 255;
      }
    }
  }

  writeImage("taskD.pgm", image, height, width);
}

void scale(std::string img_file, int image[MAX_H][MAX_W]) {
    int height, width;
    readImage(img_file, image, height, width); 
  
    int scaled[MAX_H][MAX_W];
    int hCount, wCount = 0;
  
    for(int row = 0; row <= height; row++) {
        wCount = 0;
        for(int col = 0; col <= width; col++) {
            scaled[hCount][wCount] = image[row][col];
            scaled[hCount+1][wCount] = image[row][col];
            scaled[hCount][wCount+1] = image[row][col];
            scaled[hCount+1][wCount+1] = image[row][col];
            wCount += 2;
        }
        hCount += 2;
    }
  
    writeImage("taskE.pgm", scaled, height * 2, width * 2);
}

void pixelate(std::string img_file, int image[][MAX_W]){
  int height, width;
  readImage(img_file, image, height, width);
  
  for (int row = 0; row < height; row+=2){
    for (int col = 0; col < width; col+=2){
        int average = (image[row][col] + image[row+1][col] + image[row][col+1] + image[row+1][col+1])/4;
            image[row][col] = average;
            image[row+1][col] = average;
            image[row][col+1] = average;
            image[row+1][col+1] = average;
    }
  }
  
  writeImage("taskF.pgm", image, height, width);
}
