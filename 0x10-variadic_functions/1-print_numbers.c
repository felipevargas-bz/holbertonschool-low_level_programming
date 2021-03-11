#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: pointer to string separator.
 * @n: number of elements to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list parameters;

	unsigned int i;

	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(parameters, int));

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(parameters);
}
