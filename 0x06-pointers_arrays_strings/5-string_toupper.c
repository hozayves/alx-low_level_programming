#include "main.h"
/**
 * string_toupper - function definition
 *
 * Description: A function that changes all lowercase to uppercase
 * @string: string parameter
 *
 * Return: result
 */
char *string_toupper(char *string)
{
	int i = 0;

	for (i; string[i] != '\0'; i++)
	{
		if (string[i] >= 97 && string[i] <= 122)
		{
			string -= 32;
		}
	}
	return (string);
}
