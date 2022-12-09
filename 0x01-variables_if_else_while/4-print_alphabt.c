#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints alphabets except q and e
 * Return:0 (always zero)
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
		if (x != 'q' && x != 'e')
			putchar(x);
	x++;

	putchar('\n');


	return (0);
}
