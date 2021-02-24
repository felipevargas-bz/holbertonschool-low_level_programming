#include "holberton.h"
/**
 * print_sign - function that prints the sign of a number.
 * 
 *@n: number to check
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	
		_putchar('0');
	return (0);

}
