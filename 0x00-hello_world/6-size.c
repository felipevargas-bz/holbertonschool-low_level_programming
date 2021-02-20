#include <stdio.h>
/**
 * main - print size char,int,long int,long long int,fload
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	puts("Size of a char: %zu byte(s)\n", sizeof(char));


	puts("Size of a int: %zu byte(s)\n", sizeof(int));


	puts("Size of a long int: %zu byte(s)\n", sizeof(long int));


	puts("Size of a long long int: %zu byte(s)\n", sizeof(long long int));


	puts("Size of a float: %zu byte(s)\n", sizeof(float));


	return (0);
}
