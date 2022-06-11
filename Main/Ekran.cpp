#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9341.h"
#include "Arduino.h"
#include "Ekran.h"

#define TFT_DC 9
#define TFT_CS 10
#define TFT_RST 8

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

Ekran::Ekran()
{
}
void Ekran::init()
{
    pinMode(TFT_CS, OUTPUT);
    pinMode(7, OUTPUT);
    digitalWrite(TFT_CS, HIGH);
    digitalWrite(7, HIGH);
    tft.begin();
    tft.setRotation(0);
    tft.fillScreen(ILI9341_BLACK);
}

void Ekran::draw(int mapa[15][9])
{
    int i, j;
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (mapa[i][j] == 1)
                tft.fillRect(60 + j * 20, i * 20, 20, 20, ILI9341_MAGENTA);
        }
    }
}

void Ekran::test()
{
    tft.fillRect(50, 50, 50, 50, ILI9341_MAGENTA);
}
