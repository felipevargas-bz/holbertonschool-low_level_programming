#include "holberton.h"
/**
 * str_concat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: ptr to string concat.
 */
char *str_concat(char *s1, char *s2)
{
	int t = 0, size = 0, i, l = 0;
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	while (s1[t] != '\0')
		t++;

	size = size + t;
	t = 0;

	while (s2[t] != '\0')
		t++;

	size = size + t;
	ptr = malloc(sizeof(char) * size + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (; s2[l] != '\0'; i++)
	{
		ptr[i] = s2[l];
		l++;
	}
	return (ptr);
}
