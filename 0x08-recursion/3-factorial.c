#include "main.h"

/**
 * factorial - function to print factorial of any given number
 * @n: input number
 * Return: -1 1 and any factorial of agiven number greater than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
