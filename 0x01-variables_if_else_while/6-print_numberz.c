#include <stdio.h>
/**
 * main - prints numbers from 0 to 9 and a new line
 * Return: is always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
