#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Description: Header file containing prototypes of all functions
 *              written in 0x14 bit manipulation directory
 */

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
