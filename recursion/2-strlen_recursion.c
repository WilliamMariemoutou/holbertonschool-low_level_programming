#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 *
 * Description: Uses recursion to count the number of characters
 * until the null terminator is reached.
 *
 * Return: length of the string as an integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1)); /* Count current + rest */
}
