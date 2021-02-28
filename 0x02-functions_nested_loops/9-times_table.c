#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 *
 */
void times_table(void)
{
	int num, mult, res;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			res = num * mult;
			if (res > 9)
			{
				_putchar((res / 10) + '0');
			}
			else if (mult <= 9 && mult != 0)
			{
				_putchar(' ');
			}
			_putchar((res % 10) + '0');
			if (mult < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
