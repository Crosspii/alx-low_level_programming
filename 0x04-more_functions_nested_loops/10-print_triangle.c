#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle using # in the terminal
 * @size: size of the triangle to print
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
