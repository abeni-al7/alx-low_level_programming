#include "main.h"

/**
 * handle_error - handles error
 * @error_code: error code
 * @error_message: error message
 */

void handle_error(int error_code, const char *error_message)
{
	fprintf(stderr, "Error %d: %s\n", error_code, error_message);
	exit(98);
}

/**
 * print_elf_header - print the elf header
 * @header: header
 */

void print_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf("Class: %s\n",
		header->e_ident[EI_CLASS] == ELFCLASS32 ?
		"ELF32" : (header->e_ident[EI_CLASS] == ELFCLASS64 ?
		"ELF64" : "Unknown"));
	printf("Data: %s\n",
	header->e_ident[EI_DATA] == ELFDATA2LSB ?
	"2's complement, little endian" : (header->e_ident[EI_DATA] == ELFDATA2MSB ?
	"2's complement, big endian" : "Unknown"));
	printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header->e_type);
	printf("Entry point address: %lx\n", header->e_entry);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *filename = argv[1];
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		handle_error(98, "Usage: elf_header elf_filename");
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		handle_error(98, "Can't open file");
	if (read(fd, &header, sizeof(header)) == -1)
		handle_error(98, "File can not be read");
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
		handle_error(98, "File is not an ELF file");
	print_elf_header(&header);
	if (close(fd) == -1)
		handle_error(98, "Can't close the file");
	return (0);
}
