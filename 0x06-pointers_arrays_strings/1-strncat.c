#include "holberton.h"
/**
 * _strncat - concatenates two strings.
 * @dest: string 1.
 * @src: string 2.
 * @n: max bytes.
 * Return: dest pointer.
 */
char *_strncat(char *dest, char *src, int n)
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
	for (i = 0; i < n && i < t2; i++, t++)
	{
		dest[t] = src[i];
	}
	return (dest);
}
