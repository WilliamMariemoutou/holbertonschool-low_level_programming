#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to the string to be printed
 *
 * Description: Uses recursion to print each character
 * of the string one by one, then prints a newline at the end.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
	{
		_putchar('\n');
		return;
	}

	_putchar(*s); /* Print current character */
	_puts_recursion(s + 1); /* Recursive call to print next character */
}
