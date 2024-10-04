#include "chess.h"
#include "figures.h"
#include <stdlib.h>
#include <stdio.h>
void display(){

//Guardamos las imagen en un puntero a puntero para utlizarlo mas adelante
// Piezas blancas
  char** whiteKing = king;
  char** whiteQueen = queen;
  char** whiteRook = rook;
  char** whiteBishop = bishop;
  char** whiteKnight = knight;
  char** whitePawn = pawn;

    // Piezas negras (invertidas usando reverse)
  char** blackKing = reverse(king);
  char** blackQueen = reverse(queen);
  char** blackRook = reverse(rook);
  char** blackBishop = reverse(bishop);
  char** blackKnight = reverse(knight);
  char** blackPawn = reverse(pawn);                          //
////////////////////////
///
    char** whiteSquare = whiteSquare; a

    char** firstRow = join(whiteKing, repeatH(whiteSquare, 7));

    char** otherRow = repeatH(whiteSquare, 8);

    char** chessBoard = up(firstRow, repeatV(otherRow, 7));

    interpreter(chessBoard);


//liberamos la memoria ya que reverse usa malloc
  free(blackKing);
  free(blackQueen);
  free(blackRook);
  free(blackBishop);
  free(blackKnight);
  free(blackPawn);

}

