#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - check code
 * @s: bytes
 * @accept: accpts from s
 * Return: number of bytes
 */
char *_strpbrk(char *s, char *accept)
{
	char *k;

	while (*s)
	{
		k = accept;
		while (*k)
		{
			if (*s == *k)
			{
				return (s);
			}
			k++;
		}
		s++;
	}
	return (NULL);
}
