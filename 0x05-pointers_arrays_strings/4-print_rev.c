#include "main.h"
#include <string.h>
/**
 * print_rev - function definition
 *
 * Description: A function that prints a string, in reverse
 * @s: parameter
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int size = strlen(s), i;

	for (i = size; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
