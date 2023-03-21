#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'prints all possible combinations of single-digit numbers'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, o;

	o = 48;
	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			for (k = j; k < 10; k++)
			{
				if ((j != k && i != j && i != k))
				{
					putchar(i + o);
					putchar(j + o);
					putchar(k + o);
					if (!((i > 6) && (j != 7) && (k > 8)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
