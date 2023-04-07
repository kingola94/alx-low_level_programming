#include "main.h"
/**
 * _pow_recursion - check code
 * @x: x integer
 * @y: y integer
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	int w;

	w = y - 1;
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, w));
	}
}
