#include "main.h"

/**
 * print_diagonal - Function definition
 *
 * Description: A function that draws a diagonal line in the terminal
 * @n: parameter
 *
 * Return: nothings
 */
void print_diagonal(int n)
{
	int cols, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (cols = 1; cols <= n; cols++)
		{
			for (space = 1; space < cols; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
