#include "holberton.h"
/**
 * main - prints the minimum number of coins to make.
 * change for an amount of money.
 * @argc: number of parameters.
 * @argv: array of parameters.
 * Return: 0 always.
 */
int main(int argc, char *argv[])
{
	int cents, money = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		money++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", money);

	return (0);
}
