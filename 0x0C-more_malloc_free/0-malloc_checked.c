#include "main.h"
/**
 * malloc_checked - function definition
 *
 * Description: A function that allocates memory using malloc
 * @b: parameter
 *
 * Return: pointer of the memory
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		exit(98);
	return (void *malloc(b));
}
