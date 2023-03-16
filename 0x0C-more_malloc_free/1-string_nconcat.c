#include "main.h"
#include <string.h>
/**
 * string_nconcat - function definition
 *
 * Description: A function that concatenates two strings.
 * @s1: string 1 parameter
 * @s2: string 2 parameter
 * @n: first n bytes of s2 parameter
 */
char *stirng_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, i, j, size;
	char *nConcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	size = n;

	if (n >= s2_len)
		size = s2_len;

	nConcat = (char *)malloc(sizeof(char) * (s1_len + size) + 1);
	if (nConcat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		nConcat[i] = s1[i];
	}
	for (j = 0; j < size; j++)
	{
		nConcat[i] = s2[j];
		i++;
	}
	nConcat[i] = '\0';

	return (nConcat);
}
