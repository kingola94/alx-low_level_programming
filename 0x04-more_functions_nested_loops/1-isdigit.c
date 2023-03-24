#include "main.h"
/**
 * _isdigit - check the code
 * @c: return 1 if digit and 0 otherwise
 * Return: 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
