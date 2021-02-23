#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase.
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
