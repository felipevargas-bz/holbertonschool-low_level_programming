#include "holberton.h"
/**
 * print_triangle - printf triangle.
 * @size: size.
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		putchar('\n');
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b <= (size - a))
				putchar(' ');
			else
				putchar('#');
		}
		putchar('\n');
	}

}
