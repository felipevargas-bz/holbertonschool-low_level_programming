#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 89; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');

		if (i < 90)
		{

			putchar(',');
			putchar(' ');

		}


	}
	putchar('\n');


	return (0);


}
