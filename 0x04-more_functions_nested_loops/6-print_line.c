#include "main.h"
/**
 * print_line - Function definition
 *
 * Description: A function that draw straight line
 * @n: parameter
 *
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
