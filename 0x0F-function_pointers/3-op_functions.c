#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - sum.
 * @a: first integer.
 * @b: secund integer.
 * Return: sum a y b.
 */
int op_add(int a, int b)
{
	int sum;

	sum = (a + b);

	return (sum);
}
/**
 * op_sub - sub.
 * @a: first integer.
 * @b: secund integer.
 * Return: sub a y b.
 */
int op_sub(int a, int b)
{
	int rest;

	rest = (a - b);

	return (rest);
}
/**
 * op_mul - mul.
 * @a: first integer.
 * @b: secund integer.
 * Return: mul a y b.
 */
int op_mul(int a, int b)
{
	int mul;

	mul = (a * b);

	return (mul);
}
/**
 * op_div - div.
 * @a: first integer.
 * @b: secund integer.
 * Return: div a y b.
 */
int op_div(int a, int b)
{
	int div;

	div = (a / b);

	return (div);
}
/**
 * op_mod - mod.
 * @a: first integer.
 * @b: secund integer.
 * Return: mod a y b.
 */
int op_mod(int a, int b)
{
	int mod;

	mod = (a % b);

	return (mod);
}
