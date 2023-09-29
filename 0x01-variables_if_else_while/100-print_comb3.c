#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int num1 = 0;
	int num2 = 1;

	while (num1 < 9)
	{
		while (num2 < 10)
		{
			if (num1 < num2)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				if ((num1 == 8) && (num2 == 9))
					break;
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
		num2 = 1;
	}
	putchar('\n');

	return (0);
}
