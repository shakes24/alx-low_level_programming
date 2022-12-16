#include "main.h"

/**
 * _isdigit - checks from 1 to 9
 * @c: int to be checked
 * Return: 1 if from 1 to 9 ,else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
