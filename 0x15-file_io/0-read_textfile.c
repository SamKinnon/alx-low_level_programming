#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function to return read text
 * @filename: file name
 * @letters: letters
 * Return: j and 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j;
	ssize_t *buffer;
	ssize_t fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	i = read(fd, buffer, letters);
	j = write(STDOUT_FILENO, buffer, i);
	free(buffer);
	close(fd);
	return (j);
}
