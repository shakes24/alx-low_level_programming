#include <stdio.h>
#include <stdlib.h>

/**
 * main- converts lowercase to uppercase
 * Return: 0(always zero)
 */

int main(void)
{
	char x;

	for (x = 'a', x <= 'z', x++)
	{	putchar(x);
	}
	putchar('\n');

	return (0);

}
