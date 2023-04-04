#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function
 * @a: array
 * @size: input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i, j;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum1 = sum1 + a[i];
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		sum2 = sum2 + a[j];
	printf("%d, %d\n", sum1, sum2);
}
