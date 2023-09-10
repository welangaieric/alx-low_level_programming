#include <stdio.h>

/**
 * main - prints all possible combinations of two digits.
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 9; n++)
	{
		for(m = n + 1; m < 10; m++)
		{
			putchar((n % 10) + '0');
			putchar((m % 10) + '0');
			if (n == 8 && m == 9)
				continue;
			putchar(',');
			putchar(' ');  
		}
	}
	putchar('\n');
	return (0);
}
