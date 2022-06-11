#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
    /* YOUR CODE HERE */
  	unsigned get = (1 << n);
	return (x & get) >> n;
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) {
    /* YOUR CODE HERE */
	unsigned set = (v << n);
	// first set nth bit of the value of x to 0
	unsigned set_0 = (0xffffffff ^ (1 << n));
	*x = (*x & set_0) | set;	
}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {
    /* YOUR CODE HERE */
	unsigned n_bit = get_bit(*x, n);
	unsigned v = (~n_bit & 1);
	set_bit(x, n, v);

}

