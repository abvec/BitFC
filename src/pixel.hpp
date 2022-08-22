#ifndef _BITFC_PIXEL_

    #define _BITFC_PIXEL_

    #include <cstdint>

    namespace bitfc {

        class RGBPixel {

            public :

            RGBPixel ();
            RGBPixel ( uint8_t rgb );
            RGBPixel ( uint8_t r, uint8_t g, uint8_t b );

            uint8_t r;
            uint8_t g;
            uint8_t b;

        }; /* class RGBPixel */

        class RGBAPixel {

            RGBAPixel ();
            RGBAPixel ( uint8_t rgba );
            RGBAPixel ( RGBPixel rgb, uint8_t a );
            RGBAPixel ( uint8_t r, uint8_t g, uint8_t b, uint8_t a );

            uint8_t r;
            uint8_t g;
            uint8_t b;
            uint8_t a;

        }; /* class RGBAPixel */

        class ChannelArray {

            public :

            struct {

                uint8_t * r;
                uint8_t * g;
                uint8_t * b;
                uint8_t * a;

            } channels;

            uint32_t size;

        }; /* class ChannelArray */

    }; /* namespace bitfc */

#endif /* _BITFC_PIXEL_ */
