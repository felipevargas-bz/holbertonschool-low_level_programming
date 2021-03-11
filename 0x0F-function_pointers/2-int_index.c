#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array.
 * @size: size.
 * @cmp: pointer to function.
 * Return: -1 si es menor a cero, return it si cmp(rray[it]!=0 it,)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int it;

	if ((array != NULL) && (cmp != NULL))
	{
		for (it = 0; it < size; it++)
		{
			if (cmp(array[it]) != 0)
			{
				return (it);
			}
		}
	}
	else if (size <= 0)
	{
		return (-1);
	}
	return (-1);
}
