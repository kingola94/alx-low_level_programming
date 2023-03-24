#include "main.h"
/**
 * print_number - check code
 * @n: print integer
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		n *= -1;
		i = n;
		_putchar('-');
	}
	i /= 10;
	if (i != 0)
	{
		print_number(i);
	}
	_putchar((unsigned int) n % 10 + '0');
}
