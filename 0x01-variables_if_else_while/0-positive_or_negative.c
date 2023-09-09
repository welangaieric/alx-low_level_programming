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
        if (n > 5){
                printf("Last digit of %d" + n + "and is greater than 5\n");
        }
        else if (n){

        }
        return (0);
}
