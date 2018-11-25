#include "8x8Matrix.h"

const uint64_t IMAGES[] = {0x0000000000000000, 0xffffffffffffffff}; // put hex images generated from https://xantorohara.github.io/led-matrix-editor/

const int IMAGES_LEN = sizeof(IMAGES) / 8;

int i = 0;

Matrix matrix(6, 7, 8, 9, 10, 11, 12, 13, A0, A1, A2, A3, A4, A5, 4, 5);

void setup() {}

void loop() {
  if (i >= IMAGES_LEN) {
    i = 0;
  }
  matrix.setHex(IMAGES[i]);
  matrix.scanForMillis(1000);
  i++;
}
