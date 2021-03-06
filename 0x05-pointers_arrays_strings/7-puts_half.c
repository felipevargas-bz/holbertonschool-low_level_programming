#include "holberton.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer.
 */
void puts_half(char *str)
{
	int t = 0, i;

	while (str[t] != '\0')
	{
		t++;
	}

	for (i = (t / 2); i <= t; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
