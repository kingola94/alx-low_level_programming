#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number to print the last digit of
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int ldgt;

	ldgt = n % 10;
	if (ldgt < 0)
	{
		ldgt = ldgt * -1;
	}
	_putchar(ldgt + '0');
	return (ldgt);
}
