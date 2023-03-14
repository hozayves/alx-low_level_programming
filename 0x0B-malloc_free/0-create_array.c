#include "main.h"
/**
 * create_array - function definition
 *
 * Description: A function that create an array of chars, initilize it
 * with a specific char
 * @size: parameter
 * @c: parameter
 *
 * Return: NULL if size is 0 or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || arr == 0)
		return (NULL);
	else
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	return (arr);
}
