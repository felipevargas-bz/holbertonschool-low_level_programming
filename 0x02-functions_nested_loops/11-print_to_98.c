#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int r;
	if (n > 98)
	{
		for (r = n; r >= 98; r--)
		{
			if (r == 98)
			{
				printf("%d", r);
				continue;
			}
			
			printf("%d, ", r);
		}
		printf("\n");
	}
	else if (n < 98)
	{
		for (r = n; r <= 98; r++)
		{
			if (r == 98)
			{
				printf("%d", r);
				continue;
			}
			printf("%d, ", r);
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	
}