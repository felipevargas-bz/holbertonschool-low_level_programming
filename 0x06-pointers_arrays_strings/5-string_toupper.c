#include "holberton.h"
/**
 * string_toupper - Changes all lowercase letters
 * of a string to uppercase.
 * @str: string.
 * Return: pointer to string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	for (; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}

	return (str);
}
