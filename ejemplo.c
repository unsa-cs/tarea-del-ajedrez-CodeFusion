#include "chess.h"
#include "figures.h"
#include <stdlib.h>
#include <stdio.h>
void display(){


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

}

