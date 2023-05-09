#include "main.h"
/**
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openfile, writefile, len = 0;

	if (filename == NULL)
		return (0);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	openfile = open(filename, O-WRONLY | O-APPEND);
	writefile = write(openfile, text_content, len);
	if (openfile == -1 || writefile == -1)
		return (-1);
	close(openfile);
	return (1);
