#include "main.h"
#include <stddef.h>
/**
 * _strstr -check the code
 * @haystack: source
 * @needle: destination
 * Return: pointer ot NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int j, k;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (k = 0; haystack[k] != '\0'; k++)
	{
		if (haystack[k] == *needle)
		{
			for (j = 1; needle[j] != '\0' && haystack[k+j] == needle[j]; j++);
			if (needle[j] == '\0')
			{
				return (&haystack[k]);
			}
		}
	}
	return (NULL);
}
