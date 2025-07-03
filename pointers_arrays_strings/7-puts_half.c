#include "main.h"

/**
 * puts half - Prints the second half of a string
 * @str: Pointer to the string
 *
 * Description: If the string length is odd, the function prints from
 * (length + 1) / 2. Otherwise, it prints from length / .
 */
void puts_half(char *str)
{
	int len = 0;
	int start;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	start = len / 2;

	else

		start = (len + 1) / 2;

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
