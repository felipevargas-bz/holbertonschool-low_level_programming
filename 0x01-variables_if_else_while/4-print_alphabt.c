#include <stdio.h>
/**
 * main - Print the alphabet except the letters (q) and (e)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);

	}

	putchar('\n');

	return (0);
}
