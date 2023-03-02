#include "main.h"
#include <ctype.h>
/**
 * cap_string - function definition
 *
 * Description: A function that capitalize all worlds of a string
 * @string: parameter
 *
 * Return: result
 */
char *cat_string(char *string)
{
	int i, j;
	int special_char[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z' && i == 0)
		{
			string[i] -= 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (string[i] == special_char[j])
			{
				if (string[i] >= 'a' && string[i] <= 'z')
				{
					string[i] -= 32;
				}
			}
		}
	}
	return (string);
}
