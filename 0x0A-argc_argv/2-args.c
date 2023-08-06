#include "main.h"
#include <stdio.h>

/**
 * main - main fuunction that prints all the  arguments it recieves.
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0 always for success
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
        return (0);
}
