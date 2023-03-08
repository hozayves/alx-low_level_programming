#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - function definition
 *
 * Description: A function that prints a string in reverse
 * @str: parameter
 *
 * Return: nothing
 */
void _print_rev_recursion(char *str)
{
	if (*str)
	{
		_print_rev_recursion(str + 1);
		printf("%c", *str);
	}
}
