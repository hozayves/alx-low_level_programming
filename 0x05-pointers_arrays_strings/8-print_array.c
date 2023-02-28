#include "main.h"
/**
 * print_array - funcftion definition
 *
 * Description: A function that prints n elements of an array
 * @a: pointer parameter for array
 * @n: number of element to be printed
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d\n", a[i]);
	}
}
