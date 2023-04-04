#include "main.h"

/**
 * _memcpy - a function
 * @n: bytes
 * @src: a pointer
 * @dest: a pointer
 * Return: always s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
