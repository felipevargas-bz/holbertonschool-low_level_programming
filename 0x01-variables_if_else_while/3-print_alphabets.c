#include <stdio.h>
/**
 * main - Print the alphabet in lower case and then in upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az, AZ;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}

	for (AZ = 'A'; AZ <= 'Z'; AZ++)
            {
		    putchar(AZ);

	    }
	putchar('\n');

	return (0);
}
