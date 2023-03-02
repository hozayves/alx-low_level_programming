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
	int i;
	int capitalize_next = 1;

	for (i = 0; string[i] != '\0'; i++)
	{
		if(isspace(string[i]))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			string[i] = toupper(string[i]);
			capitalize_next = 0;
		}
	}
	return (string);
}
