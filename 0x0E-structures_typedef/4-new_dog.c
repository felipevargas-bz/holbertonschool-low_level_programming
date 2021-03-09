#include "dog.h"
#include <stdlib.h>
/**
 * _strcopy - copy a string.
 * @dest: string of destine.
 * @src: string initial.
 * Return: dest pointer.
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog.
 * @name: name.
 * @age: age.
 * @owner: owner.
 * Return: ptr pointer to memory.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int tname = 0, towner = 0;
	dog_t *ptr;

	while (name[tname] != '\0')
	{
		tname++;
	}
	while (owner[towner] != '\0')
	{
		towner++;
	}
	if (name == NULL || age	< 0 || owner == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->name = malloc(sizeof(char) * (tname + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (towner + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->name = _strcopy(ptr->name, name);
	ptr->age = age;
	ptr->owner = _strcopy(ptr->owner, owner);

	return (ptr);
}
