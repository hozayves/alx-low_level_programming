#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Function definition
 *
 * Description: A function that checks for digit
 * @c: parameter
 *
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
