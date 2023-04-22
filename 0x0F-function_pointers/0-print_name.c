#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer to specify how to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(1);
	f(name);
}
