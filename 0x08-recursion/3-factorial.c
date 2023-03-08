#include "main.h"
/**
 * factorial - function definition
 *
 * Description: A function that returns the factorial of a give number
 * @n: parameter
 *
 * Return: number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
