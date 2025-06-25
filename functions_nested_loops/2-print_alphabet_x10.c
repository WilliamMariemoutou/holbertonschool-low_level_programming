#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int a;

	while (i < 10)
	{
		a = 97;
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
