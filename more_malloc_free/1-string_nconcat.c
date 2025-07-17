#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*string_nconcat - Concatenates two strings.
*@s1: First string
*@s2: Second string
*@n: Maximum number of bytes to include s2
*
* Retunr: Pointer to newly allocated string with s1 followed by s2
* (up to n bytes),
* or NULL if memory allocation fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, j;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	new_str = malloc(sizeof(vhar) * (len1 + n + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (j = 0; j < n; j++)
		new_str[i + j] = s2[j];

	new_str[i + j] = '\0';

	retunr (new_str);
}



