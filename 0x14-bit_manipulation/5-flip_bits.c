#include "holberton.h"
#include <stdio.h>

/**
 * flip_bits -Returns number of bits to flip to get from one num to another.
 * to get from one number to another.
 * @n: First number;
 * @m: second number.;
 * Return:number of buts needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned  int i = 0;

	num = n ^ m;
	while (num > 0)
	{
		if ((num & 1) != 0)
			i++;
		num = num >> 1;
	}
	return (i);
}
