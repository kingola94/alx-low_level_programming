#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strchr - check code
 * @s: pointer s
 * @c: pointer c
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] == c)
		{
			return (&s[k]);
		}
	}
	if (c == '\0')
	{
		return (&s[strlen(s)]);
	}
	return (NULL);
}
