#include "holberton.h"
/**
 * main - print number of parameters sin the name.
 * @argc: number of parameters.
 * @argv: array of parameters.
 * Return: 0 always.
 */
int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
