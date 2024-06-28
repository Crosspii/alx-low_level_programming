#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 and a new line
 */
void print_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
}
