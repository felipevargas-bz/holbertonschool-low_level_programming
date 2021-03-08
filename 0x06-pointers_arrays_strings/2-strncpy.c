#include "holberton.h"
/**
 * _strncpy - copies a string.
 * @dest: pointer to string copy.
 * @src: pointer to string.
 * @n: size to print.
 * Return: des pointer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int t = 0, i;

	while (src[t] != '\0')
	{
		t++;
	}
	for (i = 0; i <= t && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
