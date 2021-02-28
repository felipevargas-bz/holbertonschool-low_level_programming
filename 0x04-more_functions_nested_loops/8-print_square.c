#include "holberton.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: frame size
 */
void print_square(int size)
{
	int c, i;

	for (c = 1; c <= size; c++)
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}
