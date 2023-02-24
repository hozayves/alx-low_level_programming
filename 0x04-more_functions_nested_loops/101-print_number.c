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

	long_int(num);
}
/**
 * long_int - print long int using putchar() only
 * @n: acceptable parameter
 *
 * Return: nothing
 */
void long_int(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((n / 10) > 0)
		long_int(n / 10);
	_putchar(n % 10 + 48);
}
