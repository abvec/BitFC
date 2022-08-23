#ifndef _BITFC_PIXEL_

    #define _BITFC_PIXEL_

    #include <cstdint>

    namespace bitfc {

        /* basic rgb pixel */
        class RGBPixel {

            public :

            RGBPixel ();
            RGBPixel ( uint8_t rgb );
            RGBPixel ( uint8_t red, uint8_t green, uint8_t blue );

            uint8_t r;
            uint8_t g;
            uint8_t b;

        }; /* class RGBPixel */


        /* basic rgba pixel */
        class RGBAPixel {

            public :

            RGBAPixel ();
            RGBAPixel ( uint8_t rgba );
            RGBAPixel ( RGBPixel rgb, uint8_t alpha );
            RGBAPixel ( uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha );

            uint8_t r;
            uint8_t g;
            uint8_t b;
            uint8_t a;

        }; /* class RGBAPixel */

    }; /* namespace bitfc */

#endif /* _BITFC_PIXEL_ */
