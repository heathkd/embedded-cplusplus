#ifndef EMBEDDEDTESTS_WLIB_H
#define EMBEDDEDTESTS_WLIB_H

#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))

// Multiplication by Mersenne primes reduced as bit operations
// for compilers that do not already perform this optimization
#define MUL_31(x)  (((x) << 5) - (x))
#define MUL_127(x) (((x) << 7) - (x))

#define BYTE_SIZE 8
#define INT_SIZE (BYTE_SIZE * sizeof(uint32_t))

#endif //EMBEDDEDTESTS_WLIB_H
