#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate of str
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL or malloc fails
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];

	copy[len] = '\0';

	return (copy);
}

