#include "main.h"
/**
 *create_file - a function that creates a file.
 *@filename: the file to be created.
 *@text_content: the contecnt to be written.
 *Return: 1 succes otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t fw;
	int i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		fw = write(fd, text_content, i);
		if (fw == -1)
			return (-1);
	}
	return (1);
}


