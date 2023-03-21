#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: 'prints all alphabets'
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
