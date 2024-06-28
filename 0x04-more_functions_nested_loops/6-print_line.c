#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			putchar('_');
			n--;
		}
		putchar('\n');
	}
}
