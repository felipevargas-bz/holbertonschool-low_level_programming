#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @s: String in question.
 * Return: i.
 */
int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
s++;
i++;
}
return (i);
}
