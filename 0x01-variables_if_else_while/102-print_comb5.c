#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int num1 = 0;
	int num2 = 1;

	while (num1 < 99)
	{
		while (num2 < 100)
		{
			if (num1 < num2)
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');
				if ((num1 == 98) && (num2 == 99))
					break;
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num2 = 1;
		num1++;
	}
	putchar('\n');

	return (0);
}

