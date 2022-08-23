#ifndef _BITFC_PIXEL_ARRAY_

    #define _BITFC_PIXEL_ARRAY_

    #include <cstdint>
    #include "pixel.hpp"

    namespace bitfc {


        /* AOS style pixel array */
        class PixelArray {

            public :

            uint8_t * pixels;
            uint32_t length;
            uint32_t channels;

        }; /* class PixelArray */

        /* AOS style 2D pixel array */
        class PixelArray2D {

            public :

            uint8_t * pixels;
            uint32_t length;
            uint32_t width;
            uint32_t channels;

        }; /* class PixelArray2D */

        /* SOA style rgb pixel array */
        class RGBPixelArray {

            public :

            struct {

                uint8_t * r;
                uint8_t * g;
                uint8_t * b;

            } pixels;

            uint32_t length;

        }; /* class RGBPixelArray */

        /* SOA style rgb pixel array */
        class RGBPixelArray2D {

            public :

            struct {

                uint8_t * r;
                uint8_t * g;
                uint8_t * b;

            } pixels;

            uint32_t length;
            uint32_t width;

        }; /* class RGBPixelArray2D */

        /* SOA style rgba pixel array */
        class RGBAPixelArray {

            public :

            struct {

                uint8_t * r;
                uint8_t * g;
                uint8_t * b;
                uint8_t * a;

            } pixels;

            uint32_t length;

        }; /* class RGBAPixelArray */

        /* SOA style rgba 2d pixel array */
        class RGBAPixelArray2D {

            public :

            struct {

                uint8_t * r;
                uint8_t * g;
                uint8_t * b;
                uint8_t * a;

            } pixels;

            uint32_t length;
            uint32_t width;

        }; /* class RGBAPixelArray2D */

    }; /* namespace bitfc */

#endif /* _BITFC_PIXEL_ARRAY_ */
