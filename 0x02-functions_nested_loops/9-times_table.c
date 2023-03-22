#include "main.h"
/**
 * times_table - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i = 0, j = 0, p = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			p = i * j;
			if (j == 0)
			{
				_putchar(p + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
