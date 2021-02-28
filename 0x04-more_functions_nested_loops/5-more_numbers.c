#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 *
 */
void more_numbers(void)
{
	int i, c;

	for (c = 1; c <= 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
