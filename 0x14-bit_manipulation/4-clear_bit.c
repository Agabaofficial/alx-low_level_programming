#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	i <<= index;
	*n = (*n & ~i) | ((0 << index) & i);

	return (1);
}
