#include <stdio.h>

/**
 * main - prints all possible combinations of two digits.
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int m;
	int j;

	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			for (j = m + 1; j < 10; j++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((j % 10) + '0');
				if (n == 7 && m == 8 && j == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
