#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes of s2 to concatenate
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	concat = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];
	for (j = 0; j < n && s2[j]; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';

	return (concat);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of s
 */
unsigned int _strlen(char *s)
{
	unsigned int len;

	for (len = 0; s[len]; len++)
		;
	return (len);
}

