#include "main.h"

/**
 * _memset - function
 * Return: Always s
 * @s: pointed destination
 * @b: constant
 * @n: bytes to fill
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
