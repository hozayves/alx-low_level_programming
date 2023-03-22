#include "function_pointers.h"
/**
 * array_iterator - function definition
 *
 * Description: A function that executes a function given as a parameter
 * on each element of an array
 * @array: array parameter
 * @size: size of array parameter
 * @action: pointer to function parameter
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
