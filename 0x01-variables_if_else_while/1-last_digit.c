#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the entry point
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n);
	return (0);
}
