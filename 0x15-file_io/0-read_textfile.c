#include "main.h"
/**
 *read_textfile -  a function that reads a text file and prints
 *it to the POSIX standard output.
 *@filename: file to read from.
 *@letters: number of letters to read from the file.
 *Return: number of letters it could read and print otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nread = 0;
	char *buffer = NULL;
	int fd = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	nread = read(fd, buffer, letters);
	if (nread == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	buffer[nread] = '\0';
	if (write(STDOUT_FILENO, buffer, nread) == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (nread);
}

