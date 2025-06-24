#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 48; /* ASCII for '0' */

	while (digit <= 57) /* '0' to '9' */
	{
		putchar(digit);
		digit++;
	}

	digit = 97; /* ASCII for 'a' */
	while (digit <= 102) /* 'a' to 'f' */
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');
	return (0);
}

