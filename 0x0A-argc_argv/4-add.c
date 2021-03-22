#include "holberton.h"

int dig(char *n);
/**
 * main - add integers.
 * @argc: number of parameters.
 * @argv: array of parameters.
 * Return: 0 always.
 */
int main(int argc, char *argv[])
{
	int sum, i = 1;

	if (argc == 1)
	{
		putchar(48);
		putchar('\n');
		return (0);
	}

	while (i < argc)
	{
		if (dig(argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			puts("Error");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
/**
 * dig - check the code for Holberton School students.
 * @n: str
 * Return: 0, 1, Error.
 */
int dig(char *n)
{
	int a = 0;

	while (n[a] != '\0')
	{
		if (isdigit(n[a]))
		{
			a++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
