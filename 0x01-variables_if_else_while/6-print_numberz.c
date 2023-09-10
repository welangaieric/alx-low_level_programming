#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 * Return: Always 0.
 */
int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
		putchar((m % 10) + '0');
	putchar ('\n');
	return (0);
}
