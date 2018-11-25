/*
  8x8Matrix.h - library for the 8x8 matrix led display.
  Created by Justin Babilino, November 24, 2018.
  Released into the public domain with no licenses.
  Thank you for downloading!
*/
#include "Arduino.h"
#include "8x8Matrix.h"

Matrix::Matrix(const uint8_t topPin1, const uint8_t topPin2, const uint8_t topPin3, const uint8_t topPin4, const uint8_t topPin5, const uint8_t topPin6, const uint8_t topPin7, const uint8_t topPin8, const uint8_t bottomPin1, const uint8_t bottomPin2, const uint8_t bottomPin3, const uint8_t bottomPin4, const uint8_t bottomPin5, const uint8_t bottomPin6, const uint8_t bottomPin7, const uint8_t bottomPin8) {

  pinMode(topPin1, OUTPUT);
  pinMode(topPin2, OUTPUT);
  pinMode(topPin3, OUTPUT);
  pinMode(topPin4, OUTPUT);
  pinMode(topPin5, OUTPUT);
  pinMode(topPin6, OUTPUT);
  pinMode(topPin7, OUTPUT);
  pinMode(topPin8, OUTPUT);

  pinMode(bottomPin1, OUTPUT);
  pinMode(bottomPin2, OUTPUT);
  pinMode(bottomPin3, OUTPUT);
  pinMode(bottomPin4, OUTPUT);
  pinMode(bottomPin5, OUTPUT);
  pinMode(bottomPin6, OUTPUT);
  pinMode(bottomPin7, OUTPUT);
  pinMode(bottomPin8, OUTPUT);

  Y6 = topPin1;
  Y3 = topPin2;
  X4 = topPin3;
  Y1 = topPin4;
  X6 = topPin5;
  X7 = topPin6;
  Y2 = topPin7;
  Y4 = topPin8;

  Y8 = bottomPin1;
  X5 = bottomPin2;
  X3 = bottomPin3;
  Y5 = bottomPin4;
  X8 = bottomPin5;
  Y7 = bottomPin6;
  X2 = bottomPin7;
  X1 = bottomPin8;

  digitalWrite(X1, HIGH);
  digitalWrite(X2, HIGH);
  digitalWrite(X3, HIGH);
  digitalWrite(X4, HIGH);
  digitalWrite(X5, HIGH);
  digitalWrite(X6, HIGH);
  digitalWrite(X7, HIGH);
  digitalWrite(X8, HIGH);

  digitalWrite(Y1, LOW);
  digitalWrite(Y2, LOW);
  digitalWrite(Y3, LOW);
  digitalWrite(Y4, LOW);
  digitalWrite(Y5, LOW);
  digitalWrite(Y6, LOW);
  digitalWrite(Y7, LOW);
  digitalWrite(Y8, LOW);
}

void Matrix::setXYState(int X, int Y, bool OnOff) {
  pixelDatabase[(8 * (Y - 1)) + (X - 1)] = OnOff;
}

void Matrix::setPixelState(int Pixel, bool OnOff) {
  pixelDatabase[Pixel] = OnOff;
}

