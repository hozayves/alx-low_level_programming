#include "function_pointers.h"
/**
 * int_index - function definition
 *
 * Description: A function that searches for a integer
 * @array: array parameter
 * @size: size parameter
 * @cmp: pointer to function parameter
 *
 * Return: index of found integer or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size > 0)
	{
		if (array && cmp)
		{
			int i;

			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
	}

	return (-1);
}
