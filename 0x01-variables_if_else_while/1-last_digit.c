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

	printf("%d\n", a);
	return (0);

}