/*void Matrix::setAllPixels(bool pixel0, bool pixel1, bool pixel2, bool pixel3, bool pixel4, bool pixel5, bool pixel6, bool pixel7, bool pixel8, bool pixel9, bool pixel10, bool pixel11, bool pixel12, bool pixel13, bool pixel14, bool pixel15, bool pixel16, bool pixel17, bool pixel18, bool pixel19, bool pixel20, bool pixel21, bool pixel22, bool pixel23, bool pixel24, bool pixel25, bool pixel26, bool pixel27, bool pixel28, bool pixel29, bool pixel30, bool pixel31, bool pixel32, bool pixel33, bool pixel34, bool pixel35, bool pixel36, bool pixel37, bool pixel38, bool pixel39, bool pixel40, bool pixel41, bool pixel42, bool pixel43, bool pixel44, bool pixel45, bool pixel46, bool pixel47, bool pixel48, bool pixel49, bool pixel50, bool pixel51, bool pixel52, bool pixel53, bool pixel54, bool pixel55, bool pixel56, bool pixel57, bool pixel58, bool pixel59, bool pixel60, bool pixel61, bool pixel62, bool pixel63) {

  pixelDatabase[0] = pixel0;
  pixelDatabase[1] = pixel1;
  pixelDatabase[2] = pixel2;
  pixelDatabase[3] = pixel3;
  pixelDatabase[4] = pixel4;
  pixelDatabase[5] = pixel5;
  pixelDatabase[6] = pixel6;
  pixelDatabase[7] = pixel7;

  pixelDatabase[8] = pixel8;
  pixelDatabase[9] = pixel9;
  pixelDatabase[10] = pixel10;
  pixelDatabase[11] = pixel11;
  pixelDatabase[12] = pixel12;
  pixelDatabase[13] = pixel13;
  pixelDatabase[14] = pixel14;
  pixelDatabase[15] = pixel15;

  pixelDatabase[16] = pixel16;
  pixelDatabase[17] = pixel17;
  pixelDatabase[18] = pixel18;
  pixelDatabase[19] = pixel19;
  pixelDatabase[20] = pixel20;
  pixelDatabase[21] = pixel21;
  pixelDatabase[22] = pixel22;
  pixelDatabase[23] = pixel23;

  pixelDatabase[24] = pixel24;
  pixelDatabase[25] = pixel25;
  pixelDatabase[26] = pixel26;
  pixelDatabase[27] = pixel27;
  pixelDatabase[28] = pixel28;
  pixelDatabase[29] = pixel29;
  pixelDatabase[30] = pixel30;
  pixelDatabase[31] = pixel31;

  pixelDatabase[32] = pixel32;
  pixelDatabase[33] = pixel33;
  pixelDatabase[34] = pixel34;
  pixelDatabase[35] = pixel35;
  pixelDatabase[36] = pixel36;
  pixelDatabase[37] = pixel37;
  pixelDatabase[38] = pixel38;
  pixelDatabase[39] = pixel39;

  pixelDatabase[40] = pixel40;
  pixelDatabase[41] = pixel41;
  pixelDatabase[42] = pixel42;
  pixelDatabase[43] = pixel43;
  pixelDatabase[44] = pixel44;
  pixelDatabase[45] = pixel45;
  pixelDatabase[46] = pixel46;
  pixelDatabase[47] = pixel47;

  pixelDatabase[48] = pixel48;
  pixelDatabase[49] = pixel49;
  pixelDatabase[50] = pixel50;
  pixelDatabase[51] = pixel51;
  pixelDatabase[52] = pixel52;
  pixelDatabase[53] = pixel53;
  pixelDatabase[54] = pixel54;
  pixelDatabase[55] = pixel55;

  pixelDatabase[56] = pixel56;
  pixelDatabase[57] = pixel57;
  pixelDatabase[58] = pixel58;
  pixelDatabase[59] = pixel59;
  pixelDatabase[60] = pixel60;
  pixelDatabase[61] = pixel61;
  pixelDatabase[62] = pixel62;
  pixelDatabase[63] = pixel63;
  }*/

