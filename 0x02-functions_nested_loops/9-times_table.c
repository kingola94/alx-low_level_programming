#include "main.h"
/**
 * times_table - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i = 0, j = 0, p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			if (p < 10)
			{
				_putchar(' ');
				_putchar(p + '0');
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
