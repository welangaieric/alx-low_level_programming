#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase then in uppercase
 * Return: Always 0.
 */
int main(void)
{
	char myChr;

	for (myChr = 'a'; myChr <= 'z'; myChr++)
		putchar(myChr);
	for (myChr = 'A'; myChr <= 'Z'; myChr++)
		putchar(myChr);
	putchar ('\n');
	return (0);
}
