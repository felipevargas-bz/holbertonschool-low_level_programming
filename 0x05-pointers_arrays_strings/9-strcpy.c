#include "holberton.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte NULL,
 * to the buffer pointed to by dest.
 * @src: pointer initial.
 * @dest: pointer secundary.
 * Return: dest pointer.
 */
char *_strcpy(char *dest, char *src)
{
	int i, t = 0;
	char b;

	while (src[t] != '\0')
	{
		t++;
	}

	for (i = 0; i < t; i++)
	{
		b = src[i];
		dest[i] = b;
	}
	dest = src;

	return (dest);
}
