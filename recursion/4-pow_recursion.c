/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base integer
 * @y: exponent integer
 *
 * Description: Uses recursion to calculate x raised to the power y.
 * If y is less than 0, returns -1 as an error.
 *
 * Return: result of x^y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

