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

	if (*str != '\0')
		return (1 + _strlen_recursion(str + 1));
	else
		return (0);
}
