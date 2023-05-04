#include "main.h"
/**
 * set_bit - setting the value of bit to 1 at a given index
 * @n: pointer
 * @index: value input
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
