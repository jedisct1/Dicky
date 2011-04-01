
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
    dicky_uncompress(&uncompressed, &uncompressed_size,
                     compressed, compressed_size);
    dicky_free(compressed);
    dicky_free(uncompressed);
    
    return 0;
}
