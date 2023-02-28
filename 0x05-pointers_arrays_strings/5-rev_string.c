#include "main.h"
#include <string.h>
/**
 * rev_string - function definition
 *
 * Description: A function that reverse a string
 * @s: string parameter
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int size = strlen(s) - 1, i;

	for (i = 0; i < size; i++)
	{
		int temp;

		temp = s[i];
		s[i] = s[size];
		s[size--] = temp;
	}
}
