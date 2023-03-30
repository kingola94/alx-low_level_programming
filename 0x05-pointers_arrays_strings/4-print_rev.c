#include "main.h"
#include <stdio.h>
/**
 * print_rev - check code
 * @s: print word
 * Return: 0
 */
void print_rev(char *s)
{
	char *i;

	i = s;
	while (*i != '\0')
	{
		i++;
	}
	while (i > s)
	{
		i--;
		putchar(*i);
	}
	putchar('\n');
}
