#include "holberton.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string 1.
 * @src: string 2.
 * Return: dest pointer.
 */
char *_strcat(char *dest, char *src)
{
	int t = 0, t2 = 0, i;

	while (dest[t] != '\0')
	{
		t++;
	}
	while (src[t2] != '\0')
	{
		t2++;
	}
	for (i = 0; i < t2; i++, t++)
	{
		dest[t] = src[i];
	}
	return (dest);
}
