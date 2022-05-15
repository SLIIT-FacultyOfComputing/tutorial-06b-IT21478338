#include "Box.h"

// Implement setters and getters
void Box::setLength(int lengthInput){
  lenght = lenghtInput;
}
void Box::setWidth(int widthInput){
  width = widthInput;
}
void Box::setHeight(int heightInput){
  height = heightInput;
}

int Box::getLength(){
  return lenght;
}
int Box::getWidth(){
  return width;
}
int Box::getHeight(){
  return height;
}


// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return getLength() * getWidth() *getHeight();
}