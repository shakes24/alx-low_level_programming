#include "main.h"

/**
 * _isupper- check for uppercase
 * Return: 0 always
 * @c: the character
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return(0);
	}

}
