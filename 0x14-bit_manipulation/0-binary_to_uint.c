#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function to return binary to integer
 * @b: input
 * Return: 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i];  i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}
	return (decimal);
}
