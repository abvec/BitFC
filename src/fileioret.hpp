#ifndef _BITFC_FILEIORET_

    #define _BITFC_FILEIORET_

    #include <cstdint>

    namespace bitfc {

        /* A wrapper for returning value and size_t for how many bytes we read/written from/to file */
        template < typename Ret > class FileIOReturn {

            public :

            size_t bytes;
            Ret result;

        }; /* class FileIOReturn */

    }; /* namespace bitfc */

#endif /* _BITFC_FILEIORET_ */
