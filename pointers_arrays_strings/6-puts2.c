#include "main.h"
/**
 * puts2 - Print every other character of a string, starting from the first
 * @str: Pointer to the string
 *
 * Description: Printss character at even indices followed by a new line
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}


	_putchar('\n');
}
