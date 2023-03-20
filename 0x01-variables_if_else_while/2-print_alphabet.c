#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'prints the alphabet in lowercase'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char alpha;

	alpha = 'a';
	i = 0;
	for (i = 0; i < 26; i++)
		putchar(alpha + i);
	putchar('\n');
	return (0);
}
