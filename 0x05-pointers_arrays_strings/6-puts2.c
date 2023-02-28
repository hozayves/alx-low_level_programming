#include "main.h"
#include <string.h>
/**
 * puts2 - function definition
 *
 * Description: A function that prints every other character of a string
 * @str: string parameter
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i, size = strlen(str);

	for (i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
_putchar('\n');
}
