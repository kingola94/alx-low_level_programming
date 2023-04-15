#include "main.h"
#include <stdlib.h>

/**
 * array_range - check the code
 * @min: the minimum value in the array
 * @max: the maximum value in the array
 *
 * Return: a pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	arr = malloc(len * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min++;
	return (arr);
}

