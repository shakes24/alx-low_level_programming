#include <stdio.h>
#include <stdlib.h>

/**
 * main- print lowercase and uppercase
 * Return: 0(always zero)
 */

int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
		putchar(y);
	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);

	putchar('\n');


	return (0);
}
