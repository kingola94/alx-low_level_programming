#include <stdio.h>
/**
 * main - Entry Point
 * @argc: Number of arguments passed
 * @argv: Array of strings containing arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
