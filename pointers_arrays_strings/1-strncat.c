#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: Destination string; must have enough space
 * @src: Source string to append
 * @n: Maximum number of bytes to use from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
		i++;

	/* Append at most n characters from src */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Null terminate the resulting string */
	dest[i] = '\0';

	return (dest);
}
