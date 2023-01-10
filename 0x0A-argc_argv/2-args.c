#include <stdio.h>
/**
 * main - prints all arguments it recieves
 * @argc: number of command lines
 * @argv: an array of command lines
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
