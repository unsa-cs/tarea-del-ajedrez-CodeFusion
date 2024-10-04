#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = reverse(knight);
  interpreter(blackKnight);

  interpreter(king);      // rey
  interpreter(queen);     // reina
  interpreter(rook);      // torre
  interpreter(bishop);    // alfil
  interpreter(knight);    //caballo
  interpreter(pawn);      // peOn
  
}
