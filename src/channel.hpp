#ifndef _BITFC_CHANNEL_

    #define _BITFC_CHANNEL_
    
    #include <cstdint>

    namespace bitfc {

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

#endif /* _BITFC_BITMAP_ */
