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
	int i, t;

	if (min > max)
		return (NULL);

	t = max - min + 1;

	gt = malloc(sizeof(int) * t);

	if (gt == NULL)
		return (NULL);

	for (i = 0; i < t; i++)
		gt[i] = min++;

	return (gt);
}
