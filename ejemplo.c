#include "chess.h"
#include "figures.h"
#include <stdlib.h>
#include <stdio.h>

void display(){
////PIEZAS BLANCAS
  char** whiteKing = flipH(king);
  char** whiteQueen = queen;
  char** whiteRook = rook;
  char** whiteBishop = bishop;
  char** whiteKnight = knight;
  char** whitePawn = pawn;
  //// PIEZAS NEGRAS
  char** blackKing = flipH(reverse(king));
  char** blackQueen = flipH(reverse(queen));
  char** blackRook = flipH(reverse(rook));
  char** blackBishop = flipH(reverse(bishop));
  char** blackKnight = flipH(reverse(knight));
  char** blackPawn = flipH(reverse(pawn));
 //// ARREGLO BIDIMENSIONAL
  char** tablero[8][8];

  for(int i =0; i<8;i++){
    for(int j = 0;j<8;j++){
      
      if( i%2 == 0){
        if(j % 2 == 0){
          tablero[i][j] = whiteSquare;
        }
        else{
          tablero[i][j] = reverse(whiteSquare);
        }
      }
      else{
        
        if(j % 2 == 0){
          tablero[i][j] = reverse(whiteSquare);
        }
        else

          tablero[i][j] = whiteSquare;
      }


    }
  }

  tablero[0][0] = superImpose(whiteRook,tablero[0][0]);      
  tablero[0][1] = superImpose(whiteKnight,tablero[0][1]);    
  tablero[0][2] = superImpose(bishop,tablero[0][2]);   
  tablero[0][3] = superImpose(queen,tablero[0][3]);    
  tablero[0][4] = superImpose(whiteKing,tablero[0][4]);      
  tablero[0][5] = superImpose(bishop,tablero[0][5]);    
  tablero[0][6] = superImpose(knight,tablero[0][6]);  
  tablero[0][7] = superImpose(rook,tablero[0][7]);

  tablero[7][0] = superImpose(blackRook,tablero[7][0]);      
  tablero[7][1] = superImpose(blackKnight,tablero[7][1]);    
  tablero[7][2] = superImpose(blackBishop,tablero[7][2]);   
  tablero[7][3] = superImpose(blackQueen,tablero[7][3]);    
  tablero[7][4] = superImpose(blackKing,tablero[7][4]);      
  tablero[7][5] = superImpose(blackBishop,tablero[7][5]);    
  tablero[7][6] = superImpose(blackKnight,tablero[7][6]);  
  tablero[7][7] = superImpose(blackRook,tablero[7][7]);
  
  for (int j = 0; j < 8; j++) {
    tablero[1][j] = superImpose(pawn,tablero[1][j]);  
  }

  for (int j = 0; j < 8; j++) {
    tablero[6][j] = superImpose(blackPawn,tablero[6][j]);  
  }
  char** filaCompleta[8];
  for (int i = 0; i < 8; i++) {
    filaCompleta[i] = tablero[i][0];
    for (int j = 1; j < 8; j++) {
        filaCompleta[i] = join(filaCompleta[i], tablero[i][j]);  
    }
  }


  char** tableroCompleto = filaCompleta[0];
  for (int i = 1; i < 8; i++) {
    tableroCompleto = up(tableroCompleto, filaCompleta[i]); 
  }


  interpreter(tableroCompleto);


  ////Liberamos La memoria
 
  free(blackKing);
  free(blackQueen);
  free(blackRook);
  free(blackBishop);
  free(blackKnight);
  free(blackPawn);

    

 }



