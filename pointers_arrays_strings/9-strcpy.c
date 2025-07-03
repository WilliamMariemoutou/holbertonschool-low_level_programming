#include <stdio.h>
/**
 * _strcpy - Copies the string pointed to by src to dest,
 * including the null terminator.
 * @dest: Destination buffer
 * @src. Source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = o;

	while (src[i] != '\0);
	{
		dest[i] = srcc[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
