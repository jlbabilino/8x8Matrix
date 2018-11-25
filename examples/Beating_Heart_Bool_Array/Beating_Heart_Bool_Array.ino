#include <8x8Matrix.h>

const bool heart[64] = {
  0, 1, 1, 0, 0, 1, 1, 0,
  1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1,
  0, 1, 1, 1, 1, 1, 1, 0,
  0, 0, 1, 1, 1, 1, 0, 0,
  0, 0, 0, 1, 1, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0
};

const bool blank[64] = {
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0
};


Matrix matrix(6, 7, 8, 9, 10, 11, 12, 13, A0, A1, A2, A3, A4, A5, 4, 5);

void setup() {}

void loop() {

  matrix.setBoolArray(heart);
  matrix.scanForMillis(100);

  matrix.setBoolArray(blank);
  matrix.scanForMillis(100);

  matrix.setBoolArray(heart);
  matrix.scanForMillis(100);

  matrix.setBoolArray(blank);
  matrix.scanForMillis(600);

}
