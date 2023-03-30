#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: pointer s1.
 * @s2: pointer s2.
 *
 * Return: A pointer to the resulting string dest.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((int)(unsigned char)*s1 - (int)(unsigned char)*s2);
}
