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
char *_strchar(char *s, char *c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (*c == '\0')
	{
		return (s);
	}
}
