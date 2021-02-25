#include "holberton.h"
/**
 * jack_bauer - function that prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i, a;
	int c, b;

	for (i = 0; i < 3; i++)
	{
		for (a = 0; a < 4; a++)
		{
			for (c = 0; c < 6; c++)
			{
				for (b = 0; b < 10; b++)
				{
					_putchar((i % 10) + '0');
					_putchar((a % 10) + '0');
					_putchar(':');
					_putchar((c % 10) + '0');
					_putchar((b % 10) + '0');
					_putchar('\n');
				}

				if (c > 5)
					continue;
			}

			if (a > 3)
				continue;
		}
	}


}
