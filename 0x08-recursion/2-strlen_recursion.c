#include "main.h"
/**
 * _strlen_recursion - function definition
 *
 * Description: A function that returns the length of a string
 * @str: parameter
 *
 * Return: lenght of string
 */
int _strlen_recursion(char *str)
{
	static int i;

	if (*str != '\0')
	{
		i++;
		_strlen_recursion(++str);
	}
	else
	{
		return (i);
	}
return 0;
}
