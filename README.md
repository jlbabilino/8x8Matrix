


# 8x8 LED Matrix Arduino Library

NOTE: This library is driving the 8x8 LED matrix itself. This library is not for the MAX7219 chip.

## Information

### Description

This is a library for driving the 8x8 LED matrix using the 16 pins directly on the part. It can scan, set images, and set pixels.

The library works by using a boolean array called pixelDatabase, which contains the current state of every pixel. Each of the five functions, which control the state of pixels, update the pixelDatabase array whenever run. After the database is updated, one of the three scanning functions must be run. The scanning works by rendering the first row, then the second, then the third etc. As a result, you must run one of the three functions constantly or your image will not render properly. You can either write your code to have the scan() function run continuously, or use the scanForMillis() function or scanForCount().

### Download
http://github.com/jlbabilino/8x8Matrix
## Functions

### Matrix(const uint8_t topPin1, const uint8_t topPin2, const uint8_t topPin3, const uint8_t topPin4, const uint8_t topPin5, const uint8_t topPin6, const uint8_t topPin7, const uint8_t topPin8, const uint8_t bottomPin1, const uint8_t bottomPin2, const uint8_t bottomPin3, const uint8_t bottomPin4, const uint8_t bottomPin5, const uint8_t bottomPin6, const uint8_t bottomPin7, const uint8_t bottomPin8)

This is the constructor. The  16 Parameters are for setting the pins. The first 8 parameters are the pins on the top side of the matrix (the side with text). The next 8 parameters are the pins on the bottom side of the matrix (the side without text).

### setXYState(int X, int Y, bool OnOff)

This function changes the state of the LED on the coordinates specified. The values range from 1 - 8 for x and y. The boolean at the end corresponds to the state of the specific pixel.

### setPixelState(int Pixel, bool OnOff)

This function changes the state of the LED on the pixel specified. The pixels are numbered from left to right, then down one row just like what you are reading right now. Zero corresponds to the first pixel.

### setBoolArray(bool pixelArray[64])

This function allows you to set a boolean array as the image of the matrix. An example would look like this:

const bool image[64] {
0,1,1,0,0,1,1,0,
1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,
0,1,1,1,1,1,1,0,
0,0,1,1,1,1,0,0,
0,0,0,1,1,0,0,0,
0,0,0,0,0,0,0,0
};

This is an image of a heart. It could be set using this line:

(Name of Object).setBoolArray(image);

### setByteArray(byte image[8])
This function sets a byte array as the image of the matrix. Byte 1 corresponds to row 1, Byte 2 corresponds to row 2, etc. The bits of the bytes are read and 0 turns that pixel off, and 1 turns that pixel on. The bits are read from most significant (leftmost) to least significant (rightmost) to make writing these in arduino easier. You can use xantorohara's led matrix editor https://xantorohara.github.io/led-matrix-editor/ to make byte arrays. This is an image of the number 5:
const byte image[8] = {
{
  B01111100,
  B01000000,
  B01000000,
  B01111000,
  B00000100,
  B00000100,
  B01000100,
  B00111000
}};
### setHex(uint64_t image)
This function sets a 64 bit unsigned integer as the image of the matrix. The function is called setHex because you can use a shorter hex value such as this one, the number 8: 0x1c2222221c22221c instead of the longer integer 2027220312166375964. Either will work. These hex values can also be generated from xantorohara's led matrix editor https://xantorohara.github.io/led-matrix-editor/. The library reads these values by converting them into binary, then reading the bits from least significant (rightmost) to most significant (leftmost). The least significant bit (rightmost) corresponds to the top left pixel, and the most significant bit (leftmost) corresponds to the bottom right pixel.
### scan()
This function is similar to the display() or update() function on many other libraries, except that you must constantly run this for the image to display properly. It first displays the first row, then the second, then the third etc. It only needs to do this because it is a matrix and does not have a pin for all 64 pixels. The scan() function will only do this procedure once. If you would like a function that repeats this function, see the two functions bellow.
### scanForMillis(unsigned long time)
This function will repeat the scan() function for the amount of milliseconds specified. It can be useful for displaying an image for a certain amount of time.
### scanForCount(unsigned long count)
This function will repeat the scan() function x number of times.
