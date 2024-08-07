#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: the string to be reversed and printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
