#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	mode_t permission = 0600;
	mode_t original = umask(0);
	ssize_t written;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permission);
	if (fd == -1)
		return (-1);
	umask(original);
	if (text_content != NULL)
	{
		written = write(fd, text_content, sizeof(text_content));
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
