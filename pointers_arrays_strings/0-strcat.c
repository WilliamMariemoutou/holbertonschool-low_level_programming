#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string; must have enough space to hold the result
 * @src:  Source string to append to @dest
 *
 * Return: Pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* Move i to the end of dest */
	while (dest[i] != '\0')
		i++;

	/* Copy src into dest starting at dest[i] */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Append terminating null byte */
	dest[i] = '\0';

	return (dest);
}
Update main.h
c
Copy
Edit
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_strcat(char *dest, char *src);
/* add any other prototypes below */

#endif /* MAIN_H */
