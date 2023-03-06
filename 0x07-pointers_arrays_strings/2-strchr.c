#include "main.h"
#include <string.h>
/**
 * _strchar - functio definition
 *
 * @s: string parameter
 * @c: character to search parameter
 *
 * Return: c character or NULL
 */
char *_strchar(char *s, char *c)
{
	while (*s && *s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
return (NULL);
}
