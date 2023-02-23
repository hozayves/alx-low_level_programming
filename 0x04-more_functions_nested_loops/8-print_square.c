#include "main.h"
/**
 * print_square - function prototype
 *
 * Description: A function that prints a square, followed by new line
 * @size: parameter
 *
 * Return: nothing
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
