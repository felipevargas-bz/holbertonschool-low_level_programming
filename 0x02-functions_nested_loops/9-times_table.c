#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 *
 */
void times_table(void)
{
	int num, mult, cont;

	for (num = 0; num <= 9; num++)
	{
		for (cont = 0; cont <= 9; cont++)
		{
			mult = num * cont;
			if (mult > 9)
			{
				_putchar((mult / 10) + '0');
			}
			else if (mult <= 9)
			{
				_putchar(' ');
			}
				_putchar((mult % 10) + '0');
				_putchar(',');
				_putchar(' ');
		}
		_putchar('\n');
	}
}
