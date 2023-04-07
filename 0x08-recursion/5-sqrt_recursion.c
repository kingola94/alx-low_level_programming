#include "main.h"
/**
 * _sqrt_recursion - check the code
 * @n: natural square root
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt(n, 1, n));
	}
}
/**
 * _sqrt - check code
 * @n: int n
 * @a: int a
 * @b: int b
 * Return: 0
 */
int _sqrt(int n, int a, int b)
{
	int norm;

	if (a > b)
	{
		return (-1);
	}
	norm = (a + b) / 2;
	if (norm * norm == n)
	{
		return (norm);
	}
	else if (norm * norm > n)
	{
		return (_sqrt(n, a, norm - 1));
	}
	else
	{
		return (_sqrt(n, norm + 1, b));
	}
}
