#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from N to 98
 * @n: starting number
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i > n)
				printf(", ");
			printf("%d", i);
		}
	}
	else
	{
		for (i = N; i >= 98; i--)
		{
			if (i < n)
				printf(", ");
			printf("%d", i);
		}
	}
	printf("\n");
}
