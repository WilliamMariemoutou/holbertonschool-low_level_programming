#include "main.h"

/**
 * _strncpy - copies at most n characters from src to dest
 * @dest: destination string buffer
 * @src: source string
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i

	for (i = 0; i < && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	returb (dest);
}
