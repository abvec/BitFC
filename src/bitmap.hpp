#ifndef _BITFC_BITMAP_

    #define _BITFC_BITMAP_

    #include <fstream>
    #include <cstdint>

    #include "pixel.hpp"
    #include "pixel_array.hpp"

    namespace bitfc {

        struct BitmapIdentHeader {

            uint16_t file_ident;
            uint32_t file_size;
            uint32_t reserved;
            uint32_t data_offset;
            uint32_t header_size;

        }; /* struct BitmapIdentHeader */

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

        class BitmapFileHeader {

            public :

            BitmapIdentHeader   ident_header;
            BitmapDIB40Header   dib40_header;

        }; /* class BitmapFileHeader */

    }; /* namespace bitfc */

#endif /* _BITFC_BITMAP_ */
