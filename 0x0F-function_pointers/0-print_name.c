#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name.
 * @name: pointer to name to print.
 * @f: pointer to function to print name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}

	(*f)(name);
}
