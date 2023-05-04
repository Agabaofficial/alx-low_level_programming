#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1;
    int bit_count = 0;

    while ((mask << 1) <= n)
    {
        mask = (mask << 1) | 1;
        bit_count++;
    }

    while (bit_count >= 0)
    {
        if ((n & (1 << bit_count)) == 0)
        {
            _putchar('0');
        }
        else
        {
            _putchar('1');
        }

        bit_count--;
    }
}
