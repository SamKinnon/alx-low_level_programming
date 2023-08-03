#include "main.h"

int check_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if  string is a palindrome
 * @s: string to be reversed
 *
 * Return: returns 1 when it pal , 0 it's not pal
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	else
		return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function to returns the length of a string
 * @s: string used to calculate the length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	else if (i >= len)
		return (1);
	else
		return (check_palindrome(s, i + 1, len - 1));
}
