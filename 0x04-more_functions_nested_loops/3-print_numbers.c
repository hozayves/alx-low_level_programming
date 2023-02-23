#include "main.h"
/**
 * print_numbers - function definitoin
 *
 * Description: A function that prints the numbers form 0 to 9
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
