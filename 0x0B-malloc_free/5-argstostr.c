#include "holberton.h"
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: integer.
 * @av: character.
 * Return: ptr pointer.
 */
char *argstostr(int ac, char **av)
{
	char *ptr = NULL;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			size++;
		}
	}
	ptr = malloc(sizeof(char) * size + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			ptr[index++] = av[arg][byte];
		}

		ptr[index++] = '\n';
	}
	ptr[size] = '\0';

	return (ptr);
}
