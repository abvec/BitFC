#include "pixel.cpp"

RGBPixel::RGBPixel ( ) {}

RGBPixel::RGBPixel ( uint8_t rgb ) {

    (this)->r = rgb;
    (this)->g = rgb;
    (this)->b = rgb;
}

RGBPixel::RGBPixel ( uint8_t red, uint8_t green, uint8_t blue ) {

    (this)->r = red;
    (this)->g = green;
    (this)->b = blue;
}

RGBAPixel::RGBAPixel ( ) {}

RGBAPixel::RGBAPixel ( uint8_t rgba ) {

    (this)->r = rgba;
    (this)->g = rgba;
    (this)->b = rgba;
    (this)->a = rgba;
}

RGBAPixel::RGBAPixel ( RGBPixel rgb, uint8_t alpha ) {

    (this)->r = rgb;
    (this)->g = rgb;
    (this)->b = rgb;
    (this)->a = alpha;
}

RGBAPixel::RGBAPixel ( uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha ) {

    (this)->r = red;
    (this)->g = green;
    (this)->b = blue;
    (this)->a = alpha;
}
