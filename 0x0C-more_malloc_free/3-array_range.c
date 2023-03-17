#include "main.h"
/**
 * array_range - function definition
 *
 * Description: A function that creates an array of integer
 * @min: minumum parameter
 * @max: maximum parameter
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, *ptr_reserve;

	if (min > max)
		return (NULL);
	ptr_reserve = (int *)malloc(sizeof(int) * (max - min + 1));
	if (ptr_reserve == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr_reserve[i] = min;
		min++;
	}
	return (ptr_reserve);
}
