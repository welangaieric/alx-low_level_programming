#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase
 * Return: Always 0.
 */
int main(void)
{
	char myChr;

	for (myChr = 'a'; myChr <= 'z'; myChr++)
	{
		if (myChr != 'q' && myChr != 'e')
			putchar(myChr);
	}
	putchar ('\n');
	return (0);
}
