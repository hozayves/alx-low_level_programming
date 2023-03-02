#include "main.h"
/**
 * reverse_array - function definition
 *
 * Description: A function that reverses the contents of array
 * @a: array paremeter
 * @n: size of array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j = n - 1, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
	}
}