void Matrix::setBoolArray(bool pixelArray[64]) {

  pixelDatabase[0] = pixelArray[0];
  pixelDatabase[1] = pixelArray[1];
  pixelDatabase[2] = pixelArray[2];
  pixelDatabase[3] = pixelArray[3];
  pixelDatabase[4] = pixelArray[4];
  pixelDatabase[5] = pixelArray[5];
  pixelDatabase[6] = pixelArray[6];
  pixelDatabase[7] = pixelArray[7];

  pixelDatabase[8] = pixelArray[8];
  pixelDatabase[9] = pixelArray[9];
  pixelDatabase[10] = pixelArray[10];
  pixelDatabase[11] = pixelArray[11];
  pixelDatabase[12] = pixelArray[12];
  pixelDatabase[13] = pixelArray[13];
  pixelDatabase[14] = pixelArray[14];
  pixelDatabase[15] = pixelArray[15];

  pixelDatabase[16] = pixelArray[16];
  pixelDatabase[17] = pixelArray[17];
  pixelDatabase[18] = pixelArray[18];
  pixelDatabase[19] = pixelArray[19];
  pixelDatabase[20] = pixelArray[20];
  pixelDatabase[21] = pixelArray[21];
  pixelDatabase[22] = pixelArray[22];
  pixelDatabase[23] = pixelArray[23];

  pixelDatabase[24] = pixelArray[24];
  pixelDatabase[25] = pixelArray[25];
  pixelDatabase[26] = pixelArray[26];
  pixelDatabase[27] = pixelArray[27];
  pixelDatabase[28] = pixelArray[28];
  pixelDatabase[29] = pixelArray[29];
  pixelDatabase[30] = pixelArray[30];
  pixelDatabase[31] = pixelArray[31];

  pixelDatabase[32] = pixelArray[32];
  pixelDatabase[33] = pixelArray[33];
  pixelDatabase[34] = pixelArray[34];
  pixelDatabase[35] = pixelArray[35];
  pixelDatabase[36] = pixelArray[36];
  pixelDatabase[37] = pixelArray[37];
  pixelDatabase[38] = pixelArray[38];
  pixelDatabase[39] = pixelArray[39];

  pixelDatabase[40] = pixelArray[40];
  pixelDatabase[41] = pixelArray[41];
  pixelDatabase[42] = pixelArray[42];
  pixelDatabase[43] = pixelArray[43];
  pixelDatabase[44] = pixelArray[44];
  pixelDatabase[45] = pixelArray[45];
  pixelDatabase[46] = pixelArray[46];
  pixelDatabase[47] = pixelArray[47];

  pixelDatabase[48] = pixelArray[48];
  pixelDatabase[49] = pixelArray[49];
  pixelDatabase[50] = pixelArray[50];
  pixelDatabase[51] = pixelArray[51];
  pixelDatabase[52] = pixelArray[52];
  pixelDatabase[53] = pixelArray[53];
  pixelDatabase[54] = pixelArray[54];
  pixelDatabase[55] = pixelArray[55];

  pixelDatabase[56] = pixelArray[56];
  pixelDatabase[57] = pixelArray[57];
  pixelDatabase[58] = pixelArray[58];
  pixelDatabase[59] = pixelArray[59];
  pixelDatabase[60] = pixelArray[60];
  pixelDatabase[61] = pixelArray[61];
  pixelDatabase[62] = pixelArray[62];
  pixelDatabase[63] = pixelArray[63];

}

void Matrix::setByteArray(byte image[8]) {
  for (int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      Matrix::setXYState(x + 1, y + 1, bitRead(image[y], map(x, 0, 7, 7, 0)));
    }
  }
}

void Matrix::setHex(uint64_t image) {

  for (int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      Matrix::setXYState(x + 1, y + 1, bitRead(image, 8 * y + x));
    }
  }
}

