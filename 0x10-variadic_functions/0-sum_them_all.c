#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of number to add.
 * Return: result to add.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list parameters;

	unsigned int i, value, add = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(parameters, int);
		add += value;
	}

	va_end(parameters);


	return (add);
}
