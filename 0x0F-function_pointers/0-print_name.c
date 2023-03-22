#include "function_pointers.h"
/**
 * print_name - function definition
 *
 * Description: A function thats prints a name.
 * @name: name parameter
 * @f: pointer to function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
