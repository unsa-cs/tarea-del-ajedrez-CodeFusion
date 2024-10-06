#include "chess.h"
#include "figures.h"
#include <stdlib.h>
#include <stdio.h>
void display(){

  char** whiteRook = rook;
  char** whiteKnight = knight;
  char** whiteBishop = bishop;
  char** whiteQueen = queen;
  char** whiteKing = king;
  char** white = whiteSquare;
  char** black = reverse(whiteSquare);

  char** pos1 = superImpose(whiteRook,black);
  char** pos2 = superImpose(whiteKnight,white);
  char** pos3 = superImpose(whiteBishop,black);
  char** pos4 = superImpose(whiteQueen,white);
  char** pos5 = superImpose(whiteKing,black);
  char** pos6 = superImpose(whiteBishop,white);
  char** pos7 = superImpose(whiteKnight,black);
  char** pos8 = superImpose(whiteRook,white);
 // char** whiteBlack = join(white,black);
 // char** firstRow = repeatH(join(black,white),4);
 // char** secondRow = reverse(repeatH(join(black,white),4));
 // char** tRow = up(firstRow,secondRow);
 // char** fourRow = repeatV(up(repeatH(join(black,white),4),reverse(repeatH(join(black,white),4))),1);
  char** par = join(pos1,pos2);
  char** par2 = join(par,pos3);
  char** par3 = join(par2,pos4);
  char** par4 = join(par3,pos5);
  interpreter(par4);

}

