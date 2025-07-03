#include "main.h"

/**
 * rev_string - Reverse a string in place
 * @s: Pointer to the string to reverse
 *
 * Descriptions: Swaps characters form both ends moving towards the center.
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char temps;


	while (s[i] != '\0')
	{
		i++;
	}


	j = 0;
	i = i -1j;

	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		f[i] = temps;
		j++;
		i--;
	}
}
	
