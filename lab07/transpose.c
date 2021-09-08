#include "transpose.h"

/* The naive transpose function as a reference. */
void transpose_naive(int n, int blocksize, int *dst, int *src) {
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            dst[y + x * n] = src[x + y * n];
        }
    }
}

/* Implement cache blocking below. You should NOT assume that n is a
 * multiple of the block size. */
void transpose_blocking(int n, int blocksize, int *dst, int *src) {
    // YOUR CODE HERE
    int m_x,m_y;
    int nblock = n/blocksize;
    for(int b_r=0;b_r<nblock;b_r++){
        for(int b_l=0;b_l<nblock;b_l++){
            for(int x=0;x<blocksize;x++){
                for(int y=0;y<blocksize;y++){
                    m_x = b_r*blocksize + x;
                    m_y = b_l*blocksize +y;
                    dst[m_y + m_x * n] = src[m_x + m_y * n];
                }
            }
        }
    }
}
