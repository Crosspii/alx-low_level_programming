#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabet 10 times
 *
 * Return: Always 0
 */

int main(void)
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
