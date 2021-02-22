#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print last digit of n variable
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, a;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	a = n % 10;

	if (a > 5)
	{
		printf("Last digit of %d", n);
	printf(" is %d", a);
	printf(" and is greater than 5\n");

	}
	else if (a < 6 && a != 0)
	{
		printf("Last digit of %d", n);
	printf(" is %d", a);
	printf(" and is less than 6 and not 0\n");

	}
	else
	{	printf("Last digit of %d", n);
	printf(" is %d", a);
	printf(" and is 0\n");

	}
	return (0);

}
