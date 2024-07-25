#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a function pointer
 * @name: the name to be printed
 * @f: A pointer to a fnction that takes a char *s as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
