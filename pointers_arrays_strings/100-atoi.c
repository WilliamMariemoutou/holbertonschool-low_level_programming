#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer converted from the string, or 0 if none found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			result = result * 10 - (s[i] - '0'); /* Store as negative */
		}
		else if (started)
		{
			break;
		}
		i++;
	}

	if (sign == -1)
		return (result);
	else
		return (-result); /* Negating negative result gives positive */
}
