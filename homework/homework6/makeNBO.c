#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

bool machineIsLittleEndian() {
    unsigned int x = 0x76543210;
    char *c = (char*) &x;
    return(*c == 0x10);                 //returns true if the last bytes of x are 10
}

uint64_t makeBigEndian64(uint64_t number) {
    uint64_t retValue = number;
    if(machineIsLittleEndian() ){                   //Check to see big/little endian
        uint64_t byte0, byte1, byte2, byte3, byte4, byte5, byte6, byte7;        //If little endian: reverse
        byte0 = (number && 0x00000000000000FF) >> 0;                        //segmenting number by bytes
        byte1 = (number && 0x000000000000FF00) >> 8;
        byte2 = (number && 0x0000000000FF0000) >> 16;
        byte3 = (number && 0x00000000FF000000) >> 24;
        byte4 = (number && 0x000000FF00000000) >> 32;
        byte5 = (number && 0x0000FF0000000000) >> 40;
        byte6 = (number && 0x00FF000000000000) >> 48;
        byte7 = (number && 0xFF00000000000000) >> 56;
        retValue = ( (byte0 << 56) | (byte1 << 48) | (byte2 <<40) | (byte3 << 32) | (byte4 <<24) |  //combining the digits/bytes
                    (byte5 << 16) | (byte6 << 8) | (byte7 << 0));
    }
    return retValue;
}

int main(int argc, char *argv[]){
    //Test Portion:
    printf("%" PRId64, makeNBO(0x12345678));
    printf("%" PRId64, makeNBO(0x10482022));
    printf("%" PRId64, makeNBO(0x13421332));
    printf("%" PRId64, makeNBO(0x12820482));

    return 0;

}