#include "function_pointers.h"
#include <stdlib.h>
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
	if (name == NULL || f == NULL)
		return;
	f(name);
}