void Matrix::scan() {

  digitalWrite(Y1, HIGH); // row 1
  digitalWrite(Y2, LOW);
  digitalWrite(Y3, LOW);
  digitalWrite(Y4, LOW);
  digitalWrite(Y5, LOW);
  digitalWrite(Y6, LOW);
  digitalWrite(Y7, LOW);
  digitalWrite(Y8, LOW);

  digitalWrite(X1, !pixelDatabase[0]);
  digitalWrite(X2, !pixelDatabase[1]);
  digitalWrite(X3, !pixelDatabase[2]);
  digitalWrite(X4, !pixelDatabase[3]);
  digitalWrite(X5, !pixelDatabase[4]);
  digitalWrite(X6, !pixelDatabase[5]);
  digitalWrite(X7, !pixelDatabase[6]);
  digitalWrite(X8, !pixelDatabase[7]);

  digitalWrite(X1, HIGH);
  digitalWrite(X2, HIGH);
  digitalWrite(X3, HIGH);
  digitalWrite(X4, HIGH);
  digitalWrite(X5, HIGH);
  digitalWrite(X6, HIGH);
  digitalWrite(X7, HIGH);
  digitalWrite(X8, HIGH);


  digitalWrite(Y1, LOW);
  digitalWrite(Y2, HIGH); // row 2
  digitalWrite(Y3, LOW);
  digitalWrite(Y4, LOW);
  digitalWrite(Y5, LOW);
  digitalWrite(Y6, LOW);
  digitalWrite(Y7, LOW);
  digitalWrite(Y8, LOW);

  digitalWrite(X1, !pixelDatabase[8]);
  digitalWrite(X2, !pixelDatabase[9]);
  digitalWrite(X3, !pixelDatabase[10]);
  digitalWrite(X4, !pixelDatabase[11]);
  digitalWrite(X5, !pixelDatabase[12]);
  digitalWrite(X6, !pixelDatabase[13]);
  digitalWrite(X7, !pixelDatabase[14]);
  digitalWrite(X8, !pixelDatabase[15]);

  digitalWrite(X1, HIGH);
  digitalWrite(X2, HIGH);
  digitalWrite(X3, HIGH);
  digitalWrite(X4, HIGH);
  digitalWrite(X5, HIGH);
  digitalWrite(X6, HIGH);
  digitalWrite(X7, HIGH);
  digitalWrite(X8, HIGH);


  digitalWrite(Y1, LOW);
  digitalWrite(Y2, LOW);
  digitalWrite(Y3, HIGH); //row 3
  digitalWrite(Y4, LOW);
  digitalWrite(Y5, LOW);
  digitalWrite(Y6, LOW);
  digitalWrite(Y7, LOW);
  digitalWrite(Y8, LOW);

  digitalWrite(X1, !pixelDatabase[16]);
  digitalWrite(X2, !pixelDatabase[17]);
  digitalWrite(X3, !pixelDatabase[18]);
  digitalWrite(X4, !pixelDatabase[19]);
  digitalWrite(X5, !pixelDatabase[20]);
  digitalWrite(X6, !pixelDatabase[21]);
  digitalWrite(X7, !pixelDatabase[22]);
  digitalWrite(X8, !pixelDatabase[23]);

  digitalWrite(X1, HIGH);
  digitalWrite(X2, HIGH);
  digitalWrite(X3, HIGH);
  digitalWrite(X4, HIGH);
  digitalWrite(X5, HIGH);
  digitalWrite(X6, HIGH);
  digitalWrite(X7, HIGH);
  digitalWrite(X8, HIGH);


  digitalWrite(Y1, LOW);
  digitalWrite(Y2, LOW);
  digitalWrite(Y3, LOW);
  digitalWrite(Y4, HIGH); //row 4
  digitalWrite(Y5, LOW);
  digitalWrite(Y6, LOW);
  digitalWrite(Y7, LOW);
  digitalWrite(Y8, LOW);

  digitalWrite(X1, !pixelDatabase[24]);
  digitalWrite(X2, !pixelDatabase[25]);
  digitalWrite(X3, !pixelDatabase[26]);
  digitalWrite(X4, !pixelDatabase[27]);
  digitalWrite(X5, !pixelDatabase[28]);
  digitalWrite(X6, !pixelDatabase[29]);
  digitalWrite(X7, !pixelDatabase[30]);
  digitalWrite(X8, !pixelDatabase[31]);

  digitalWrite(X1, HIGH);
  digitalWrite(X2, HIGH);
  digitalWrite(X3, HIGH);
  digitalWrite(X4, HIGH);
  digitalWrite(X5, HIGH);
  digitalWrite(X6, HIGH);
  digitalWrite(X7, HIGH);
  digitalWrite(X8, HIGH);


  digitalWrite(Y1, LOW);
  digitalWrite(Y2, LOW);
  digitalWrite(Y3, LOW);
  digitalWrite(Y4, LOW);
  digitalWrite(Y5, HIGH); //row 5
  digitalWrite(Y6, LOW);
  digitalWrite(Y7, LOW);
  digitalWrite(Y8, LOW);

  digitalWrite(X1, !pixelDatabase[32]);
  digitalWrite(X2, !pixelDatabase[33]);
  digitalWrite(X3, !pixelDatabase[34]);
  digitalWrite(X4, !pixelDatabase[35]);
  digitalWrite(X5, !pixelDatabase[36]);
  digitalWrite(X6, !pixelDatabase[37]);
  digitalWrite(X7, !pixelDatabase[38]);
  digitalWrite(X8, !pixelDatabase[39]);

  digitalWrite(X1, HIGH);
  digitalWrite(X2, HIGH);
  digitalWrite(X3, HIGH);
  digitalWrite(X4, HIGH);
  digitalWrite(X5, HIGH);
  digitalWrite(X6, HIGH);
  digitalWrite(X7, HIGH);
  digitalWrite(X8, HIGH);


  digitalWrite(Y1, LOW);
  digitalWrite(Y2, LOW);
  digitalWrite(Y3, LOW);
  digitalWrite(Y4, LOW);
  digitalWrite(Y5, LOW);
  digitalWrite(Y6, HIGH); //row 6
  digitalWrite(Y7, LOW);
  digitalWrite(Y8, LOW);

  digitalWrite(X1, !pixelDatabase[40]);
  digitalWrite(X2, !pixelDatabase[41]);
  digitalWrite(X3, !pixelDatabase[42]);
  digitalWrite(X4, !pixelDatabase[43]);
  digitalWrite(X5, !pixelDatabase[44]);
  digitalWrite(X6, !pixelDatabase[45]);
  digitalWrite(X7, !pixelDatabase[46]);
  digitalWrite(X8, !pixelDatabase[47]);

  digitalWrite(X1, HIGH);
  digitalWrite(X2, HIGH);
  digitalWrite(X3, HIGH);
  digitalWrite(X4, HIGH);
  digitalWrite(X5, HIGH);
  digitalWrite(X6, HIGH);
  digitalWrite(X7, HIGH);
  digitalWrite(X8, HIGH);


  digitalWrite(Y1, LOW);
  digitalWrite(Y2, LOW);
  digitalWrite(Y3, LOW);
  digitalWrite(Y4, LOW);
  digitalWrite(Y5, LOW);
  digitalWrite(Y6, LOW);
  digitalWrite(Y7, HIGH); //row 7
  digitalWrite(Y8, LOW);

  digitalWrite(X1, !pixelDatabase[48]);
  digitalWrite(X2, !pixelDatabase[49]);
  digitalWrite(X3, !pixelDatabase[50]);
  digitalWrite(X4, !pixelDatabase[51]);
  digitalWrite(X5, !pixelDatabase[52]);
  digitalWrite(X6, !pixelDatabase[53]);
  digitalWrite(X7, !pixelDatabase[54]);
  digitalWrite(X8, !pixelDatabase[55]);

  digitalWrite(X1, HIGH);
  digitalWrite(X2, HIGH);
  digitalWrite(X3, HIGH);
  digitalWrite(X4, HIGH);
  digitalWrite(X5, HIGH);
  digitalWrite(X6, HIGH);
  digitalWrite(X7, HIGH);
  digitalWrite(X8, HIGH);


  digitalWrite(Y1, LOW);
  digitalWrite(Y2, LOW);
  digitalWrite(Y3, LOW);
  digitalWrite(Y4, LOW);
  digitalWrite(Y5, LOW);
  digitalWrite(Y6, LOW);
  digitalWrite(Y7, LOW);
  digitalWrite(Y8, HIGH); //row 8

  digitalWrite(X1, !pixelDatabase[56]);
  digitalWrite(X2, !pixelDatabase[57]);
  digitalWrite(X3, !pixelDatabase[58]);
  digitalWrite(X4, !pixelDatabase[59]);
  digitalWrite(X5, !pixelDatabase[60]);
  digitalWrite(X6, !pixelDatabase[61]);
  digitalWrite(X7, !pixelDatabase[62]);
  digitalWrite(X8, !pixelDatabase[63]);

  digitalWrite(X1, HIGH);
  digitalWrite(X2, HIGH);
  digitalWrite(X3, HIGH);
  digitalWrite(X4, HIGH);
  digitalWrite(X5, HIGH);
  digitalWrite(X6, HIGH);
  digitalWrite(X7, HIGH);
  digitalWrite(X8, HIGH);
}

void Matrix::scanForMillis(unsigned long time) {
  unsigned long initialTime = millis();

  while (millis() <= initialTime + time) {
    Matrix::scan();
  }
}

void Matrix::scanForCount(unsigned long count) {
  for (int i = 0; i < count; i++) {
    Matrix::scan();
  }
}
