#include "main.h"
/**
 * is_prime_number - check code
 * @n: prime number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int pr = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, pr));
}

/**
 * _prime - check code
 * @pr: divider
 * @n: denom
 * Return: _prime
 */
int _prime(int n, int pr)
{
	if (pr <= 1)
	{
		return (1);
	}
	else if (n % pr == 0)
	{
		return (0);
	}
	return (_prime(n, pr - 1));
}
