#include <stdio.h>
#include "main.h"

/**
 * print_alphabter_x10 - prints the alphabet 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
	return (0);
}
