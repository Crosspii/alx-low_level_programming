#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle using # in the terminal
 * @size: size of the triangle to print
 * Return: 0 if the size is 0
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
		return (0);
	}

	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
