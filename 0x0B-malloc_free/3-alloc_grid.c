#include "holberton.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers.
 * @width: width of array.
 * @height: heigth of array.
 * Return: ptr pointer.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (l = 0; l < width; l++)
		{
			ptr[i][l] = 0;
		}
	}

	return (ptr);
}
