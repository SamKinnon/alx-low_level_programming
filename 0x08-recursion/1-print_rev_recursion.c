#include "main.h"

/**
 * _print_rev_recursion - function that prints string in reverse
 * @s: String going to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
