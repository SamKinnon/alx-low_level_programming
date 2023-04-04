#include "main.h"

/**
 * _memset - function
 * @s: pointed destination
 * @b: constant
 * @n: bytes to fill
 * Return: always s 
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
