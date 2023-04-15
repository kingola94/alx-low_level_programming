#include "main.h"
#include <stdlib.h>

/**
 * _calloc - check the code
 * @nmemb: the number of elements in the array
 * @size: the size of each element in bytes
 *
 * Return: a pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	ptr = mem;
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (mem);
}
