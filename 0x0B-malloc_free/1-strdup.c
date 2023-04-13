#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: pointer to new string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *stx;
	unsigned int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	stx = malloc((len + 1) * sizeof(char));
	if (stx == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		stx[i] = str[i];
	}
	return (stx);
}
