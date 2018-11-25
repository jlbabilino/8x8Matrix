/*
  8x8Matrix.h - library for the 8x8 matrix led display.
  Created by Justin Babilino, November 24, 2018.
  Released into the public domain with no licenses.
  Thank you for downloading!
*/

#ifndef Matrix_h // tests if library has already been declared
#define Matrix_h// if not, it will define it

#include "Arduino.h" // include the default library

class Matrix { // declare the class

  public:

    Matrix(const uint8_t topPin1, const uint8_t topPin2, const uint8_t topPin3, const uint8_t topPin4, const uint8_t topPin5, const uint8_t topPin6, const uint8_t topPin7, const uint8_t topPin8, const uint8_t bottomPin1, const uint8_t bottomPin2, const uint8_t bottomPin3, const uint8_t bottomPin4, const uint8_t bottomPin5, const uint8_t bottomPin6, const uint8_t bottomPin7, const uint8_t bottomPin8);

    void setXYState(int X, int Y, bool OnOff);
    void setPixelState(int Pixel, bool OnOff);
    //void setAllPixels(bool pixel0, bool pixel1, bool pixel2, bool pixel3, bool pixel4, bool pixel5, bool pixel6, bool pixel7, bool pixel8, bool pixel9, bool pixel10, bool pixel11, bool pixel12, bool pixel13, bool pixel14, bool pixel15, bool pixel16, bool pixel17, bool pixel18, bool pixel19, bool pixel20, bool pixel21, bool pixel22, bool pixel23, bool pixel24, bool pixel25, bool pixel26, bool pixel27, bool pixel28, bool pixel29, bool pixel30, bool pixel31, bool pixel32, bool pixel33, bool pixel34, bool pixel35, bool pixel36, bool pixel37, bool pixel38, bool pixel39, bool pixel40, bool pixel41, bool pixel42, bool pixel43, bool pixel44, bool pixel45, bool pixel46, bool pixel47, bool pixel48, bool pixel49, bool pixel50, bool pixel51, bool pixel52, bool pixel53, bool pixel54, bool pixel55, bool pixel56, bool pixel57, bool pixel58, bool pixel59, bool pixel60, bool pixel61, bool pixel62, bool pixel63);
    void setBoolArray(bool pixelArray[64]);
    void setByteArray(byte image[8]);
    void setHex(uint64_t image);
    void scan();
    void scanForMillis(unsigned long time);
    void scanForCount(unsigned long count);

  private:

    bool pixelDatabase[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    uint8_t Y6;
    uint8_t Y3;
    uint8_t X4;
    uint8_t Y1;
    uint8_t X6;
    uint8_t X7;
    uint8_t Y2;
    uint8_t Y4;

    uint8_t Y8;
    uint8_t X5;
    uint8_t X3;
    uint8_t Y5;
    uint8_t X8;
    uint8_t Y7;
    uint8_t X2;
    uint8_t X1;
};

#endif
