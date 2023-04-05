#include "main.h"
/**
 * _memset - check code
 * @s: char pointer
 * @b: char destination
 * @n: unsigned int n
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
