#include <stdio.h>
#include "main.h"
/**
 * _strchr - a function
 * @s: input
 * @c: input
 * Return: NULL or s+i
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
