#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int i;
	int e;

	for (i = 0; i <= 9; i++)
	{
		for (e = 0; e <= 9; e++)
		{
			if (e != i)
			{
				putchar(i + '0');
			}

		}
		if (i != e)
		{
			putchar(i + '0');
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
