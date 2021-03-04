#include "holberton.h"
/**
 * rev_string -  reverses a string.
 * @s: string in question:
 */
void rev_string(char *s)
{
	int i = 0, iz, der;
	char tmp;

	while (s[i]  != '\0')
	{
		i++;
	}

	for (iz = 0, der = (i - 1); iz < (i / 2); iz ++, der--)
	{
		tmp = s[iz];
		s[iz] = s[der];
		s[der] = tmp;
	}
}
