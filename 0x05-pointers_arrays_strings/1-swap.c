#include "main.h"
/**
 * swap_int - function definition
 *
 * Description: A funtion that swaps the values of two integers
 * @a: first number
 * @b: second number
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
