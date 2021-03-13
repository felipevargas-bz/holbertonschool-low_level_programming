#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - This file should contain your
 * main function only.
 * @argc: size to params.
 * @argv: params.
 * Return: 0 always.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int back;
	int (*ptf)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	ptf = get_op_func(argv[2]);
	/*make a polize for pointer*/
	if (ptf == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	back = ptf(a, b);
	printf("%d\n", back);
	return (0);
}
