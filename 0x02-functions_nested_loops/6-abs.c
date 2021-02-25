#include "holberton.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @n: Value
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (-n);
}
