#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: the name of the file to open
 * @letters: number of letters to read and print
 * Return: number of letters it could read and print or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num = 0, written, read_b = -1;
	int fd = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);

	read_b = read(fd, buffer, letters);
	num = read_b;
	written = write(STDOUT_FILENO, buffer, num);
	if (written == -1)
		return (0);
	close(fd);
	free(buffer);

	return (num);
}

