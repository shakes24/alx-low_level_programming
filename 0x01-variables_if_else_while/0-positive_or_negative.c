#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main- tells wether a num is positive or negative
 * Return: 0 (always zero)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
