#include <stdio.h>
/**
 * rev_string - check code
 * @s: rev string
 * Return: 0
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char tmp;

	while (*end)
	{
		end++;
	}
	end--;
	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
