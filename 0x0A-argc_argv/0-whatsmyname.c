#include "main.h"
#include <stdio.h>

/**
 * main - main fuunction that prints the name of a program
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0 always for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
