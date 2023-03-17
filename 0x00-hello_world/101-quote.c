#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: 'Prints a given word without use of printf or puts'
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char *item = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, item, strlen(item));
	return (1);
}
