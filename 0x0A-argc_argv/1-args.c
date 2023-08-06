#include "main.h"
#include <stdio.h>

/**
 * main - main fuunction that prints the number of arguments passed
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0 always for success
 */

int main(int argc, char *argv[])
{
	(void)argv; /*to ignore the argv*/
	printf("%d\n", argc - 1);
	return (0);
}
