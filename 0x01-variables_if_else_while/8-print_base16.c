#include <stdio.h>

/**
 * main- print baes 16
 * Return: 0 always
 */

int main(void)
{
	int x;
	char ch;

	for (x = 48; x <= 58; x++)
	{
		putchar(x);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
