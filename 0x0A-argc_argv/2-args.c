#include "holberton.h"
/**
 * main - print number of parameters sin the name.
 * @argc: number of parameters.
 * @argv: array of parameters.
 * Return: 0 always.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		puts(argv[i]);
		i++;
	}
	return (0);
}
