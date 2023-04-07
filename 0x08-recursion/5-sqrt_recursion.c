#include "main.h"
/**
 * _sqrt_recursion - check the code
 * @n: natural square root
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - check code
 * @n: int n
 * @a: int a
 * Return: 0
 */
int _sqrt(int n, int a)
{
	int norm = a * a;

	if (norm > n)
	{
		return (-1);
	}
	else if (norm == n)
	{
		return (a);
	}
	else
	{
		return (_sqrt(n, a + 1));
	}
}
