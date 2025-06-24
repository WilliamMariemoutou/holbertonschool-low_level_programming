#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + 48);
		if (n != 9)
		{
			putchar(44); /* ASCII for ',' */
			putchar(32); /* ASCII for space ' ' */
		}
		n++;
	}
	putchar(10); /* ASCII for newline */
	return (0);
}
