#include "8x8Matrix.h"

const uint64_t image[] = {
0xff000001010000ff, 0xff000003030000ff,
0xff000006060000ff, 0xff00000c0c0000ff, 
0xff000018180000ff, 0xff000030300000ff,
0xff000060600000ff, 0xff0000c0c00000ff,
0xff000080800000ff, 0xff0000c0c00000ff,
0xff000060600000ff, 0xff000018180000ff,
0xff00000c0c0000ff, 0xff000006060000ff,
0xff000003030000ff, 0xff000001010000ff};

const int IMAGES_LEN = sizeof(image) / 8;

int i = 0;

Matrix matrix(6, 7, 8, 9, 10, 11, 12, 13, A0, A1, A2, A3, A4, A5, 4, 5);

void setup() {}

void loop() {
  if (i >= IMAGES_LEN) {
    i = 0;
  }
  matrix.setHex(image[i]);
  matrix.scanForMillis(100);
  i++;
}
