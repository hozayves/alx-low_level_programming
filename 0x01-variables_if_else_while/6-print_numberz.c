#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A program that display single digit of base 10 starting from 0
 * not allowe use variable type of char
 * only use putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');

	return (0);
}
