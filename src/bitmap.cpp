#include "bitmap.hpp"

namespace bitfc {

    /* Validate header parameters. */
    /* Assumes header is correct if we can properly read and write using this library. */
    BitmapFileHeader::VALIDATION_ERROR BitmapFileHeader::validate_header ( ) {}

    /* Read header from a file. Returns read error and how many bytes it manage to read. */
    FileIOReturn<BitmapFileHeader::READ_ERROR> BitmapFileHeader::read_header ( std::ifstream & file ) {}

    /* Write header to a file. Returns write error and how many bytes it manage to write. */
    FileIOReturn<BitmapFileHeader::WRITE_ERROR> BitmapFileHeader::write_header ( std::ifstream & file ) {}

}; /* namespace bitfc */
