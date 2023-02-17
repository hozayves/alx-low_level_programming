#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Function call */
int lastNum(int n);
/**
 * main - Entry point
 *
 * Description: A program find last digit and make comparison
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, lastNum(n));
	if (lastNum(n) > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastNum(n) < 6 && lastNum(n) > 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	else
	{
		printf("and is 0\n");
	}
	return (0);
}

/**
 * lastNum - Find a last digit of a number
 * @n: First operand
 *
 * Return: The last last digit
 */
int lastNum(int n)
{
	return (n % 10);
}
