#include "Tetris.h"
#include "Ekran.h"

Tetris game;
Ekran screen;

void setup()
{
  Serial.begin(9600);
  screen.init();
  game.init();
  game.test();
  screen.draw(game.mapa);
}

void loop(void)
{
}
