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

	for (i = 0; i <= 23; i++)
	{
		for (a = 0; a <= 59 ; a++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar('\n');

			
		}
	
	}


}
