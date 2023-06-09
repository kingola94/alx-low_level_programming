#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents >= 25)
	{
		coins++;
		cents -= 25;
	}
	for (; cents >= 10; coins++)
		cents -= 10;
	for (; cents >= 5; coins++)
		cents -= 5;
	for (; cents >= 2; coins++)
		cents -= 2;
	for (; cents >= 1; coins++)
		cents -= 1;
	printf("%d\n", coins);
	return (0);
}
