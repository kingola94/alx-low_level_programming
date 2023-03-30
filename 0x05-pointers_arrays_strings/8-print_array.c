#include "main.h"
#include <stdio.h>
/**
 * print_array - check code
 * @a: pointer a
 * @n: prints n elements of an array of integers
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
