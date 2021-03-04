#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @s: string in question
 */
void rev_string(char *s)
{
	int i = _strlen(s);
	char tmp;

	for (int iz = 0, der = (i - 1); iz < (i / 2); iz++, der--)
	{
		tmp = s[iz];
		s[iz] = s[der];
		s[der] = tmp;

	}
}
/**
 * _strlen - returns the length of a string.
 * @str: string in question.
 * Return: i.
 */
int _strlen(char *str)
{
int i = 0;
while (*s != '\0')
{
s++;
i++;
}
return (i);
}
