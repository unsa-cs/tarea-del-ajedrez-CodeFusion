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
    char** blancoSquare = whiteSquare;

    char** firstRow = join(whiteKing,repeatH(blancoSquare,4));

    char** otherRow = repeatV(whiteSquare,5);
/*
    char** firstRow = join(whiteKing, repeatH(blancoSquare, 5));

    char** otherRow = repeatH(whiteSquare, 6);

    char** chessBoard = up(firstRow, repeatV(otherRow, 7));

    interpreter(chessBoard) ; **/
///////////////////////////////////////////////

  // Crear un arreglo bidimensional para representar el tablero
    char** tablero[8][8];

    // Dibujar la primera fila alternando entre casillas blancas y negras
    for (int j = 0; j < 8; j++) {
        if (j % 2 == 0) {
            tablero[0][j] = whiteSquare;  // Casilla blanca en las posiciones pares
        } else {
            tablero[0][j] = reverse(whiteSquare);  // Casilla negra en las posiciones impares
        }
    }

    // Renderizar la primera fila del tablero
    for (int j = 0; j < 8; j++) {
        interpreter(tablero[0][j]);  // Dibuja la casilla en la posición correspondiente
    }

/////////////////////////////
   // interpreter(otherRow);
  free(blackQueen);
  free(blackRook);
  free(blackBishop);
  free(blackKnight);
  free(blackPawn);

}

