#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assigns a random value to n.
 * and then prints if it is positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is zero\n",n);
	}
	return (0);
	
}
