#include "main.h"
/**
 * find _prime - function
 *
 * Description: A function that find a prime number
 * @n: number parameter
 * @i: iterator parameter
 *
 * Return: 0 or 1
 */
int find_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (find_prime(n, i - 1));
}
/**
 * is_prime_number - function definition
 *
 * Description: A function that check if it's prime or not
 * @n: number paramter
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, n - 1));
}
