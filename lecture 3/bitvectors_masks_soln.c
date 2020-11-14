/* CS107 Lecture 3
 * Nick Troccoli
 * ------
 * This program provides practice with bitwise
 * operators and bitmasks via a bitwise representation
 * of what classes we have taken.
 */

#include <stdio.h>

// Bit representations of the different courses
#define CS106A 0x1       /* 0000 0001 */
#define CS106B 0x2       /* 0000 0010 */
#define CS106X 0x4       /* 0000 0100 */
#define CS107  0x8       /* 0000 1000 */
#define CS110  0x10      /* 0001 0000 */
#define CS103  0x20      /* 0010 0000 */
#define CS109  0x40      /* 0100 0000 */
#define CS161  0x80      /* 1000 0000 */


int main(int argc, char *argv[])
{
    /* Bit pattern: 0000 1011 */
    unsigned char courses = CS106A | CS106B | CS107;

    /* Set a bit: add CS103 to courses (will now be 0010 1011) */
    courses |= CS103;

    /* Clear a bit: remove CS106A from courses (will now be 0010 1010) */
    courses &= ~CS106A;

    /* Challenge: how can we check if they took 107 OR 110? 107 AND 110? */

    /* Solution: */

    /* Define a mask, a bit pattern we can use to test against courses */
    unsigned char mask = CS107 | CS110; /* 0001 1000 */

    /* Test if courses contains either CS107 or CS110 (or both) */
    if (courses & mask) {
        printf("They took at least one of CS107 or CS110\n");
    }

    /* Test if courses contains both CS107 and CS110 */
    if ((courses & mask) == mask) {
        printf("They took both CS107 and CS110\n");
    }
    
    return 0;
}
