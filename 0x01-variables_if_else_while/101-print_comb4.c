#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int num1 = 0;
	int num2 = 1;
	int num3 = 2;

	while (num1 < 8)
	{
		while (num2 < 9)
		{
			while (num3 < 10)
			{
				if ((num1 < num2) && (num2 < num3))
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(num3 + '0');
					if ((num1 == 7) && (num2 == 8) && (num3 == 9))
						break;
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num3 = 2;
			num2++;
		}
		num2 = 1;
		num1++;
	}
	putchar('\n');

	return (0);
}
