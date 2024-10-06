#include "chess.h"
#include "figures.h"
#include <stdlib.h>
#include <stdio.h>
void display(){
  char** white = whiteSquare;
  char** black = reverse(whiteSquare);
 // char** whiteBlack = join(white,black);
  char** firstRow = repeatH(join(white,black),4);
  interpreter(firstRow);
}

