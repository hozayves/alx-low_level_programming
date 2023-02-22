#include "../main.h"
/**
 * main - Entry point
 *
 * Description: A program that find largest number in 3
 * @a: first parameter
 * @b: second parameter
 * @c: third parameter
 *
 * Return: Largest number
 */
int main(void)
{
	int a, b, c, result;

	a = 7;
	b = 19;
	c = 41;

	result = largest_number(a, b, c);

	printf("%d is the largest number\n", result);
	return (0);
}
