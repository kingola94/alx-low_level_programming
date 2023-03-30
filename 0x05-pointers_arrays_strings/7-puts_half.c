#include "main.h"
/**
 * puts_half - check code
 * @str: split string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
