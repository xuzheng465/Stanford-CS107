/* CS107 Lecture 3
 * Nick Troccoli
 * --------
 * This program demonstrates how to implement absolute value using
 * bitwise operators.  This program can be run with 1 command-line argument,
 * in which case it prints out the absolute value of that argument, 
 * or no command-line arguments, in which case it runs some
 * tests on the implementation.
 *
 * Reminders:
 * -- Right shift on signed integers fills with copies of the sign bit
 * -- Signed and unsigned integers use different comparison operations
 * -- Other than that, most operations behave the same way (e.g. addition, subtraction)
 */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// The maximum value to test with for absolute value
#define TEST_MAX 10

/* Original verson of absolute value using conditionals and multiplication */
int absolute_value(int value) {
    return (value < 0) ? -value : value;
}

/* Bitwise version of absolute value with no conditionals or multiplication */
int absolute_value_bitwise(int value) {
    int sign = value >> (sizeof(int) * CHAR_BIT - 1);
    /*
     * When value is:
     * Nonnegative, value has 0 in MSB (sign bit), sign is all 0s (0)
     * Negative, value has 1 in MSB, sign is all 1s (-1)
     */

    return (value ^ sign) - sign;
    /* 
     * When val is nonnegative:
     * -- sign is 0. XOR with 0 keeps the same value (i.e. 1 ^ 0 == 1, 0 ^ 0 == 0)
     * -- (value ^ sign) == value. value - sign = value - 0 = value
     *
     * When value is negative:
     * -- sign bit pattern is all 1s. XOR with 1 flips bit (i.e. 0 ^ 1 == 1, 1 ^ 1 == 0)
     * -- (value ^ sign) == ~value
     * -- sign has numeric value of -1. y - sign == y + 1
     * -- (value ^ sign) - sign = ~value - sign = ~value + 1, which is the two's complement formula for -val
     */
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        // Calculate the absolute value of various numbers
        for (int i = 1; i <= TEST_MAX; i++) {
            printf("|%d| = %d\n", i, absolute_value(i));
            printf("|%d| = %d\n", -i, absolute_value(-i));
        }
    } else {
        // Calculate the absolute value of the provided number
        int value = atoi(argv[1]);
        printf("|%d| = %d\n", value, absolute_value(value));
    }
    
    return 0;
}

