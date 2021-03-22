#include "holberton.h"
/**
 * main - print multiplicación of two numbers.
 * @argc: number of parameters.
 * @argv: array of parameters.
 * Return: 0 always.
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc < 3)
	{
		puts("Error");
		return (0);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		res = num1 * num2;

		printf("%d\n", res);
	}
	return (0);
}
