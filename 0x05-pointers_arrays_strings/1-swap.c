#include "main.h"
/**
 * swap_int - check the code
 * @a: swap to b
 * @b: swap to a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
