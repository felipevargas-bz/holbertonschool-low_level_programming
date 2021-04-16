#include "holberton.h"
/**
 * reverse_array - reverse of content of one array.
 * @a: array to reverse.
 * @n: number of elements.
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp = 0;

	i = (n - 1);

	while (i >= (n / 2))
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
		i--;
	}
}
