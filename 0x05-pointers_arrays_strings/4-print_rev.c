#include "main.h"
#include <string.h>
/**
 * print_rev - function definition
 *
 * Description: A function that prints a string, in reverse and end with newline
 * @s: parameter
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int size = strlen(s);

	for (int i = size; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
