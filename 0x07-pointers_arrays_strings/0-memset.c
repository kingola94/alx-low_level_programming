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
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
