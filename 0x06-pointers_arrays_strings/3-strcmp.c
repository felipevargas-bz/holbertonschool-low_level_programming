#include "holberton.h"
/**
 * _strcmp - compare two strings.
 * @s1: string number one.
 * @s2: string number two.
 * Return: int mayor menor o igual.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] && s2[j] && s1[i] == s2[j])
	{
		i++;
		j++;
	}

	return (s1[i] - s2[j]);
}
