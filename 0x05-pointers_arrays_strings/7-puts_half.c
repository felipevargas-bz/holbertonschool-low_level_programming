#include "holberton.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer.
 */
void puts_half(char *str)
{
	int t = 0, i, n;

	while (str[t] != '\0')
	{
		t++;
	}
	n = (t - 1) / 2;
	if (t % 2 != 0)
	{
		for (i = (n); i < t; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');

	}
	else if (t % 2 == 0)
	{
		for (i = n + 1; i < t; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
