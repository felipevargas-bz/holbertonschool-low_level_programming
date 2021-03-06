#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an gt of integers.
 * @min: size min.
 * @max:	size max.
 * Return: Pointer.
 */
int *array_range(int min, int max)
{
	int *gt;
	int i;

	if (min > max)
		return (NULL);
	gt = malloc((max - min) * (sizeof(int)) + 1);
	if (gt == NULL)
		return (NULL);
	for (i = min; min <= max; i++, min++)
	{
		gt[i] = min;
	}
	return (gt);
}
