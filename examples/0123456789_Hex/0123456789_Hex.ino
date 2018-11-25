#include "8x8Matrix.h"

const uint64_t IMAGES[] = {
  0x1c2222222222221c,
  0x1c08080808080c08,
  0x3e0408102020221c,
  0x1c2220201820221c,
  0x20203e2224283020,
  0x1c2220201e02023e,
  0x1c2222221e02221c,
  0x040404081020203e,
  0x1c2222221c22221c,
  0x1c22203c2222221c
};

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
