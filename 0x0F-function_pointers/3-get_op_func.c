#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - funtions asigna sir.
 * @s: signed.
 * Return: asigned funtion to operation.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t operat[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{'\0', NULL}};

	int i;

	i = 0;
	while (operat[i].op != NULL)
	{
		if (strcmp(s, operat[i].op) == 0)
		{
			return (operat[i].f);
		}
		i++;
	}
	return (NULL);
}
