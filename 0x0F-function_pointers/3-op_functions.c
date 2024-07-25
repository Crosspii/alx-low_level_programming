#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: first int
 * @b: second int
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b
 * @a: the first int
 * @b: the second int
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b
 * @a: the first int
 * @b: the second int
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of the division of a by b
 * @a: the first int
 * @b: the second int
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (0); /* handling division by zero */
	}
	return (a / b);
}


/**
 * op_mod - Returns the remainder of the division of a by b
 * @a: the first int
 * @b: the second int
 * Return: Remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}
