#include "main.h"
int real_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - the natural square root of a number
 * @n: number to calculate square root
 * Return: result of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}
/**
 * real_sqrt_recursion - function tp return real sqrt
 * @n: number to calculate square root
 * @i: sqrt number
 * Return: it returns the results
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (real_sqrt_recursion(n, i + 1));
}
