#include "main.h"

int try_sqrt(int n, int try);

/**
 * _sqrt_recursion - Retuns the natural sqaure root of a number
 * @n: the number to find the square root of
 * Return: the antural square root, or -1 if it's not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (try_sqrt(n, 0));
}

/**
 * try_sqrt - finds the sqaure root
 * @n: the nmber to find the square root of
 * @try: teh current try for the square root
 * Return: the natural square root, or -1 if it's not found
 */
int try_sqrt(int n, int try)
{
	if (try * try == n)
	{
		return (try);
	}
	if (try * try > n)
	{
		return (-1);
	}
	return (try_sqrt(n, try + 1));
}
