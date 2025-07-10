#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: the number to find the factorial of
 *
 * Description: Uses recursion to calculate factorial of a number.
 * If n is less than 0, the function returns -1 as an error.
 * If n is 0, it returns 1 (as 0! is defined as 1).
 *
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0) 
	{
		return (-1);
	}
	if (n == 0) 
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
