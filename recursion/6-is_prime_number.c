/**
 * check_prime - helper function to check if n is divisible
 * @n: number to check
 * @i: current divisor being tested
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1); /* No divisors found, it's prime */
	}
	if (n % i == 0)
	{
		return (0); /* Found a divisor, not prime */
	}
	return (check_prime(n, i + 1)); /* Try next possible divisor */
}

/**
 * is_prime_number - returns 1 if n is a prime number, otherwise 0
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); /* 0 and 1 are not prime */
	}
	return (check_prime(n, 2)); /* Start checking from 2 */
}
