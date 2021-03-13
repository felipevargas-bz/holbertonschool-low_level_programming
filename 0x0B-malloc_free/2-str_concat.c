#include "holberton.h"
/**
 * str_concat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: ptr to string concat.
 */
char *str_concat(char *s1, char *s2)
{
	int t = 0, size = 0, i;
	char *ptr = NULL;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		while (s1[t] != '\0')
			t++;
	}
	size = size + t;
	t = 0;
	if (s2 != NULL)
	{
		while (s2[t] != '\0')
			t++;
	}

	size = size + t;
	ptr = malloc(sizeof(char) * size + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	t = 0;
	for (; s2[t] != '\0'; i++)
	{
		ptr[i] = s2[t];
		t++;
	}
	return (ptr);
}
