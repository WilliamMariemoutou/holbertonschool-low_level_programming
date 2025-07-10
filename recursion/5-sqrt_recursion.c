#include "main.h"

/**
 * _sqrt_helper - helps find the natural square root recursively
 * @n: number to find the square root of
 * @i: current number to test
 *
 * Return: the natural square root, or -1 if not found
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1); /* No natural square root */
	}
	if (i * i == n)
	{
		return (i); /* Found the square root */
	}
	return (_sqrt_helper(n, i + 1)); /* Try next number */
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Negative number can't have real square root */
	}
	return (_sqrt_helper(n, 0)); /* Start checking from 0 */
}
