#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: string.
 * @s2: dtring.
 * @n: num.
 * Return: ptr.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l, i;
	char *ptr;
	unsigned int l1, i1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l = 0; s1[l] != '\0' ; l++)
	{}
	for (l1 = 0; s2[l1] != '\0' ; l1++)
	{}
	if (n >= l1)
	{
		ptr = malloc((l + l1 + 1) * sizeof(char));
		if (ptr == NULL)
		return (NULL);
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (i1 = 0; s2[i1] != '\0'; i1++)
			ptr[i + i1] = s2[i1];
	}
	else
	{
		ptr = malloc((l + n + 1) * sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (i1 = 0; i1 < n; i1++)
			ptr[i + i1] = s2[i1];
	}
	ptr[i + i1] = '\0';
	return (ptr);
}
