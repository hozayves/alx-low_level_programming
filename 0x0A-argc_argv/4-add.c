#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * checkDigit - function digit checker
 *
 * Description: A functin that check if array of character is a number
 * @num: arrays of character parameter
 *
 * Return: 1
 */
int checkDigit(char num[])
{
	int i, size = strlen(num);

	for (i = 0; i < size; i++)
	{
		if (!isdigit(num[i]))
			return (1);
	}
	return (0);
}
/**
 * main - function main
 *
 * Description: A program that adds positive nmbers
 * @argc: argument parameter
 * @argv: argument vector parameter
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
		printf("0\n");
	else
	{
		sum = 0;

		for (i = 1; i < argc; i++)
		{
			if (checkDigit(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
