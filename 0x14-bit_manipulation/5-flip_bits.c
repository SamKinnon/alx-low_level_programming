#include "main.h"
/**
 * flip_bits - the number of bits  flipped to get from one number to another
 * @n: input one
 * @m: input two
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int now;
	unsigned long int j = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		now = j >> i;
		if (now & 1)
			count++;
	}
	return (count);
}


