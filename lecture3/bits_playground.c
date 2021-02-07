/**
 * File: bits_playground.c
 * Written by Jerry Cain and Lisa Yan
 * ---------------------
 * Here's a program that doesn't nothing at all.  It's designed
 * to be run and stepped through using gdb so you can analyze the
 * state of memory and print values out in hex and in binary.
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
  printf("This program is designed to be stepped through line by line in gdb.\n");
  unsigned char c1 = 'A';
  unsigned short s1 = c1;
  unsigned int i1 = c1;
  
  unsigned int i2 = 0x5fe41;
  unsigned short s2 = i2;
  unsigned char c2 = i2;
  (void) (s1 + i1 + s2 + c2);
  return 0;
}
