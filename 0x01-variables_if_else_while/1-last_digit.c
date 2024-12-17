#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
/* prints the last digit */
	printf("Last digit of %d is %d ", n, ld);
/* cheking the value of the last digit */
	if (ld > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (ld == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
