
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

enum LOLFSM_State {
    C_HOLD = -1,
    C_SPACE = 26,
    C_LOL = 29,
    C_MDR = 30,
    C_BITE = 31,
};

const char ctable[256] = {
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

#endif
