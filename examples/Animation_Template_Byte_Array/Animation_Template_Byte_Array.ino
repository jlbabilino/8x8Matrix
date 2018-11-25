#include "8x8Matrix.h"

const byte IMAGES[][8] = { // put byte array images generated from https://xantorohara.github.io/led-matrix-editor/
{
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
},{
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111
}};

const int IMAGES_LEN = sizeof(IMAGES) / 8;

int i = 0;

Matrix matrix(6, 7, 8, 9, 10, 11, 12, 13, A0, A1, A2, A3, A4, A5, 4, 5);

void setup() {}

void loop() {
  if (i >= IMAGES_LEN) {
    i = 0;
  }
  matrix.setByteArray(IMAGES[i]);
  matrix.scanForMillis(1000);
  i++;
}
