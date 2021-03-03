#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: String in question
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	s = s - 1;
	while (i >= 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar('\n');
}
