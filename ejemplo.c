#include "chess.h"
#include "figures.h"
#include <stdlib.h>
#include <stdio.h>
void display(){


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

////CREAMOS EL TABLERO B/N
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if ((i + j) % 2 == 0) {
        tablero[i][j] = whiteSquare;  
      } 
      else {
        tablero[i][j] = reverse(whiteSquare);  
      }
    }
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



}

