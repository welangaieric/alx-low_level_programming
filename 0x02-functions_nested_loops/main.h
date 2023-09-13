#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
void printPutchar()
{
	printf("_putchar\n");
}
void print_alphabet(void)
{
        char m;

        for (m = 'a'; m <= 'z'; m++)
                putchar(m);
        putchar('\n');
}
#endif
