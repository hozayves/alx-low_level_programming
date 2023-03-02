#include "main.h"
/**
 * _strcmp - function definition
 *
 * Description: A function that compares two strings
 * @s1: string1 parameter
 * @s2: string2 parameter
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}

	return (r);
}
