#include <stdio.h>
/**
 * main - Entry Point
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments passed to the program
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
