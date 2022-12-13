#include "main.h"

/**
 * print_alphabet_x10- prints alpha 10 times
 * Return: 0 always
 */

void print_alphabet_x10(void)
{
char x;
int i;

i = 0;

while (i < 10)
	{
	x = 'a';

	while (x <= 'z')
	{
	putchar(x);
	x++;
	}

	_putchar('\n');
i++

}
