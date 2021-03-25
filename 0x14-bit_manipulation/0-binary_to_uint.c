#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to string.
 * Return: unsigned int bit.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int size = 1;
	unsigned int i = 0;
	unsigned int pot = 1;
	unsigned int bit = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b == '1' || *b == '0')
		{
			b++;
			size++;
		}
		else
		{
			return (0);
		}
	}
	b--;
	while (size != i)
	{
		if (*b == '1')
		{
			bit += pot;
			b--;
			size--;
		}
		else
		{
			b--;
			size--;
		}
		pot *= 2;
	}
	return (bit);
}
