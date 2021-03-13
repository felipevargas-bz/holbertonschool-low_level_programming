#include "holberton.h"
/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: string.
 * Return: ptr pointer to memory.
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	int t = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[t] != '\0')
	{
		t++;
	}
	ptr = malloc(sizeof(char) * t + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= t; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
