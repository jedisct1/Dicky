
/* Dicky - public domain */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "dicky.h"

#define STR "\x4b\x69\x6b\x6f\x75\x20\x74\x75\x20\x76\x65\x75\x78\x20\x76"
            "\x6f\x69\x72\x20\x6d\x61\x20\x62\x69\x74\x65"

int main(void)
{
    unsigned char *compressed;
    size_t compressed_size;
    char *uncompressed;
    size_t uncompressed_size;

    srandomdev();
    dicky_compress(&compressed, &compressed_size, STR, strlen(STR));
    dicky_uncompress(&uncompressed, &uncompressed_size,
                     compressed, compressed_size);
    dicky_free(compressed);
    dicky_free(uncompressed);
    
    return 0;
}
