#ifndef _BITFC_BITMAP_

    #define _BITFC_BITMAP_

    #include <fstream>
    #include <cstdint>

    #include "pixel.hpp"

    namespace bitfc {

        struct BitmapFileHeader {

            uint16_t file_identification;
            uint32_t file_size;
            uint32_t reserved;
            uint32_t data_offset;
            uint32_t header_size;

        }; /* struct BitmapFileHeader */

        struct BitmapDIB40Header {

            uint32_t image_width;
            uint32_t image_height;
            uint16_t color_planes;
            uint16_t bits_per_pixel;
            uint32_t compression_method;
            uint32_t bitmap_data_size;
            uint32_t horizontal_res;
            uint32_t vertical_res;
            uint32_t color_palete;
            uint32_t important_colors;

        }; /* struct BitmapDIB40Header */

        class Bitmap {

            public :

            enum READ_ERROR {};

            enum WRITE_ERROR {};

            struct {

                BitmapFileHeader    bitmap_header;
                BitmapDIB40Header   dib40_header;

            } file_header;


        }; /* class Bitmap */

    }; /* namespace bitfc */

#endif /* _BITFC_BITMAP_ */
