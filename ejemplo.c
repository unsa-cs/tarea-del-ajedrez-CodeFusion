#include "chess.h"
#include "figures.h"
#include <stdlib.h>
#include <stdio.h>
void display(){


  // Crear un arreglo bidimensional para representar el tablero
    char** tablero[8][8];

  
    for (int j = 0; j < 8; j++) {
        if ((j+1) % 2 == 0) {
            tablero[0][j] = whiteSquare;  // Casilla blanca en las posiciones pares
        } else {
            tablero[0][j] = reverse(whiteSquare);  // Casilla negra en las posiciones impares
        }
    }

    for (int j = 1; j < 8; j++) {
        tablero[0][0] = join(tablero[0][0], tablero[0][j]);
    }

        interpreter(tablero[0][0]);
/////////////////////////////

}

