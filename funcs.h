/*
Author: Evan Huang
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 08
  - Header functions for tasks A-F.
*/


#pragma once

void invert(std::string img_file, int image[][MAX_W]);

void rightInvert(std::string img_file, int image[][MAX_W]);

void whiteBox(std::string img_file, int image[][MAX_W]);

void addFrame(std::string img_file, int image[][MAX_W]);

void scale(std::string img_file, int image[][MAX_W]);

void pixelate(std::string img_file, int image[][MAX_W]);
