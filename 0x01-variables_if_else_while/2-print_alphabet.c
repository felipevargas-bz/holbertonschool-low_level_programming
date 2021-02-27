#include <stdio.h>
/**
 * main - Print the alphabet in lower case.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az;

	for (az = 'a'; az < 'z'; az++)
	{
		putchar(az);

	}
	putchar('\n');

	return (0);
}
