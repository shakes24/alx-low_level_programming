#include <stdio.h>

/**
 * main- prints alphabets in reverse
 * Return: 0 always
 */

int main(void)
{
	int m;

	for (m = 'z'; m >= 'a'; m--)
		putchar(m);
	putchar('\n');


	return (0);
}
