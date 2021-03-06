#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
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

	gt = malloc(max - min * (sizeof(int)) + 1);

	if (gt == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
	{
		gt[i] = min++;
	}
	return (gt);
}
