#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A simple program that display alphabet in reverse order
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
