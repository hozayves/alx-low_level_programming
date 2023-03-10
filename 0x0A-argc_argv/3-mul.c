#include "main.h"
#include <stdlib.h>
/**
 * main - function main
 *
 * Description: A program that multiplies two numbers
 * @argc: argument count parameter
 * @argv: argument vector parameter
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int pro = 1;
	
	if (argc > 2)
	{
		pro = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", pro);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
