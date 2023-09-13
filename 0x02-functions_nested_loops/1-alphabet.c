#include "main.h"
/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
		putchar(m);
	putchar('\n');
}
int main(void)
{
    print_alphabet();
    return (0);
}
