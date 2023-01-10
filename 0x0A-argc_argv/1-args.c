#include <stdio.h>
/**
 * main - prints the number of arguments passed into the function
 * @argc: takes the number of command lines of argument
 * @argv: is an array that contains the command lines
 * Return: 0 always
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
