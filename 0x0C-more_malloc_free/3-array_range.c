#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an gt of integers.
 * @min: size min.
 * @max: size max.
 * Return: Pointer.
 */
int *array_range(int min, int max)
{
	int *gt;
	int i, t;

	t = max - min + 1;
	if (min > max)
		return (NULL);
	gt = malloc(t * (sizeof(int)));
	if (gt == NULL)
		return (NULL);
	for (i = 0; i <= t; i++)
	{
		gt[i] = min++;
	}
	return (gt);
}
