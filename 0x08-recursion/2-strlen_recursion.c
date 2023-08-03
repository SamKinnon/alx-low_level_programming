#include "main.h"

/**
 * _strlen_recursion - function to print the lenth of a string
 * @s: string which will be tested
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
