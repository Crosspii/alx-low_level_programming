#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: the number to caluulate the factorial of
 * Return: the factorial of the numer, or -1 if error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
