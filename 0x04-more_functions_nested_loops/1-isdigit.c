#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: the caracter to check
 * Return: 1 if digit 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
