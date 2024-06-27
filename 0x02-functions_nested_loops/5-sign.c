#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n: the number to be checked
 *
 * Return: 1 or 0 or -1 depending on the n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		putchar('0');
	}
	else
	{
		return (-1);
		putchar('-');
	}
}
