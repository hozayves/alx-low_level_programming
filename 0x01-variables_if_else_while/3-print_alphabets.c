#include <stdio.h>
#include <ctype.h>
/* Function prototype for alphabet */
void Alphabet(void);
/**
 * main - Entry point
 *
 * Description: A program that display alphabetical
 *
 * Return: always 0 (success)
 */
int main(void)
{
	Alphabet();
	putchar('\n');
	return (0);
}
/**
 * Alphabet - no entry value
 * @void: Not entry value
 *
 * Function: for loops and display alphabetic from a to z
 *
 * Return: nothing
 */
void Alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(toupper(ch));
	}
}
