#include "main.h"

/**
 * main - copy the contents of a file to another file
 * @ac: argument count
 * @av: array of arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	char buffer[1024];
	ssize_t nb_read, written;
	mode_t permission = 0664;
	mode_t original = umask(0);
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[0]);
		exit(98);
	}

	fd_to = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, permission);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	umask(original);
	while (nb_read != 0)
	{
		nb_read = read(fd_from, buffer, sizeof(buffer));
		if (nb_read == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[0]);
			exit(98);
		}
		written = write(fd_to, buffer, nb_read);
		if (written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}	
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
