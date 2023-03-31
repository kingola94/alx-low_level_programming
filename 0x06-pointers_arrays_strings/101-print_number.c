#include "main.h"
/**
 * print_number -  prints an integer
 * @n: number to be printed
 *
 * Return:  void
 */
void print_number(int n)
{
	unsigned int m, count;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}

	count = 1;

	while (m / count > 9)
	{
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + '0');
	}
}
