#include "chess.h"
#include "figures.h"
#include <stdlib.h>
#include <stdio.h>
void display(){

  char** blackRook = reverse(rook);
  char** blackKnight = reverse(knight);
  char** blackBishop = reverse(bishop);
  char** blackQueen = reverse(queen);
  char** blackKing = reverse(king);
  char** white = whiteSquare;
  char** black = reverse(whiteSquare);

 // char** pos1 = superImpose(blackRook,black);
 // char** pos2 = superImpose(blackKnight,white);
 // char** pos3 = superImpose(blackBishop,black);
 // char** pos4 = superImpose(blackQueen,white);
 // char** pos5 = superImpose(blackKing,black);
 // char** pos6 = superImpose(blackBishop,white);
 // char** pos7 = superImpose(blackKnight,black);
 // char** pos8 = superImpose(blackRook,white);
 // char** whiteBlack = join(white,black);
 // char** firstRow = repeatH(join(black,white),4);
 // char** secondRow = reverse(repeatH(join(black,white),4));
 // char** tRow = up(firstRow,secondRow);
 // char** fourRow = repeatV(up(repeatH(join(black,white),4),reverse(repeatH(join(black,white),4))),1);
 // char** par = join(superImpose(blackRook,black),superImpose(blackKnight,white));
 // char** par2 = join(join(superImpose(blackRook,black),superImpose(blackKnight,white)),superImpose(blackBishop,black));
 // char** par3 = join(join(join(superImpose(blackRook,black),superImpose(blackKnight,white)),superImpose(blackBishop,black)),superImpose(blackQueen,white));
 // char** par4 = join(join(join(join(superImpose(blackRook,black),superImpose(blackKnight,white)),superImpose(blackBishop,black)),superImpose(blackQueen,white)),superImpose(blackKing,black));
 // char** par5 = join(join(join(join(join(superImpose(blackRook,black),superImpose(blackKnight,white)),superImpose(blackBishop,black)),superImpose(blackQueen,white)),superImpose(blackKing,black)),superImpose(blackBishop,white));
 // char** par6 = join(join(join(join(join(join(superImpose(whiteRook,black),superImpose(whiteKnight,white)),superImpose(whiteBishop,black)),superImpose(whiteQueen,white)),superImpose(whiteKing,black)),superImpose(whiteBishop,white)),superImpose(whiteKnight,black));
  char** fila = join(join(join(join(join(join(join(superImpose(blackRook,black),superImpose(blackKnight,white)),superImpose(blackBishop,black)),superImpose(blackQueen,white)),superImpose(blackKing,black)),superImpose(blackBishop,white)),superImpose(blackKnight,black)),superImpose(blackRook,white));
  interpreter(fila);
}

