#include <unistd.h>

/**
 *_putchar - writes the caracter c to stdout
 * @c: The character to print
 *
 * Return: On seccess 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
