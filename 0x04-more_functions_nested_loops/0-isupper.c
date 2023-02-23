#include "main.h"
#include <ctype.h>
/**
 * _isupper - Function defition
 *
 * Description: A function that checks for uppercase character
 * @c: parameter
 *
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
