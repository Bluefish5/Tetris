#include "Arduino.h"
#include "Tetris.h"

Tetris::Tetris()
{
    int mapa[15][9];  
}
void Tetris::init()
{
    int i, j;
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 9; j++)
        {
            mapa[i][j] = 0;
        }
    }
}
void Tetris::test()
{
    mapa[8][2] = 1;
    mapa[0][0] = 1;
    mapa[0][8] = 1;
    mapa[14][0] = 1;
    mapa[14][8] = 1;
}
