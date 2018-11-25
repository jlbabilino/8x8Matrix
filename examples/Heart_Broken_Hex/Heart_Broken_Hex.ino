#include "8x8Matrix.h"

const uint64_t heart[2] = {0x00183c7effffff66, 0x00182c6eefc7c742};

const int IMAGES_LEN = sizeof(heart) / 8;

int i = 0;

Matrix matrix(6, 7, 8, 9, 10, 11, 12, 13, A0, A1, A2, A3, A4, A5, 4, 5);

void setup() {}

void loop() {
  if (i >= IMAGES_LEN) {
    i = 0;
  }
  matrix.setHex(heart[i]);
  matrix.scanForMillis(1000);
  i++;
}
