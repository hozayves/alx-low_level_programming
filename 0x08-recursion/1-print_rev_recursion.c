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
	int strLen = strlen(str);

	while (strLen >= 0)
	{
		printf("%c", str[strLen]);
		strLen--;
	}
}
