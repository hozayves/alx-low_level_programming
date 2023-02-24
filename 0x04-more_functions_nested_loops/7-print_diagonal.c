#include"main.h"

/**
 * print_diagonal - Function definition
 *
 * Description: A function that draws a diagonal line
 * @n: parameter
 *
 * Return: nothings
 */

void print_diagonal(int n)
{
	int col, row;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (col = 1; col <= n; col++)
		{
			for (row = 1; row <= col; row++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
