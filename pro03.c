#include "chess.h"
#include "figures.h"
#include <stdlib.h>
#include <stdio.h>
void display(){
  char** white = whiteSquare;
  char** black = reverse(whiteSquare);
 // char** whiteBlack = join(white,black);
 // char** firstRow = repeatH(join(black,white),4);
 // char** secondRow = reverse(repeatH(join(black,white),4));
 // char** tRow = up(firstRow,secondRow);
  char** fourRow = repeatV(up(repeatH(join(black,white),4),reverse(repeatH(join(black,white),4))),1);
  interpreter(fourRow);
    
}
