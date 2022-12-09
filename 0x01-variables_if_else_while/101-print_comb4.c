#include <stdio.h>

/**
 * main- prints the combination of 3 numbers
 * Return: always 0
 */

int main(void)
{
	int m, n, q;

	for (m = 10; m <= 20; m++);
	{
	  for (n =11; n <= 21; n++);
	 {
	   for (q = 12; q <= 22; q++);
	   {
	     if (q > n && n > m)
		{
			putchar(m);
			putchar(n);
			putchar(q);
		}
		  if (m != 20 || n!= 21 )
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
