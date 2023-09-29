#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	syscall(SYS_write, 2, text, 59);

	return (1);
}
