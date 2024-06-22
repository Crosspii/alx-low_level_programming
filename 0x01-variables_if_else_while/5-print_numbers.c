#include <stdio.h>
/**
 * main - prints alld the numbers from 0 to 9
 * return: is always 0
 */

int main(void)
{
	char num;
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return(0);
}
