
/* Dicky - public domain */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "dicky.h"

#define STR "Kikou, tu veux voir ma bite ?"

int main(void)
{
    unsigned char *compressed;
    size_t compressed_size;
    char *uncompressed;
    size_t uncompressed_size;
    
    dicky_compress(&compressed, &compressed_size, STR, strlen(STR));
    dicky_free(compressed);
    assert(compressed_size == (size_t) 15U);
    dicky_uncompress(&uncompressed, &uncompressed_size,
                     compressed, compressed_size);
    
    return 0;
}
