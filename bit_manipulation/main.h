#ifndef MAIN_H
#define MAIN_H

/* Essential libraries */

#include <stdio.h>
#include <stdlib.h>

/* _putchar prototype */

int _putchar(char c);

/* Prototypes of functions */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
