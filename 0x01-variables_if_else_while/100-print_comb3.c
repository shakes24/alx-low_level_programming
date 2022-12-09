#include <stdio.h>

/**
 * main- prints a combination of nums
 * Return: 0 always
 */

int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 56; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (x > y)
			 {
		   		putchar(x);
				putchar(y);
			if (x != 56 || y != 57)
			{
				putchar(',');
				putchar(' ');
			}
	          }
		 }
	}
	putchar('\n');

	return (0);

			
	
}
