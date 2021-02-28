#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("Buzz");
		}

		if (i == 100)
		{
			continue;
		}
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
