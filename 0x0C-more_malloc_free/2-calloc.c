#include "main.h"
/**
 * _calloc - function definition
 *
 * Description: A function that allocates memory for an array, using malloc
 * @nmemb: parameter
 * @size: size parameter
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr_calloc;
	int i;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr_calloc = (char *)malloc(size * nmemb);
	if (ptr_calloc == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
	{
		ptr_calloc[i] = 0;
	}
	return (ptr_calloc);
}
