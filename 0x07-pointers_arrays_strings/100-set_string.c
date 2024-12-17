#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets teh value of a pointer to a char
 * @s: pointer to a pointer to char : string
 * @to: pointer to the string to set @s to point to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
