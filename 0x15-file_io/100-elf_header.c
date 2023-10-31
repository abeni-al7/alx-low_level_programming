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
 * print_elf - prints the elf header
 * @header: header to print
 */

void print_elf(const Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("	Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf(" %02x", header->e_ident[i]);
	printf("\n");
	printf("	Class:	%s\n",
		header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("	Data:	%s\n",
		header->e_ident[EI_DATA] == ELFDATA2LSB ?
		"2's complement, little endian" : "2's complement, big endian");
	printf("	Version:	%d(current)\n",
		header->e_ident[EI_VERSION]);
	printf("	OS/ABI:	%d\n",
		header->e_ident[EI_OSABI]);
	printf("	ABI Version:	%d\n",
		header->e_ident[EI_ABIVERSION]);
	printf("	Type:	%s\n",
		header->e_type == ET_EXEC ? "Advanced Micro Devices X86-64" : "Unknown");
	printf("	Version:	0x%x\n",
		header->e_version);
	printf("	Entry point address:	0x%lx\n",
		header->e_entry);
}

/**
 * main - read an elf file
 * @ac: argument count
 * @av: array of arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	int fd;
	char *filename;
	Elf64_Ehdr buffer;

	if (ac != 2)
		handle_error(98, "Usage: elf_header elf_filename\n");
	if (av[1] == NULL)
		handle_error(98, "File name is NULL\n");
	filename = av[1];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		handle_error(98, "Can't open file\n");
	if (read(fd, &buffer, sizeof(buffer)) == -1)
		handle_error(98, "File can not be read\n");
	if (memcmp(buffer.e_ident, ELFMAG, SELFMAG) != 0)
		handle_error(98, "File is not ELF\n");
	print_elf(&buffer);

	if (close(fd) == -1)
		handle_error(98, "Can't close the elf file\n");
	return (0);
}
