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
	void *i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
