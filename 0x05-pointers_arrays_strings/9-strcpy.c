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
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';
	dest = src;

	return (dest);
}
