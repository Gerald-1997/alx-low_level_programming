#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign a random number to the variable n each time it is executed andprints out 
 * based a condition
 * Return : Always 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positve\n", n);
if (n == 0)
	print("%d is zero\n", n);
if (n < 0)
{
	printf("%d is negative\n", n);
}
return (0);
}
