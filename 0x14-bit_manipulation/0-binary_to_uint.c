#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int total = 0;
    int len = 0;
    int i;

    if (b == NULL)
        return 0;

    while (b[len])
        len++;

    for (i = 0; i < len; i++) {
        if (b[i] != '0' && b[i] != '1')
            return 0;

        total += (b[i] - '0') * (1 << (len - i - 1));
    }

    return total;
}
