#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts the number of bits to flip to get from n to m
 * @n: first number
 * @m: second number to convert to
 *
 * Return: number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
