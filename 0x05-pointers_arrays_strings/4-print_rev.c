#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: String in question
 */
void print_rev(char *s)
{
		int cont = 0, it = 0;

	while (s[it++])
	{
		cont++;
	}

	for (it = cont - 1; it >= 0; it--)
	{
		_putchar(s[it]);
	}
	_putchar('\n');
}
