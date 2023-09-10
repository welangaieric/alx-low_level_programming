#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase and in reverse
 * Return: Always 0.
 */
int main(void)
{
	char myChr;

	for (myChr = 'z'; myChr >= 'a'; myChr--)
		putchar(myChr);
	putchar ('\n');
	return (0);
}
