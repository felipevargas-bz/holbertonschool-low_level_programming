#include "holberton.h"
/**
 * _isupper - checks for uppercase character.
 *
 * @c: Letter in question
 * Return: 1 if it is uppercase and 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
