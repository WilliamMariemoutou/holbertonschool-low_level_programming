#include "main.h"
/**
 *  _strlen - Returns the length of a string
 *  @s: Pointer to a string
 *
 *  Return: Length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

