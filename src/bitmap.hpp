#ifndef _BITFC_BITMAP_

    #define _BITFC_BITMAP_

    #include <fstream>
    #include <cstdint>

    #include "pixel.hpp"
    #include "fileioret.hpp"
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

            enum class VALIDATION_ERROR {

                NO_ERROR = 0,
                FILE_IDENT,
                FILE_SIZE,
                DATA_OFFSET,
                HEADER_SIZE,
                IMAGE_WIDTH,
                IMAGE_HEIGHT,
                COLOR_PLANES,
                BITS_PER_PIXEL,
                COMPRESSION_METHOD,
                BITMAP_DATA_SIZE,
                HORIZONTAL_RES,
                VERTICAL_RES,
                COLOR_PALETE,
                IMPORTANT_COLORS,

            }; /* enum class VALIDATION_ERROR */

            enum class READ_ERROR {

                NO_ERROR = 0,
                FILE_NOT_OPEN,
                FILE_READ,
                FILE_IDENT,
                HEADER_SIZE,

            }; /* enum class READ_ERROR */

            enum class WRITE_ERROR {

                NO_ERROR = 0,
                FILE_NOT_OPEN,
                IMAGE_WIDTH,
                IMAGE_HEIGHT,
                BITS_PER_PIXEL,

            }; /* enum class WRITE_ERROR */

            /* Validate header parameters. */
            /* Assumes header is correct if we can properly read and write using this library. */
            VALIDATION_ERROR validate_header ( );

            /* Read header from a file. Returns read error and how many bytes it manage to read. */
            FileIOReturn<READ_ERROR> read_header ( std::ifstream & file );

            /* Write header to a file. Returns write error and how many bytes it manage to write. */
            FileIOReturn<WRITE_ERROR> write_header ( std::ifstream & file );

            BitmapIdentHeader ident_header;
            BitmapDIB40Header dib40_header;

        }; /* class BitmapFileHeader */

    }; /* namespace bitfc */

#endif /* _BITFC_BITMAP_ */
