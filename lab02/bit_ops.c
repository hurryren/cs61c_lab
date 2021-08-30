#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
    /* YOUR CODE HERE */
    unsigned a = (x>>n)&0x1;
    return a;
    // return -1; /* UPDATE WITH THE CORRECT RETURN VALUE*/
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) {
    /* YOUR CODE HERE */
    unsigned a = (*x>>n)<<n;
    unsigned b =(*x<<(31-n))>>(31-n);
    // printf("a=%08x, b=%08x\n",a,b);
    unsigned c = a^b;
    *x = c ^ (v<<n);

}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {
    /* YOUR CODE HERE */
    *x = *x ^ (1<<n);

}

