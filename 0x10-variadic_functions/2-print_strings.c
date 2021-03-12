#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separador.
 * @n: number to strins.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list word;

	char *pwd;
	unsigned int i = 0;

	va_start(word, n);

	while (i < n)
	{
		pwd = va_arg(word, char *);

		if (pwd == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", pwd);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	putchar('\n');

	va_end(word);
}
