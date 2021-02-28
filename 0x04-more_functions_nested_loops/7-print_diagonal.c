#include "holberton.h"
/**
 * print_diagonal - prints a square, followed by a new line.
 * @n: number of times to print
 */
void print_diagonal(int n)
{
	int i, c;

	for (i = 1; i <= n; i++)
	{
		for (c = 1; c < i; c++)
		{
			_putchar(' ');
		}
		if (n > 0)
		{
			_putchar(92);
			_putchar('\n');
		}
	}
	if  (n < 1)
	{
		_putchar('\n');
	}
}
