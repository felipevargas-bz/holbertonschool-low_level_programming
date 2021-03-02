#include <stdio.h>
/**
 * _puts -  prints a string, followed by a new line.
 * @str: string in question
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	putchar('\n');
}
