#include "holberton.h"
/**
 * _islower - checks for lowercase character.
 * @c: Character in question
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
