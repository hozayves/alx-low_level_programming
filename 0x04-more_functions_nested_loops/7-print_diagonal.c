#include "main.h"
/**
 * print_diagonal - Function definition
 *
 * Description: A function that draws  a diagonal line on the terminal
 * @n: parameter
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
