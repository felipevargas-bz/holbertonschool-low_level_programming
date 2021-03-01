#include "holberton.h"
/**
 * swap_int - Swap the values ​​of two pointers
 * @a: pointer in question
 * @b: pointer in question
 */
void swap_int(int *a, int *b)
{
	int t = *a;

	*a = *b;

	*b = t;
}
