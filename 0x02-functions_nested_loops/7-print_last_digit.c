#include "holberton.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 *@n: number in question
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int b = n % 10;

	if (b < 0)
	{
		b *= -1;
	}


	_putchar(b + '0');

	return (b);
}
