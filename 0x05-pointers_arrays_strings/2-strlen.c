#include "main.h"
/**
 * _strlen - check code
 * @s: lenght of s
 * Return: 0
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
