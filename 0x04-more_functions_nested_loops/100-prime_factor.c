#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	int i;

	while (n % 2 == 0)
	{
		n /= 2;
	}
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	if (n > 2)
	{
		printf("%ld\n", n);
	}
	else
	{
		printf("%d\n", i - 2);
	}
	return (0);
}
