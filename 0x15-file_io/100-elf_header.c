#include "main.h"

/**
 * handle_error - handles error
 * @code: exit code
 * @message: error message
 */

void handle_error(int code, const char *message)
{
	dprintf(STDERR_FILENO, message, "");
	exit(code);
}

/**
 * main - read an elf file
 * @ac: argument count
 * @av: array of arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	unsigned int i;
	unsigned char magic[] = {0x7F, 'E', 'L', 'F'};
	int fd;
	char *filename, buffer[62];

	if (ac != 2)
		handle_error(98, "Usage: elf_header elf_filename\n");
	if (av[1] == NULL)
		handle_error(98, "File name is NULL\n");
	filename = av[1];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		handle_error(98, "Can't open file\n");
	if (read(fd, buffer, sizeof(buffer)) == -1)
		handle_error(98, "File can not be read\n");
	if (memcmp(buffer, magic, 4) != 0)
		handle_error(98, "File is not ELF\n");
	for (i = 0; i < sizeof(buffer); i++)
		printf("%02x ", buffer[i]);
	printf("\n");

	if (close(fd) == -1)
		handle_error(98, "Can't close the elf file\n");
	return (0);
}
