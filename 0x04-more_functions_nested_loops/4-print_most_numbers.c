#include "main.h"
/**
 * print_most_numbers - Function definition
 *
 * Description: A function that prints the number
 * from 0 to 9 except 2 and 4 only
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i);
	}
}
