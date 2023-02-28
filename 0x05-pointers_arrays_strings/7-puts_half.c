#include "main.h"
#include <string.h>
/**
 * puts_half - function definition
 *
 * Description: A function that prints half of a string, end with \n
 * @str: string parameter
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, size = strlen(str);

	if (size % 2 != 0)
	{
		i = (size - 1) / 2;

		for (i++; i < size; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = size / 2; i < size; i++)
		{
			_putchar(str[i]);
		}
	}
_putchar('\n');
}
