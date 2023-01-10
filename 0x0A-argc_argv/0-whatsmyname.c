#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: number of command line arguments
 * @argv: array of command lines
 * Return: 0 always
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
