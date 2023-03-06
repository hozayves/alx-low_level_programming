#include "main.h"
#include <string.h>
/**
 * _strchr - functio definition
 *
 * @s: string parameter
 * @c: character to search parameter
 *
 * Return: c character or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
