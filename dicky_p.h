
/* Dicky - public domain */

#ifndef __DICKY_P_H__
#define __DICKY_P_H__ 1

typedef struct LOLFSM_ {
    signed char seen_l;
    signed char seen_o;
    signed char seen_m;
    signed char seen_d;
    signed char seen_r;
    signed char seen_b;
    signed char seen_i;
    signed char seen_t;
    signed char seen_e;
} LOLFSM;

typedef struct OutputBuffer_ {
    unsigned char *buffer;
    size_t pos;
    size_t sizeof_buffer;
    size_t chunk_size;
    int quartet;
} OutputBuffer;

typedef struct InputBuffer_ {
    const unsigned char *buffer;
    size_t pos;
    size_t sizeof_buffer;
    int quartet;
} InputBuffer;

enum LOLFSM_State {
    C_HOLD = -1,
    C_SPACE = 26,
    C_LOL = 29,
    C_MDR = 30,
    C_BITE = 31,
};

static const unsigned char ctable[256] = {
    26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
    26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
    26, 27, 28, 26, 26, 26, 26, 28, 26, 26, 26, 26, 26, 26, 27, 26,
    14, 8, 25, 4, 26, 18, 6, 19, 26, 6, 26, 26, 26, 26, 26, 27, 26, 0,
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, 25, 26, 26, 26, 26, 26, 28, 0, 1, 2, 3, 4, 5,
    6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22,
    23, 24, 25, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
    26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
    26, 26, 26, 26, 26, 26, 26, 26, 26, 8, 2, 4, 14, 24, 8, 18, 26,
    26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 28, 20, 16, 27, 27, 8,
    14, 26, 26, 26, 26, 27, 0, 0, 0, 0, 0, 0, 0, 2, 4, 4, 4, 4, 8, 8,
    8, 8, 3, 13, 14, 14, 14, 14, 14, 23, 14, 20, 20, 20, 20, 24, 15,
    1, 0, 0, 0, 0, 0, 0, 26, 2, 4, 4, 4, 4, 8, 8, 8, 8, 14, 13, 14,
    14, 14, 14, 14, 26, 14, 20, 20, 20, 20, 24, 15, 24
};

static const char * const dtable_[] = {
    "\x41\x61\xc0\xc1\xc2\xc3\xc4\xc5\xc6\xe0\xe1\xe2\xe3\xe4\xe5",
    "\x42\x62\xdf",
    "\x43\x63\xa2\xc7\xe7",
    "\x44\x64\xd0",
    "\x33\x45\x65\xa3\xc8\xc9\xca\xcb\xe8\xe9\xea\xeb",
    "\x46\x66",
    "\x36\x39\x47\x67",
    "\x48\x68",
    "\x31\x49\x69\xa1\xa6\xb9\xcc\xcd\xce\xcf\xec\xed\xee\xef",
    "\x4a\x6a",
    "\x4b\x6b",
    "\x4c\x6c",
    "\x4d\x6d",
    "\x4e\x6e\xd1\xf1",
    "\x30\x4f\x6f\xa4\xba\xd2\xd3\xd4\xd5\xd6\xd8\xf0\xf2\xf3\xf4\xf5\xf6\xf8",
    "\x50\x70\xde\xfe",
    "\x51\x71\xb6",
    "\x52\x72",
    "\x35\x53\x73\xa7",
    "\x37\x54\x74",
    "\x55\x75\xb5\xd9\xda\xdb\xdc\xf9\xfa\xfb\xfc",
    "\x56\x76",
    "\x57\x77",
    "\x58\x78\xd7",
    "\x59\x79\xa5\xdd\xfd\xff",
    "\x32\x5a\x7a",
    "\x20",
    "\x21\x2e\x3f\xb7\xb8\xbf",
    "\x22\x27\x60\xb4",
};

static const unsigned char * const * const dtable =
    (const unsigned char * const *) dtable_;

#define AVG_COMPRESSION_RATIO 2U

#endif
