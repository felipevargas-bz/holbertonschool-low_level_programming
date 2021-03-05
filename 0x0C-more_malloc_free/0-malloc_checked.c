#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - llocates memory using malloc.
 * @b: Size of memory
 * Return: ptr.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
