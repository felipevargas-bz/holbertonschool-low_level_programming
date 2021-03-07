#include "holberton.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by
 * a new line.
 * @str: string in question
 */
void puts2(char *str)
{
	int t = 0, i;

	while (str[t] != '\0')
	{
		t++;
	}
	for (i = 0; i < t; i += 2)
	{
		_putchar(str[i]);
	}

		_putchar('\n');
}
