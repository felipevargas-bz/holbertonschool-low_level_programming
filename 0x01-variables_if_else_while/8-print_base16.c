#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, af;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (af = 'a'; af <= 'f'; af++)
	{
		putchar(af);
	}
	putchar('\n');

	return (0);
}
