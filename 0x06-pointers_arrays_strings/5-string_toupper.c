#include "main.h"
/**
 * string_toupper - function definition
 *
 * Description: A function that changes all lowercase letters to uppercase
 * @str: parameter
 *
 * Return: result
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
