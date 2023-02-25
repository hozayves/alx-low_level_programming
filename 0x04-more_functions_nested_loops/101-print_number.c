#include "main.h"
void long_int(int);

/**
 * print_number - function definition
 *
 * Description: a function that prints an integer
 * @n: parameter
 *
 * Return: result
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + 48);
}
