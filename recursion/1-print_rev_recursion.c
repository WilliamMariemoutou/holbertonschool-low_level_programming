#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: pointer to the string to be printed
 *
 * Description: This function uses recursion to go to the end of
 * the string first, and then prints characters in reverse order.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
	{
		return;
	}

	_print_rev_recursion(s + 1); /* Go deeper until the end */
	_putchar(*s); /* Print on the way back */
}
