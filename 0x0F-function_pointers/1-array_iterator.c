#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: array.
 * @size: size.
 * @action: pointer to fnction.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int it, t;

	if (array == NULL || action == NULL)
		return;

	t = size;
	for (it = 0; it < t; it++)
		action(array[it]);
}
